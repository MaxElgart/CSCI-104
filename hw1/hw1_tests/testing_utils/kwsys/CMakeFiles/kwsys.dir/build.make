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

# Include any dependencies generated for this target.
include testing_utils/kwsys/CMakeFiles/kwsys.dir/depend.make

# Include the progress variables for this target.
include testing_utils/kwsys/CMakeFiles/kwsys.dir/progress.make

# Include the compile flags for this target's objects.
include testing_utils/kwsys/CMakeFiles/kwsys.dir/flags.make

testing_utils/kwsys/CMakeFiles/kwsys.dir/ProcessUNIX.c.o: testing_utils/kwsys/CMakeFiles/kwsys.dir/flags.make
testing_utils/kwsys/CMakeFiles/kwsys.dir/ProcessUNIX.c.o: testing_utils/kwsys/ProcessUNIX.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/hw-melgart/hw1/hw1_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object testing_utils/kwsys/CMakeFiles/kwsys.dir/ProcessUNIX.c.o"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -DKWSYS_C_HAS_PTRDIFF_T=1 -DKWSYS_C_HAS_SSIZE_T=1 -DKWSYS_C_HAS_CLOCK_GETTIME_MONOTONIC=1 -o CMakeFiles/kwsys.dir/ProcessUNIX.c.o   -c /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/ProcessUNIX.c

testing_utils/kwsys/CMakeFiles/kwsys.dir/ProcessUNIX.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/kwsys.dir/ProcessUNIX.c.i"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -DKWSYS_C_HAS_PTRDIFF_T=1 -DKWSYS_C_HAS_SSIZE_T=1 -DKWSYS_C_HAS_CLOCK_GETTIME_MONOTONIC=1 -E /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/ProcessUNIX.c > CMakeFiles/kwsys.dir/ProcessUNIX.c.i

testing_utils/kwsys/CMakeFiles/kwsys.dir/ProcessUNIX.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/kwsys.dir/ProcessUNIX.c.s"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -DKWSYS_C_HAS_PTRDIFF_T=1 -DKWSYS_C_HAS_SSIZE_T=1 -DKWSYS_C_HAS_CLOCK_GETTIME_MONOTONIC=1 -S /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/ProcessUNIX.c -o CMakeFiles/kwsys.dir/ProcessUNIX.c.s

testing_utils/kwsys/CMakeFiles/kwsys.dir/EncodingC.c.o: testing_utils/kwsys/CMakeFiles/kwsys.dir/flags.make
testing_utils/kwsys/CMakeFiles/kwsys.dir/EncodingC.c.o: testing_utils/kwsys/EncodingC.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/hw-melgart/hw1/hw1_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object testing_utils/kwsys/CMakeFiles/kwsys.dir/EncodingC.c.o"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && /usr/bin/cc $(C_DEFINES) -DKWSYS_ENCODING_DEFAULT_CODEPAGE=CP_ACP $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/kwsys.dir/EncodingC.c.o   -c /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/EncodingC.c

testing_utils/kwsys/CMakeFiles/kwsys.dir/EncodingC.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/kwsys.dir/EncodingC.c.i"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && /usr/bin/cc $(C_DEFINES) -DKWSYS_ENCODING_DEFAULT_CODEPAGE=CP_ACP $(C_INCLUDES) $(C_FLAGS) -E /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/EncodingC.c > CMakeFiles/kwsys.dir/EncodingC.c.i

testing_utils/kwsys/CMakeFiles/kwsys.dir/EncodingC.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/kwsys.dir/EncodingC.c.s"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && /usr/bin/cc $(C_DEFINES) -DKWSYS_ENCODING_DEFAULT_CODEPAGE=CP_ACP $(C_INCLUDES) $(C_FLAGS) -S /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/EncodingC.c -o CMakeFiles/kwsys.dir/EncodingC.c.s

