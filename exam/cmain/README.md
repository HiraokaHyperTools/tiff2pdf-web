# cmain

## wasm

```sh
mkdir wasm
cd wasm
cmake -G "Unix Makefiles" \
 -DCMAKE_TOOLCHAIN_FILE:PATH=~/emsdk/upstream/emscripten/cmake/Modules/Platform/Emscripten.cmake \
 -DCMAKE_INSTALL_PREFIX:PATH=../../../docs/js \
 ..
make
```

## MinGW

```sh
mkdir build
cd build
cmake -G "MSYS Makefiles" ..
make
```

