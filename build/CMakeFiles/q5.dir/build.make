# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/sibohao/Desktop/xy

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sibohao/Desktop/xy/build

# Include any dependencies generated for this target.
include CMakeFiles/q5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/q5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/q5.dir/flags.make

CMakeFiles/q5.dir/src/q5/answer.cpp.o: CMakeFiles/q5.dir/flags.make
CMakeFiles/q5.dir/src/q5/answer.cpp.o: ../src/q5/answer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sibohao/Desktop/xy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/q5.dir/src/q5/answer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/q5.dir/src/q5/answer.cpp.o -c /home/sibohao/Desktop/xy/src/q5/answer.cpp

CMakeFiles/q5.dir/src/q5/answer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/q5.dir/src/q5/answer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sibohao/Desktop/xy/src/q5/answer.cpp > CMakeFiles/q5.dir/src/q5/answer.cpp.i

CMakeFiles/q5.dir/src/q5/answer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/q5.dir/src/q5/answer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sibohao/Desktop/xy/src/q5/answer.cpp -o CMakeFiles/q5.dir/src/q5/answer.cpp.s

CMakeFiles/q5.dir/src/q5/answer.cpp.o.requires:

.PHONY : CMakeFiles/q5.dir/src/q5/answer.cpp.o.requires

CMakeFiles/q5.dir/src/q5/answer.cpp.o.provides: CMakeFiles/q5.dir/src/q5/answer.cpp.o.requires
	$(MAKE) -f CMakeFiles/q5.dir/build.make CMakeFiles/q5.dir/src/q5/answer.cpp.o.provides.build
.PHONY : CMakeFiles/q5.dir/src/q5/answer.cpp.o.provides

CMakeFiles/q5.dir/src/q5/answer.cpp.o.provides.build: CMakeFiles/q5.dir/src/q5/answer.cpp.o


# Object files for target q5
q5_OBJECTS = \
"CMakeFiles/q5.dir/src/q5/answer.cpp.o"

# External object files for target q5
q5_EXTERNAL_OBJECTS =

q5: CMakeFiles/q5.dir/src/q5/answer.cpp.o
q5: CMakeFiles/q5.dir/build.make
q5: CMakeFiles/q5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sibohao/Desktop/xy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable q5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/q5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/q5.dir/build: q5

.PHONY : CMakeFiles/q5.dir/build

CMakeFiles/q5.dir/requires: CMakeFiles/q5.dir/src/q5/answer.cpp.o.requires

.PHONY : CMakeFiles/q5.dir/requires

CMakeFiles/q5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/q5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/q5.dir/clean

CMakeFiles/q5.dir/depend:
	cd /home/sibohao/Desktop/xy/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sibohao/Desktop/xy /home/sibohao/Desktop/xy /home/sibohao/Desktop/xy/build /home/sibohao/Desktop/xy/build /home/sibohao/Desktop/xy/build/CMakeFiles/q5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/q5.dir/depend

