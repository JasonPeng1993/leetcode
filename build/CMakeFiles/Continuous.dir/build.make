# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = D:/CMake/bin/cmake.exe

# The command to remove a file.
RM = D:/CMake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:/code/cpp/leetcode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:/code/cpp/leetcode/build

# Utility rule file for Continuous.

# Include the progress variables for this target.
include CMakeFiles/Continuous.dir/progress.make

CMakeFiles/Continuous:
	D:/CMake/bin/ctest.exe -D Continuous

Continuous: CMakeFiles/Continuous
Continuous: CMakeFiles/Continuous.dir/build.make

.PHONY : Continuous

# Rule to build all files generated by this target.
CMakeFiles/Continuous.dir/build: Continuous

.PHONY : CMakeFiles/Continuous.dir/build

CMakeFiles/Continuous.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Continuous.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Continuous.dir/clean

CMakeFiles/Continuous.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" E:/code/cpp/leetcode E:/code/cpp/leetcode E:/code/cpp/leetcode/build E:/code/cpp/leetcode/build E:/code/cpp/leetcode/build/CMakeFiles/Continuous.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Continuous.dir/depend

