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
include mdparser_tests/CMakeFiles/mdparser_tests.dir/depend.make

# Include the progress variables for this target.
include mdparser_tests/CMakeFiles/mdparser_tests.dir/progress.make

# Include the compile flags for this target's objects.
include mdparser_tests/CMakeFiles/mdparser_tests.dir/flags.make

mdparser_tests/CMakeFiles/mdparser_tests.dir/mdparser-tests.cpp.o: mdparser_tests/CMakeFiles/mdparser_tests.dir/flags.make
mdparser_tests/CMakeFiles/mdparser_tests.dir/mdparser-tests.cpp.o: mdparser_tests/mdparser-tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/hw-melgart/hw2/hw2_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object mdparser_tests/CMakeFiles/mdparser_tests.dir/mdparser-tests.cpp.o"
	cd /work/hw-melgart/hw2/hw2_tests/mdparser_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mdparser_tests.dir/mdparser-tests.cpp.o -c /work/hw-melgart/hw2/hw2_tests/mdparser_tests/mdparser-tests.cpp

mdparser_tests/CMakeFiles/mdparser_tests.dir/mdparser-tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mdparser_tests.dir/mdparser-tests.cpp.i"
	cd /work/hw-melgart/hw2/hw2_tests/mdparser_tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/hw-melgart/hw2/hw2_tests/mdparser_tests/mdparser-tests.cpp > CMakeFiles/mdparser_tests.dir/mdparser-tests.cpp.i

mdparser_tests/CMakeFiles/mdparser_tests.dir/mdparser-tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mdparser_tests.dir/mdparser-tests.cpp.s"
	cd /work/hw-melgart/hw2/hw2_tests/mdparser_tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/hw-melgart/hw2/hw2_tests/mdparser_tests/mdparser-tests.cpp -o CMakeFiles/mdparser_tests.dir/mdparser-tests.cpp.s

# Object files for target mdparser_tests
mdparser_tests_OBJECTS = \
"CMakeFiles/mdparser_tests.dir/mdparser-tests.cpp.o"

# External object files for target mdparser_tests
mdparser_tests_EXTERNAL_OBJECTS =

mdparser_tests/mdparser_tests: mdparser_tests/CMakeFiles/mdparser_tests.dir/mdparser-tests.cpp.o
mdparser_tests/mdparser_tests: mdparser_tests/CMakeFiles/mdparser_tests.dir/build.make
mdparser_tests/mdparser_tests: mdparser_tests/libhw2_mdparser.a
mdparser_tests/mdparser_tests: testing_utils/libtesting_utils.a
mdparser_tests/mdparser_tests: /usr/lib/x86_64-linux-gnu/libgtest_main.a
mdparser_tests/mdparser_tests: /usr/lib/x86_64-linux-gnu/libgtest.a
mdparser_tests/mdparser_tests: testing_utils/kwsys/libkwsys.a
mdparser_tests/mdparser_tests: mdparser_tests/CMakeFiles/mdparser_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/work/hw-melgart/hw2/hw2_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mdparser_tests"
	cd /work/hw-melgart/hw2/hw2_tests/mdparser_tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mdparser_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
mdparser_tests/CMakeFiles/mdparser_tests.dir/build: mdparser_tests/mdparser_tests

.PHONY : mdparser_tests/CMakeFiles/mdparser_tests.dir/build

mdparser_tests/CMakeFiles/mdparser_tests.dir/clean:
	cd /work/hw-melgart/hw2/hw2_tests/mdparser_tests && $(CMAKE_COMMAND) -P CMakeFiles/mdparser_tests.dir/cmake_clean.cmake
.PHONY : mdparser_tests/CMakeFiles/mdparser_tests.dir/clean

mdparser_tests/CMakeFiles/mdparser_tests.dir/depend:
	cd /work/hw-melgart/hw2/hw2_tests && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work/hw-melgart/hw2/hw2_tests /work/hw-melgart/hw2/hw2_tests/mdparser_tests /work/hw-melgart/hw2/hw2_tests /work/hw-melgart/hw2/hw2_tests/mdparser_tests /work/hw-melgart/hw2/hw2_tests/mdparser_tests/CMakeFiles/mdparser_tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : mdparser_tests/CMakeFiles/mdparser_tests.dir/depend

