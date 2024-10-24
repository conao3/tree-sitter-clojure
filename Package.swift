// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterConao3Clojure",
    products: [
        .library(name: "TreeSitterConao3Clojure", targets: ["TreeSitterConao3Clojure"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterConao3Clojure",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterConao3ClojureTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterConao3Clojure",
            ],
            path: "bindings/swift/TreeSitterConao3ClojureTests"
        )
    ],
    cLanguageStandard: .c11
)
