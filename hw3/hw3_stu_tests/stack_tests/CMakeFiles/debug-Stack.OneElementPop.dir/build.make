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
CMAKE_SOURCE_DIR = /work/hw-melgart/hw3/hw3_stu_tests

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /work/hw-melgart/hw3/hw3_stu_tests

# Utility rule file for debug-Stack.OneElementPop.

# Include the progress variables for this target.
include stack_tests/CMakeFiles/debug-Stack.OneElementPop.dir/progress.make

stack_tests/CMakeFiles/debug-Stack.OneElementPop:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/work/hw-melgart/hw3/hw3_stu_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Debugging Stack.OneElementPop with GDB..."
	cd /work/hw-melgart/hw3 && gdb --args /work/hw-melgart/hw3/hw3_stu_tests/stack_tests/stack_tests --gtest_filter=Stack.OneElementPop

debug-Stack.OneElementPop: stack_tests/CMakeFiles/debug-Stack.OneElementPop
debug-Stack.OneElementPop: stack_tests/CMakeFiles/debug-Stack.OneElementPop.dir/build.make

.PHONY : debug-Stack.OneElementPop

# Rule to build all files generated by this target.
stack_tests/CMakeFiles/debug-Stack.OneElementPop.dir/build: debug-Stack.OneElementPop

.PHONY : stack_tests/CMakeFiles/debug-Stack.OneElementPop.dir/build

stack_tests/CMakeFiles/debug-Stack.OneElementPop.dir/clean:
	cd /work/hw-melgart/hw3/hw3_stu_tests/stack_tests && $(CMAKE_COMMAND) -P CMakeFiles/debug-Stack.OneElementPop.dir/cmake_clean.cmake
.PHONY : stack_tests/CMakeFiles/debug-Stack.OneElementPop.dir/clean

stack_tests/CMakeFiles/debug-Stack.OneElementPop.dir/depend:
	cd /work/hw-melgart/hw3/hw3_stu_tests && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work/hw-melgart/hw3/hw3_stu_tests /work/hw-melgart/hw3/hw3_stu_tests/stack_tests /work/hw-melgart/hw3/hw3_stu_tests /work/hw-melgart/hw3/hw3_stu_tests/stack_tests /work/hw-melgart/hw3/hw3_stu_tests/stack_tests/CMakeFiles/debug-Stack.OneElementPop.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : stack_tests/CMakeFiles/debug-Stack.OneElementPop.dir/depend

