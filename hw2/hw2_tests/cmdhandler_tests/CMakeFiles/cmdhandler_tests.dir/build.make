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
CMAKE_SOURCE_DIR = /work/hw-melgart/hw2/hw2_tests

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /work/hw-melgart/hw2/hw2_tests

# Include any dependencies generated for this target.
include cmdhandler_tests/CMakeFiles/cmdhandler_tests.dir/depend.make

# Include the progress variables for this target.
include cmdhandler_tests/CMakeFiles/cmdhandler_tests.dir/progress.make

# Include the compile flags for this target's objects.
include cmdhandler_tests/CMakeFiles/cmdhandler_tests.dir/flags.make

cmdhandler_tests/CMakeFiles/cmdhandler_tests.dir/handler_tests.cpp.o: cmdhandler_tests/CMakeFiles/cmdhandler_tests.dir/flags.make
cmdhandler_tests/CMakeFiles/cmdhandler_tests.dir/handler_tests.cpp.o: cmdhandler_tests/handler_tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/hw-melgart/hw2/hw2_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object cmdhandler_tests/CMakeFiles/cmdhandler_tests.dir/handler_tests.cpp.o"
	cd /work/hw-melgart/hw2/hw2_tests/cmdhandler_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cmdhandler_tests.dir/handler_tests.cpp.o -c /work/hw-melgart/hw2/hw2_tests/cmdhandler_tests/handler_tests.cpp

cmdhandler_tests/CMakeFiles/cmdhandler_tests.dir/handler_tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cmdhandler_tests.dir/handler_tests.cpp.i"
	cd /work/hw-melgart/hw2/hw2_tests/cmdhandler_tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/hw-melgart/hw2/hw2_tests/cmdhandler_tests/handler_tests.cpp > CMakeFiles/cmdhandler_tests.dir/handler_tests.cpp.i

cmdhandler_tests/CMakeFiles/cmdhandler_tests.dir/handler_tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cmdhandler_tests.dir/handler_tests.cpp.s"
	cd /work/hw-melgart/hw2/hw2_tests/cmdhandler_tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/hw-melgart/hw2/hw2_tests/cmdhandler_tests/handler_tests.cpp -o CMakeFiles/cmdhandler_tests.dir/handler_tests.cpp.s

# Object files for target cmdhandler_tests
cmdhandler_tests_OBJECTS = \
"CMakeFiles/cmdhandler_tests.dir/handler_tests.cpp.o"

# External object files for target cmdhandler_tests
cmdhandler_tests_EXTERNAL_OBJECTS =

cmdhandler_tests/cmdhandler_tests: cmdhandler_tests/CMakeFiles/cmdhandler_tests.dir/handler_tests.cpp.o
cmdhandler_tests/cmdhandler_tests: cmdhandler_tests/CMakeFiles/cmdhandler_tests.dir/build.make
cmdhandler_tests/cmdhandler_tests: cmdhandler_tests/libhw2_cmdhandler.a
cmdhandler_tests/cmdhandler_tests: testing_utils/libtesting_utils.a
cmdhandler_tests/cmdhandler_tests: /usr/lib/x86_64-linux-gnu/libgtest_main.a
cmdhandler_tests/cmdhandler_tests: /usr/lib/x86_64-linux-gnu/libgtest.a
cmdhandler_tests/cmdhandler_tests: testing_utils/kwsys/libkwsys.a
cmdhandler_tests/cmdhandler_tests: cmdhandler_tests/CMakeFiles/cmdhandler_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/work/hw-melgart/hw2/hw2_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cmdhandler_tests"
	cd /work/hw-melgart/hw2/hw2_tests/cmdhandler_tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cmdhandler_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
cmdhandler_tests/CMakeFiles/cmdhandler_tests.dir/build: cmdhandler_tests/cmdhandler_tests

.PHONY : cmdhandler_tests/CMakeFiles/cmdhandler_tests.dir/build

cmdhandler_tests/CMakeFiles/cmdhandler_tests.dir/clean:
	cd /work/hw-melgart/hw2/hw2_tests/cmdhandler_tests && $(CMAKE_COMMAND) -P CMakeFiles/cmdhandler_tests.dir/cmake_clean.cmake
.PHONY : cmdhandler_tests/CMakeFiles/cmdhandler_tests.dir/clean

cmdhandler_tests/CMakeFiles/cmdhandler_tests.dir/depend:
	cd /work/hw-melgart/hw2/hw2_tests && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work/hw-melgart/hw2/hw2_tests /work/hw-melgart/hw2/hw2_tests/cmdhandler_tests /work/hw-melgart/hw2/hw2_tests /work/hw-melgart/hw2/hw2_tests/cmdhandler_tests /work/hw-melgart/hw2/hw2_tests/cmdhandler_tests/CMakeFiles/cmdhandler_tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : cmdhandler_tests/CMakeFiles/cmdhandler_tests.dir/depend