testing_utils/kwsys/CMakeFiles/kwsys.dir/System.c.o: testing_utils/kwsys/CMakeFiles/kwsys.dir/flags.make
testing_utils/kwsys/CMakeFiles/kwsys.dir/System.c.o: testing_utils/kwsys/System.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/hw-melgart/hw1/hw1_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object testing_utils/kwsys/CMakeFiles/kwsys.dir/System.c.o"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -DKWSYS_C_HAS_PTRDIFF_T=1 -DKWSYS_C_HAS_SSIZE_T=1 -DKWSYS_C_HAS_CLOCK_GETTIME_MONOTONIC=1 -o CMakeFiles/kwsys.dir/System.c.o   -c /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/System.c

testing_utils/kwsys/CMakeFiles/kwsys.dir/System.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/kwsys.dir/System.c.i"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -DKWSYS_C_HAS_PTRDIFF_T=1 -DKWSYS_C_HAS_SSIZE_T=1 -DKWSYS_C_HAS_CLOCK_GETTIME_MONOTONIC=1 -E /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/System.c > CMakeFiles/kwsys.dir/System.c.i

testing_utils/kwsys/CMakeFiles/kwsys.dir/System.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/kwsys.dir/System.c.s"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -DKWSYS_C_HAS_PTRDIFF_T=1 -DKWSYS_C_HAS_SSIZE_T=1 -DKWSYS_C_HAS_CLOCK_GETTIME_MONOTONIC=1 -S /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/System.c -o CMakeFiles/kwsys.dir/System.c.s

testing_utils/kwsys/CMakeFiles/kwsys.dir/Directory.cxx.o: testing_utils/kwsys/CMakeFiles/kwsys.dir/flags.make
testing_utils/kwsys/CMakeFiles/kwsys.dir/Directory.cxx.o: testing_utils/kwsys/Directory.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/hw-melgart/hw1/hw1_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object testing_utils/kwsys/CMakeFiles/kwsys.dir/Directory.cxx.o"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kwsys.dir/Directory.cxx.o -c /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/Directory.cxx

testing_utils/kwsys/CMakeFiles/kwsys.dir/Directory.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kwsys.dir/Directory.cxx.i"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/Directory.cxx > CMakeFiles/kwsys.dir/Directory.cxx.i

testing_utils/kwsys/CMakeFiles/kwsys.dir/Directory.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kwsys.dir/Directory.cxx.s"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/Directory.cxx -o CMakeFiles/kwsys.dir/Directory.cxx.s

testing_utils/kwsys/CMakeFiles/kwsys.dir/EncodingCXX.cxx.o: testing_utils/kwsys/CMakeFiles/kwsys.dir/flags.make
testing_utils/kwsys/CMakeFiles/kwsys.dir/EncodingCXX.cxx.o: testing_utils/kwsys/EncodingCXX.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/hw-melgart/hw1/hw1_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object testing_utils/kwsys/CMakeFiles/kwsys.dir/EncodingCXX.cxx.o"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && /usr/bin/c++  $(CXX_DEFINES) -DKWSYS_ENCODING_DEFAULT_CODEPAGE=CP_ACP $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kwsys.dir/EncodingCXX.cxx.o -c /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/EncodingCXX.cxx

testing_utils/kwsys/CMakeFiles/kwsys.dir/EncodingCXX.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kwsys.dir/EncodingCXX.cxx.i"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && /usr/bin/c++ $(CXX_DEFINES) -DKWSYS_ENCODING_DEFAULT_CODEPAGE=CP_ACP $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/EncodingCXX.cxx > CMakeFiles/kwsys.dir/EncodingCXX.cxx.i

testing_utils/kwsys/CMakeFiles/kwsys.dir/EncodingCXX.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kwsys.dir/EncodingCXX.cxx.s"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && /usr/bin/c++ $(CXX_DEFINES) -DKWSYS_ENCODING_DEFAULT_CODEPAGE=CP_ACP $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/EncodingCXX.cxx -o CMakeFiles/kwsys.dir/EncodingCXX.cxx.s

