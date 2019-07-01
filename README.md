## 必要

- emsdk
  - See https://developer.mozilla.org/ja/docs/WebAssembly/C_to_wasm

## ビルド

1. emcc main.c -s WASM=1 -s EXIT_RUNTIME=1 -s "EXPORTED_FUNCTIONS=['_sayHi']"  -o hello.html
2. open hello.html
