# CMake generated Testfile for 
# Source directory: /work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests
# Build directory: /work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(Schedule.SimpleSol1 "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/schedwork_tests" "--gtest_filter=Schedule.SimpleSol1")
set_tests_properties(Schedule.SimpleSol1 PROPERTIES  _BACKTRACE_TRIPLES "/work/hw-melgart/hw5/hw5_stu_tests/test_cmake_lib/CustomTests.cmake;43;add_test;/work/hw-melgart/hw5/hw5_stu_tests/test_cmake_lib/TestTargets.cmake;123;add_executable_gtests;/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/CMakeLists.txt;3;add_source_problem;/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/CMakeLists.txt;0;")
add_test(Schedule.SimpleNoSolMaxShifts "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/schedwork_tests" "--gtest_filter=Schedule.SimpleNoSolMaxShifts")
set_tests_properties(Schedule.SimpleNoSolMaxShifts PROPERTIES  _BACKTRACE_TRIPLES "/work/hw-melgart/hw5/hw5_stu_tests/test_cmake_lib/CustomTests.cmake;43;add_test;/work/hw-melgart/hw5/hw5_stu_tests/test_cmake_lib/TestTargets.cmake;123;add_executable_gtests;/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/CMakeLists.txt;3;add_source_problem;/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/CMakeLists.txt;0;")
add_test(Schedule.SimpleNoSolNoAvail1 "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/schedwork_tests" "--gtest_filter=Schedule.SimpleNoSolNoAvail1")
set_tests_properties(Schedule.SimpleNoSolNoAvail1 PROPERTIES  _BACKTRACE_TRIPLES "/work/hw-melgart/hw5/hw5_stu_tests/test_cmake_lib/CustomTests.cmake;43;add_test;/work/hw-melgart/hw5/hw5_stu_tests/test_cmake_lib/TestTargets.cmake;123;add_executable_gtests;/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/CMakeLists.txt;3;add_source_problem;/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/CMakeLists.txt;0;")
add_test(Schedule.SimpleNoSolNoAvail2 "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/schedwork_tests" "--gtest_filter=Schedule.SimpleNoSolNoAvail2")
set_tests_properties(Schedule.SimpleNoSolNoAvail2 PROPERTIES  _BACKTRACE_TRIPLES "/work/hw-melgart/hw5/hw5_stu_tests/test_cmake_lib/CustomTests.cmake;43;add_test;/work/hw-melgart/hw5/hw5_stu_tests/test_cmake_lib/TestTargets.cmake;123;add_executable_gtests;/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/CMakeLists.txt;3;add_source_problem;/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/CMakeLists.txt;0;")
add_test(Schedule.SimpleNoSolNoAvail3 "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/schedwork_tests" "--gtest_filter=Schedule.SimpleNoSolNoAvail3")
set_tests_properties(Schedule.SimpleNoSolNoAvail3 PROPERTIES  _BACKTRACE_TRIPLES "/work/hw-melgart/hw5/hw5_stu_tests/test_cmake_lib/CustomTests.cmake;43;add_test;/work/hw-melgart/hw5/hw5_stu_tests/test_cmake_lib/TestTargets.cmake;123;add_executable_gtests;/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/CMakeLists.txt;3;add_source_problem;/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/CMakeLists.txt;0;")
add_test(Schedule.Nominal1 "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/schedwork_tests" "--gtest_filter=Schedule.Nominal1")
set_tests_properties(Schedule.Nominal1 PROPERTIES  _BACKTRACE_TRIPLES "/work/hw-melgart/hw5/hw5_stu_tests/test_cmake_lib/CustomTests.cmake;43;add_test;/work/hw-melgart/hw5/hw5_stu_tests/test_cmake_lib/TestTargets.cmake;123;add_executable_gtests;/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/CMakeLists.txt;3;add_source_problem;/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/CMakeLists.txt;0;")
add_test(Schedule.Nominal1NoSol1 "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/schedwork_tests" "--gtest_filter=Schedule.Nominal1NoSol1")
set_tests_properties(Schedule.Nominal1NoSol1 PROPERTIES  _BACKTRACE_TRIPLES "/work/hw-melgart/hw5/hw5_stu_tests/test_cmake_lib/CustomTests.cmake;43;add_test;/work/hw-melgart/hw5/hw5_stu_tests/test_cmake_lib/TestTargets.cmake;123;add_executable_gtests;/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/CMakeLists.txt;3;add_source_problem;/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/CMakeLists.txt;0;")
add_test(Schedule.Nominal1NoSol2 "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/schedwork_tests" "--gtest_filter=Schedule.Nominal1NoSol2")
set_tests_properties(Schedule.Nominal1NoSol2 PROPERTIES  _BACKTRACE_TRIPLES "/work/hw-melgart/hw5/hw5_stu_tests/test_cmake_lib/CustomTests.cmake;43;add_test;/work/hw-melgart/hw5/hw5_stu_tests/test_cmake_lib/TestTargets.cmake;123;add_executable_gtests;/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/CMakeLists.txt;3;add_source_problem;/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/CMakeLists.txt;0;")
add_test(Schedule.Nominal2 "/usr/bin/valgrind" "--tool=memcheck" "--leak-check=yes" "--trace-children=no" "/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/schedwork_tests" "--gtest_filter=Schedule.Nominal2")
set_tests_properties(Schedule.Nominal2 PROPERTIES  _BACKTRACE_TRIPLES "/work/hw-melgart/hw5/hw5_stu_tests/test_cmake_lib/CustomTests.cmake;43;add_test;/work/hw-melgart/hw5/hw5_stu_tests/test_cmake_lib/TestTargets.cmake;123;add_executable_gtests;/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/CMakeLists.txt;3;add_source_problem;/work/hw-melgart/hw5/hw5_stu_tests/schedwork_tests/CMakeLists.txt;0;")
