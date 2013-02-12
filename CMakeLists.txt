cmake_minimum_required(VERSION 2.8)

# The name of the project is "C4".  CMakeLists files in this project can
# refer to the root source directory of the project as ${C4_SOURCE_DIR} and
# to the root binary directory of the project as ${C4_BINARY_DIR}.
project (C4)

add_subdirectory (Dependencies)

### SERIALIZER
# Make sure the compiler can find include files from the C4 library.
include_directories (${SERIALIZER_SOURCE_DIR})

# Make sure the linker can find the F8 library once it is built.
link_directories (${SERIALIZER_BINARY_DIR})

# Create a library called "C4" which includes the source file "c4.cxx".
# The extension is already found.  Any number of sources could be listed here.
add_library (C4 c4.cxx)

target_link_libraries (C4 SERIALIZER)
