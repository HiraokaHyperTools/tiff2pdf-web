cmake_minimum_required(VERSION 3.10)

project(cmain)

find_package(PkgConfig)

add_executable(cmain cmain.cpp)

if(EMSCRIPTEN)
  set_target_properties(cmain
    PROPERTIES LINK_FLAGS "\
      -s \"EXTRA_EXPORTED_RUNTIME_METHODS=[\"ccall\", \"cwrap\", \"FS\"]\" \
      -s TOTAL_MEMORY=16MB \
      -s MODULARIZE=1 \
      -s EXPORT_NAME=\"create_cmain\" \
      -s WASM=1 \
      -s SINGLE_FILE=1 \
      "
  )

  install(TARGETS cmain
    RUNTIME DESTINATION .
  )
endif()

