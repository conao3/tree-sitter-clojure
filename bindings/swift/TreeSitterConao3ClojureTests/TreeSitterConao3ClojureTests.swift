import XCTest
import SwiftTreeSitter
import TreeSitterConao3Clojure

final class TreeSitterConao3ClojureTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_conao3_clojure())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Conao3Clojure grammar")
    }
}
