# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nanmiaowu/Documents/C++/Sec8/exer_8_0_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nanmiaowu/Documents/C++/Sec8/exer_8_0_1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/exer_8_0_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/exer_8_0_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exer_8_0_1.dir/flags.make

CMakeFiles/exer_8_0_1.dir/main.cpp.o: CMakeFiles/exer_8_0_1.dir/flags.make
CMakeFiles/exer_8_0_1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nanmiaowu/Documents/C++/Sec8/exer_8_0_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/exer_8_0_1.dir/main.cpp.o"
	/usr/local/opt/llvm/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exer_8_0_1.dir/main.cpp.o -c /Users/nanmiaowu/Documents/C++/Sec8/exer_8_0_1/main.cpp

CMakeFiles/exer_8_0_1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exer_8_0_1.dir/main.cpp.i"
	/usr/local/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nanmiaowu/Documents/C++/Sec8/exer_8_0_1/main.cpp > CMakeFiles/exer_8_0_1.dir/main.cpp.i

CMakeFiles/exer_8_0_1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exer_8_0_1.dir/main.cpp.s"
	/usr/local/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nanmiaowu/Documents/C++/Sec8/exer_8_0_1/main.cpp -o CMakeFiles/exer_8_0_1.dir/main.cpp.s

# Object files for target exer_8_0_1
exer_8_0_1_OBJECTS = \
"CMakeFiles/exer_8_0_1.dir/main.cpp.o"

# External object files for target exer_8_0_1
exer_8_0_1_EXTERNAL_OBJECTS =

exer_8_0_1: CMakeFiles/exer_8_0_1.dir/main.cpp.o
exer_8_0_1: CMakeFiles/exer_8_0_1.dir/build.make
exer_8_0_1: CMakeFiles/exer_8_0_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nanmiaowu/Documents/C++/Sec8/exer_8_0_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable exer_8_0_1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exer_8_0_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exer_8_0_1.dir/build: exer_8_0_1

.PHONY : CMakeFiles/exer_8_0_1.dir/build

CMakeFiles/exer_8_0_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/exer_8_0_1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/exer_8_0_1.dir/clean

CMakeFiles/exer_8_0_1.dir/depend:
	cd /Users/nanmiaowu/Documents/C++/Sec8/exer_8_0_1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nanmiaowu/Documents/C++/Sec8/exer_8_0_1 /Users/nanmiaowu/Documents/C++/Sec8/exer_8_0_1 /Users/nanmiaowu/Documents/C++/Sec8/exer_8_0_1/cmake-build-debug /Users/nanmiaowu/Documents/C++/Sec8/exer_8_0_1/cmake-build-debug /Users/nanmiaowu/Documents/C++/Sec8/exer_8_0_1/cmake-build-debug/CMakeFiles/exer_8_0_1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exer_8_0_1.dir/depend