testing_utils/kwsys/CMakeFiles/kwsys.dir/RegularExpression.cxx.o: testing_utils/kwsys/CMakeFiles/kwsys.dir/flags.make
testing_utils/kwsys/CMakeFiles/kwsys.dir/RegularExpression.cxx.o: testing_utils/kwsys/RegularExpression.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/hw-melgart/hw1/hw1_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object testing_utils/kwsys/CMakeFiles/kwsys.dir/RegularExpression.cxx.o"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kwsys.dir/RegularExpression.cxx.o -c /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/RegularExpression.cxx

testing_utils/kwsys/CMakeFiles/kwsys.dir/RegularExpression.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kwsys.dir/RegularExpression.cxx.i"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/RegularExpression.cxx > CMakeFiles/kwsys.dir/RegularExpression.cxx.i

testing_utils/kwsys/CMakeFiles/kwsys.dir/RegularExpression.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kwsys.dir/RegularExpression.cxx.s"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/RegularExpression.cxx -o CMakeFiles/kwsys.dir/RegularExpression.cxx.s

testing_utils/kwsys/CMakeFiles/kwsys.dir/SystemTools.cxx.o: testing_utils/kwsys/CMakeFiles/kwsys.dir/flags.make
testing_utils/kwsys/CMakeFiles/kwsys.dir/SystemTools.cxx.o: testing_utils/kwsys/SystemTools.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/hw-melgart/hw1/hw1_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object testing_utils/kwsys/CMakeFiles/kwsys.dir/SystemTools.cxx.o"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && /usr/bin/c++  $(CXX_DEFINES) -DKWSYS_CXX_HAS_ENVIRON_IN_STDLIB_H=0 -DKWSYS_CXX_HAS_SETENV=1 -DKWSYS_CXX_HAS_UNSETENV=1 -DKWSYS_CXX_HAS_UTIMENSAT=1 -DKWSYS_CXX_HAS_UTIMES=1 -DKWSYS_CXX_STAT_HAS_ST_MTIM=1 -DKWSYS_CXX_STAT_HAS_ST_MTIMESPEC=0 $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kwsys.dir/SystemTools.cxx.o -c /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/SystemTools.cxx

testing_utils/kwsys/CMakeFiles/kwsys.dir/SystemTools.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kwsys.dir/SystemTools.cxx.i"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && /usr/bin/c++ $(CXX_DEFINES) -DKWSYS_CXX_HAS_ENVIRON_IN_STDLIB_H=0 -DKWSYS_CXX_HAS_SETENV=1 -DKWSYS_CXX_HAS_UNSETENV=1 -DKWSYS_CXX_HAS_UTIMENSAT=1 -DKWSYS_CXX_HAS_UTIMES=1 -DKWSYS_CXX_STAT_HAS_ST_MTIM=1 -DKWSYS_CXX_STAT_HAS_ST_MTIMESPEC=0 $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/SystemTools.cxx > CMakeFiles/kwsys.dir/SystemTools.cxx.i

testing_utils/kwsys/CMakeFiles/kwsys.dir/SystemTools.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kwsys.dir/SystemTools.cxx.s"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && /usr/bin/c++ $(CXX_DEFINES) -DKWSYS_CXX_HAS_ENVIRON_IN_STDLIB_H=0 -DKWSYS_CXX_HAS_SETENV=1 -DKWSYS_CXX_HAS_UNSETENV=1 -DKWSYS_CXX_HAS_UTIMENSAT=1 -DKWSYS_CXX_HAS_UTIMES=1 -DKWSYS_CXX_STAT_HAS_ST_MTIM=1 -DKWSYS_CXX_STAT_HAS_ST_MTIMESPEC=0 $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/SystemTools.cxx -o CMakeFiles/kwsys.dir/SystemTools.cxx.s

testing_utils/kwsys/CMakeFiles/kwsys.dir/FStream.cxx.o: testing_utils/kwsys/CMakeFiles/kwsys.dir/flags.make
testing_utils/kwsys/CMakeFiles/kwsys.dir/FStream.cxx.o: testing_utils/kwsys/FStream.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/hw-melgart/hw1/hw1_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object testing_utils/kwsys/CMakeFiles/kwsys.dir/FStream.cxx.o"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kwsys.dir/FStream.cxx.o -c /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/FStream.cxx

