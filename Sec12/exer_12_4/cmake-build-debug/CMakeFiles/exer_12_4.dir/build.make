# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /home/nanmiao/clion-2019.1.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/nanmiao/clion-2019.1.3/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nanmiao/Documents/Accelerated-C-plus-plus/Sec12/exer_12_4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nanmiao/Documents/Accelerated-C-plus-plus/Sec12/exer_12_4/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/exer_12_4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/exer_12_4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exer_12_4.dir/flags.make

CMakeFiles/exer_12_4.dir/main.cpp.o: CMakeFiles/exer_12_4.dir/flags.make
CMakeFiles/exer_12_4.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nanmiao/Documents/Accelerated-C-plus-plus/Sec12/exer_12_4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/exer_12_4.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exer_12_4.dir/main.cpp.o -c /home/nanmiao/Documents/Accelerated-C-plus-plus/Sec12/exer_12_4/main.cpp

CMakeFiles/exer_12_4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exer_12_4.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nanmiao/Documents/Accelerated-C-plus-plus/Sec12/exer_12_4/main.cpp > CMakeFiles/exer_12_4.dir/main.cpp.i

CMakeFiles/exer_12_4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exer_12_4.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nanmiao/Documents/Accelerated-C-plus-plus/Sec12/exer_12_4/main.cpp -o CMakeFiles/exer_12_4.dir/main.cpp.s

CMakeFiles/exer_12_4.dir/Str.cpp.o: CMakeFiles/exer_12_4.dir/flags.make
CMakeFiles/exer_12_4.dir/Str.cpp.o: ../Str.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nanmiao/Documents/Accelerated-C-plus-plus/Sec12/exer_12_4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/exer_12_4.dir/Str.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exer_12_4.dir/Str.cpp.o -c /home/nanmiao/Documents/Accelerated-C-plus-plus/Sec12/exer_12_4/Str.cpp

CMakeFiles/exer_12_4.dir/Str.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exer_12_4.dir/Str.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nanmiao/Documents/Accelerated-C-plus-plus/Sec12/exer_12_4/Str.cpp > CMakeFiles/exer_12_4.dir/Str.cpp.i

CMakeFiles/exer_12_4.dir/Str.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exer_12_4.dir/Str.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nanmiao/Documents/Accelerated-C-plus-plus/Sec12/exer_12_4/Str.cpp -o CMakeFiles/exer_12_4.dir/Str.cpp.s

# Object files for target exer_12_4
exer_12_4_OBJECTS = \
"CMakeFiles/exer_12_4.dir/main.cpp.o" \
"CMakeFiles/exer_12_4.dir/Str.cpp.o"

# External object files for target exer_12_4
exer_12_4_EXTERNAL_OBJECTS =

exer_12_4: CMakeFiles/exer_12_4.dir/main.cpp.o
exer_12_4: CMakeFiles/exer_12_4.dir/Str.cpp.o
exer_12_4: CMakeFiles/exer_12_4.dir/build.make
exer_12_4: CMakeFiles/exer_12_4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nanmiao/Documents/Accelerated-C-plus-plus/Sec12/exer_12_4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable exer_12_4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exer_12_4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exer_12_4.dir/build: exer_12_4

.PHONY : CMakeFiles/exer_12_4.dir/build

CMakeFiles/exer_12_4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/exer_12_4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/exer_12_4.dir/clean

CMakeFiles/exer_12_4.dir/depend:
	cd /home/nanmiao/Documents/Accelerated-C-plus-plus/Sec12/exer_12_4/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nanmiao/Documents/Accelerated-C-plus-plus/Sec12/exer_12_4 /home/nanmiao/Documents/Accelerated-C-plus-plus/Sec12/exer_12_4 /home/nanmiao/Documents/Accelerated-C-plus-plus/Sec12/exer_12_4/cmake-build-debug /home/nanmiao/Documents/Accelerated-C-plus-plus/Sec12/exer_12_4/cmake-build-debug /home/nanmiao/Documents/Accelerated-C-plus-plus/Sec12/exer_12_4/cmake-build-debug/CMakeFiles/exer_12_4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exer_12_4.dir/depend

