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

# Utility rule file for debug-Parsers.MdParserLinksSepEnd.

# Include the progress variables for this target.
include mdparser_tests/CMakeFiles/debug-Parsers.MdParserLinksSepEnd.dir/progress.make

mdparser_tests/CMakeFiles/debug-Parsers.MdParserLinksSepEnd:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/work/hw-melgart/hw2/hw2_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Debugging Parsers.MdParserLinksSepEnd with GDB..."
	cd /work/hw-melgart/hw2 && gdb --args /work/hw-melgart/hw2/hw2_tests/mdparser_tests/mdparser_tests --gtest_filter=Parsers.MdParserLinksSepEnd

debug-Parsers.MdParserLinksSepEnd: mdparser_tests/CMakeFiles/debug-Parsers.MdParserLinksSepEnd
debug-Parsers.MdParserLinksSepEnd: mdparser_tests/CMakeFiles/debug-Parsers.MdParserLinksSepEnd.dir/build.make

.PHONY : debug-Parsers.MdParserLinksSepEnd

# Rule to build all files generated by this target.
mdparser_tests/CMakeFiles/debug-Parsers.MdParserLinksSepEnd.dir/build: debug-Parsers.MdParserLinksSepEnd

.PHONY : mdparser_tests/CMakeFiles/debug-Parsers.MdParserLinksSepEnd.dir/build

mdparser_tests/CMakeFiles/debug-Parsers.MdParserLinksSepEnd.dir/clean:
	cd /work/hw-melgart/hw2/hw2_tests/mdparser_tests && $(CMAKE_COMMAND) -P CMakeFiles/debug-Parsers.MdParserLinksSepEnd.dir/cmake_clean.cmake
.PHONY : mdparser_tests/CMakeFiles/debug-Parsers.MdParserLinksSepEnd.dir/clean

mdparser_tests/CMakeFiles/debug-Parsers.MdParserLinksSepEnd.dir/depend:
	cd /work/hw-melgart/hw2/hw2_tests && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work/hw-melgart/hw2/hw2_tests /work/hw-melgart/hw2/hw2_tests/mdparser_tests /work/hw-melgart/hw2/hw2_tests /work/hw-melgart/hw2/hw2_tests/mdparser_tests /work/hw-melgart/hw2/hw2_tests/mdparser_tests/CMakeFiles/debug-Parsers.MdParserLinksSepEnd.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : mdparser_tests/CMakeFiles/debug-Parsers.MdParserLinksSepEnd.dir/depend

