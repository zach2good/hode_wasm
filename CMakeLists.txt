project(hode_wasm)
cmake_minimum_required(VERSION 3.15)
enable_language(CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

message(STATUS "CMake Version: ${CMAKE_VERSION}")
message(STATUS "CMAKE_CXX_COMPILER: ${CMAKE_CXX_COMPILER}")
message(STATUS "CMAKE_TOOLCHAIN_FILE: ${CMAKE_TOOLCHAIN_FILE}")

file(GLOB SRC *.cpp 3p/inih/ini.c 3p/libxbr-standalone/xbr.c)

add_executable(${CMAKE_PROJECT_NAME} ${SRC})

target_compile_options(${CMAKE_PROJECT_NAME} PRIVATE -g -Wall -pedantic -MMD)

if(EMSCRIPTEN)
  set(CMAKE_EXECUTABLE_SUFFIX ".html")
  target_link_libraries(${CMAKE_PROJECT_NAME} "-s WASM=1 -s USE_SDL=2 -s FULL_ES2=1 -s ALLOW_MEMORY_GROWTH=1 -s TOTAL_MEMORY=78643200 --preload-file ${CMAKE_CURRENT_SOURCE_DIR}/HOD --emrun")
else() # Assume OSX
  set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
  find_package(SDL2 REQUIRED)
  target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE ${SDL2_INCLUDE_DIRS})
  target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE ${SDL2_LIBRARY})
endif(EMSCRIPTEN)
