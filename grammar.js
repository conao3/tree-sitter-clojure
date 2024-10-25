/**
 * @file Conao3 Clojure parser
 * @author Naoya Yamashita <conao3@gmail.com>
 * @license Apache-2.0
 */

// https://clojure.org/reference/reader

const interpose = (term, separator) => seq(
  term,
  repeat(seq(separator, term))
);

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
module.exports = grammar({
  name: "conao3_clojure",
  extras: $ => [
    /\s/,
    ',',  // comma is ignoreed in Clojure
    $.comment,
  ],

  rules: {
    source: $ => repeat($._form),

    _form: $ => choice(
      $.list,
      $.vector,
      $.map,
      $.set,

      $.string,
      $.number,
      $.symbol,
      $.character,
      $.nil,
      $.boolean,
      $.keyword,
    ),

    list: $ => seq('(', repeat($._form), ')'),
    vector: $ => seq('[', repeat($._form), ']'),
    map: $ => seq(
      optional(seq('#', $.keyword)),
      '{',
      repeat(seq($._form, $._form)),
      '}',
    ),
    set: $ => seq('#{', repeat($._form), '}'),

    // Symbols begin with a non-numeric character and can contain
    // alphanumeric characters and *, +, !, -, _, ', ?, <, > and
    // = (other characters may be allowed eventually).
    //
    // '/' has special meaning, it can be used once in the middle
    // of a symbol to separate the namespace from the name,
    // e.g. my-namespace/foo. '/' by itself names the division
    // function.
    //
    // '.' has special meaning - it can be used one or more times
    // in the middle of a symbol to designate a fully-qualified
    // class name, e.g. java.util.BitSet, or in namespace
    // names. Symbols beginning or ending with '.' are reserved
    // by Clojure. Symbols containing / or . are said to be
    // 'qualified'.
    //
    // Symbols beginning or ending with ':' are reserved by
    // Clojure. A symbol can contain one or more non-repeating
    // ':'s.

    symbol: $ => seq(optional($._namespace), $._symbol),
    _symbol: $ => /[a-zA-Z\*\+!\-_'\?<>=][a-zA-Z0-9\*\+!\-_\?'<>=]*/,
    _namespace: $ => seq(interpose($._symbol, '.'), '/'),

    // Strings - Enclosed in "double quotes". May span multiple
    // lines. Standard Java escape characters are supported.
    string: $ => /"[^"]*"/,

    // Numbers - generally represented as per Java
    //
    // Integers can be indefinitely long and will be read as
    // Longs when in range and clojure.lang.BigInts
    // otherwise. Integers with an N suffix are always read as
    // BigInts. Octal notation is allowed with a 0 prefix, and
    // hexadecimal notation is allowed with a 0x prefix. When
    // possible, they can be specified in any base with radix
    // from 2 to 36 (see Long.parseLong()); for example 2r101010,
    // 052, 8r52, 0x2a, 36r16, and 42 are all the same Long.
    //
    // Floating point numbers are read as Doubles; with M suffix
    // they are read as BigDecimals.
    //
    // Ratios are supported, e.g. 22/7.
    //
    // Symbolic values - ##Inf, ##-Inf, and ##NaN
    number: $ => {
      const sign = /[+-]?/;
      const int = /[1-9][0-9]*/;
      const binary = /2r[01]+/;
      const octal = /0[0-7]+/;
      const hex = /0x[0-9A-Fa-f]+/;
      const radix = /36r[0-9A-Z]+/;
      const float = /[0-9]*\.[0-9]+/;
      const ratio = /[0-9]+\/[0-9]+/;
      const symbolic_value = choice('##Inf', '##-Inf', '##NaN');

      return choice(
        token(
          seq(
            sign,
            choice(
              seq(
                choice(int, binary, octal, hex, radix),
                optional(choice('N', 'M')),
              ),
              seq(
                float,
                optional(seq(choice('e', 'E'), sign, int)),
                optional('M'),
              ),
              ratio,
            ),
          ),
        ),
        symbolic_value,
      )
    },

    // Characters - preceded by a backslash: \c. \newline,
    // \space, \tab, \formfeed, \backspace, and \return yield the
    // corresponding characters. Unicode characters are
    // represented with \uNNNN as in Java. Octals are represented
    // with \oNNN.
    character: $ => choice(
      '\\newline',
      '\\space',
      '\\tab',
      '\\formfeed',
      '\\backspace',
      '\\return',
      /\\u[0-9a-fA-F]{4}/,        // Unicode characters
      /\\o[0-7]{3}/,              // Octal characters
      /\\./                       // Single character
    ),

    // nil Means 'nothing/no-value'- represents Java null and
    // tests logical false
    nil: $ => 'nil',

    // Booleans - true and false
    boolean: $ => choice('true', 'false'),

    // Keywords - Keywords are like symbols, except:
    //
    // They can and must begin with a colon, e.g. :fred.
    //
    // Like symbols, they can contain a namespace, :person/name,
    // which may contain '.'s.
    //
    // A keyword that begins with two colons is auto-resolved in
    // the current namespace to a qualified keyword:
    //
    // If the keyword is unqualified, the namespace will be the
    // current namespace. In user, ::rect is read as :user/rect.
    //
    // If the keyword is qualified, the namespace will be
    // resolved using aliases in the current namespace. In a
    // namespace where x is aliased to example, ::x/foo resolves
    // to :example/foo.
    keyword: $ => seq(/::?/, optional($._namespace), $._symbol),

    // comments
    comment: $ => /;.*/,
  }
});
