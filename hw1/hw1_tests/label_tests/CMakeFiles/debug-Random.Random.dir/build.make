# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /work/hw-melgart/hw1/hw1_tests

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /work/hw-melgart/hw1/hw1_tests

# Utility rule file for debug-Random.Random.

# Include the progress variables for this target.
include label_tests/CMakeFiles/debug-Random.Random.dir/progress.make

label_tests/CMakeFiles/debug-Random.Random:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/work/hw-melgart/hw1/hw1_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Debugging Random.Random with GDB..."
	cd /work/hw-melgart/hw1 && gdb --args /work/hw-melgart/hw1/hw1_tests/label_tests/label_tests --gtest_filter=Random.Random

debug-Random.Random: label_tests/CMakeFiles/debug-Random.Random
debug-Random.Random: label_tests/CMakeFiles/debug-Random.Random.dir/build.make

.PHONY : debug-Random.Random

# Rule to build all files generated by this target.
label_tests/CMakeFiles/debug-Random.Random.dir/build: debug-Random.Random

.PHONY : label_tests/CMakeFiles/debug-Random.Random.dir/build

label_tests/CMakeFiles/debug-Random.Random.dir/clean:
	cd /work/hw-melgart/hw1/hw1_tests/label_tests && $(CMAKE_COMMAND) -P CMakeFiles/debug-Random.Random.dir/cmake_clean.cmake
.PHONY : label_tests/CMakeFiles/debug-Random.Random.dir/clean

label_tests/CMakeFiles/debug-Random.Random.dir/depend:
	cd /work/hw-melgart/hw1/hw1_tests && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work/hw-melgart/hw1/hw1_tests /work/hw-melgart/hw1/hw1_tests/label_tests /work/hw-melgart/hw1/hw1_tests /work/hw-melgart/hw1/hw1_tests/label_tests /work/hw-melgart/hw1/hw1_tests/label_tests/CMakeFiles/debug-Random.Random.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : label_tests/CMakeFiles/debug-Random.Random.dir/depend