testing_utils/kwsys/CMakeFiles/kwsys.dir/FStream.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kwsys.dir/FStream.cxx.i"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/FStream.cxx > CMakeFiles/kwsys.dir/FStream.cxx.i

testing_utils/kwsys/CMakeFiles/kwsys.dir/FStream.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kwsys.dir/FStream.cxx.s"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/FStream.cxx -o CMakeFiles/kwsys.dir/FStream.cxx.s

# Object files for target kwsys
kwsys_OBJECTS = \
"CMakeFiles/kwsys.dir/ProcessUNIX.c.o" \
"CMakeFiles/kwsys.dir/EncodingC.c.o" \
"CMakeFiles/kwsys.dir/System.c.o" \
"CMakeFiles/kwsys.dir/Directory.cxx.o" \
"CMakeFiles/kwsys.dir/EncodingCXX.cxx.o" \
"CMakeFiles/kwsys.dir/RegularExpression.cxx.o" \
"CMakeFiles/kwsys.dir/SystemTools.cxx.o" \
"CMakeFiles/kwsys.dir/FStream.cxx.o"

# External object files for target kwsys
kwsys_EXTERNAL_OBJECTS =

testing_utils/kwsys/libkwsys.a: testing_utils/kwsys/CMakeFiles/kwsys.dir/ProcessUNIX.c.o
testing_utils/kwsys/libkwsys.a: testing_utils/kwsys/CMakeFiles/kwsys.dir/EncodingC.c.o
testing_utils/kwsys/libkwsys.a: testing_utils/kwsys/CMakeFiles/kwsys.dir/System.c.o
testing_utils/kwsys/libkwsys.a: testing_utils/kwsys/CMakeFiles/kwsys.dir/Directory.cxx.o
testing_utils/kwsys/libkwsys.a: testing_utils/kwsys/CMakeFiles/kwsys.dir/EncodingCXX.cxx.o
testing_utils/kwsys/libkwsys.a: testing_utils/kwsys/CMakeFiles/kwsys.dir/RegularExpression.cxx.o
testing_utils/kwsys/libkwsys.a: testing_utils/kwsys/CMakeFiles/kwsys.dir/SystemTools.cxx.o
testing_utils/kwsys/libkwsys.a: testing_utils/kwsys/CMakeFiles/kwsys.dir/FStream.cxx.o
testing_utils/kwsys/libkwsys.a: testing_utils/kwsys/CMakeFiles/kwsys.dir/build.make
testing_utils/kwsys/libkwsys.a: testing_utils/kwsys/CMakeFiles/kwsys.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/work/hw-melgart/hw1/hw1_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX static library libkwsys.a"
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && $(CMAKE_COMMAND) -P CMakeFiles/kwsys.dir/cmake_clean_target.cmake
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kwsys.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
testing_utils/kwsys/CMakeFiles/kwsys.dir/build: testing_utils/kwsys/libkwsys.a

.PHONY : testing_utils/kwsys/CMakeFiles/kwsys.dir/build

testing_utils/kwsys/CMakeFiles/kwsys.dir/clean:
	cd /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys && $(CMAKE_COMMAND) -P CMakeFiles/kwsys.dir/cmake_clean.cmake
.PHONY : testing_utils/kwsys/CMakeFiles/kwsys.dir/clean

testing_utils/kwsys/CMakeFiles/kwsys.dir/depend:
	cd /work/hw-melgart/hw1/hw1_tests && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work/hw-melgart/hw1/hw1_tests /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys /work/hw-melgart/hw1/hw1_tests /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys /work/hw-melgart/hw1/hw1_tests/testing_utils/kwsys/CMakeFiles/kwsys.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : testing_utils/kwsys/CMakeFiles/kwsys.dir/depend

