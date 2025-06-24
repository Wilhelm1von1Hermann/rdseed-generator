// linking those objects!

use cc;

fn main() {
    println!("cargo::rerun-if-changed=src/hello.c");

    cc::Build::new()
        .file("src/main.c")
        // adds "-mrdseed" argument to the gcc
        .flag("-mrdseed")
        .compile("hello");
}
