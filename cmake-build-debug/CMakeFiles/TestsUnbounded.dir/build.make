# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/326/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /snap/clion/326/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tigran/Downloads/KnapsackProblem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tigran/Downloads/KnapsackProblem/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TestsUnbounded.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TestsUnbounded.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TestsUnbounded.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TestsUnbounded.dir/flags.make

CMakeFiles/TestsUnbounded.dir/tests/UnboundedKnapsackTests.cpp.o: CMakeFiles/TestsUnbounded.dir/flags.make
CMakeFiles/TestsUnbounded.dir/tests/UnboundedKnapsackTests.cpp.o: /home/tigran/Downloads/KnapsackProblem/tests/UnboundedKnapsackTests.cpp
CMakeFiles/TestsUnbounded.dir/tests/UnboundedKnapsackTests.cpp.o: CMakeFiles/TestsUnbounded.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/tigran/Downloads/KnapsackProblem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TestsUnbounded.dir/tests/UnboundedKnapsackTests.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TestsUnbounded.dir/tests/UnboundedKnapsackTests.cpp.o -MF CMakeFiles/TestsUnbounded.dir/tests/UnboundedKnapsackTests.cpp.o.d -o CMakeFiles/TestsUnbounded.dir/tests/UnboundedKnapsackTests.cpp.o -c /home/tigran/Downloads/KnapsackProblem/tests/UnboundedKnapsackTests.cpp

CMakeFiles/TestsUnbounded.dir/tests/UnboundedKnapsackTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TestsUnbounded.dir/tests/UnboundedKnapsackTests.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tigran/Downloads/KnapsackProblem/tests/UnboundedKnapsackTests.cpp > CMakeFiles/TestsUnbounded.dir/tests/UnboundedKnapsackTests.cpp.i

CMakeFiles/TestsUnbounded.dir/tests/UnboundedKnapsackTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TestsUnbounded.dir/tests/UnboundedKnapsackTests.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tigran/Downloads/KnapsackProblem/tests/UnboundedKnapsackTests.cpp -o CMakeFiles/TestsUnbounded.dir/tests/UnboundedKnapsackTests.cpp.s

# Object files for target TestsUnbounded
TestsUnbounded_OBJECTS = \
"CMakeFiles/TestsUnbounded.dir/tests/UnboundedKnapsackTests.cpp.o"

# External object files for target TestsUnbounded
TestsUnbounded_EXTERNAL_OBJECTS =

TestsUnbounded: CMakeFiles/TestsUnbounded.dir/tests/UnboundedKnapsackTests.cpp.o
TestsUnbounded: CMakeFiles/TestsUnbounded.dir/build.make
TestsUnbounded: /usr/lib/x86_64-linux-gnu/libgtest_main.a
TestsUnbounded: /usr/lib/x86_64-linux-gnu/libgtest.a
TestsUnbounded: CMakeFiles/TestsUnbounded.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/tigran/Downloads/KnapsackProblem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TestsUnbounded"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TestsUnbounded.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TestsUnbounded.dir/build: TestsUnbounded
.PHONY : CMakeFiles/TestsUnbounded.dir/build

CMakeFiles/TestsUnbounded.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TestsUnbounded.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TestsUnbounded.dir/clean

CMakeFiles/TestsUnbounded.dir/depend:
	cd /home/tigran/Downloads/KnapsackProblem/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tigran/Downloads/KnapsackProblem /home/tigran/Downloads/KnapsackProblem /home/tigran/Downloads/KnapsackProblem/cmake-build-debug /home/tigran/Downloads/KnapsackProblem/cmake-build-debug /home/tigran/Downloads/KnapsackProblem/cmake-build-debug/CMakeFiles/TestsUnbounded.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/TestsUnbounded.dir/depend

