package tree_sitter_conao3_clojure_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_conao3_clojure "github.com/conao3/tree-sitter-conao3-clojure/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_conao3_clojure.Language())
	if language == nil {
		t.Errorf("Error loading Conao3Clojure grammar")
	}
}
