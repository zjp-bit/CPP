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
CMAKE_SOURCE_DIR = /home/zjp/code/cpp/7.1/calling

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zjp/code/cpp/7.1/calling/build

# Include any dependencies generated for this target.
include CMakeFiles/calling.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/calling.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/calling.dir/flags.make

CMakeFiles/calling.dir/calling.cpp.o: CMakeFiles/calling.dir/flags.make
CMakeFiles/calling.dir/calling.cpp.o: ../calling.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zjp/code/cpp/7.1/calling/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/calling.dir/calling.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calling.dir/calling.cpp.o -c /home/zjp/code/cpp/7.1/calling/calling.cpp

CMakeFiles/calling.dir/calling.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calling.dir/calling.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zjp/code/cpp/7.1/calling/calling.cpp > CMakeFiles/calling.dir/calling.cpp.i

CMakeFiles/calling.dir/calling.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calling.dir/calling.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zjp/code/cpp/7.1/calling/calling.cpp -o CMakeFiles/calling.dir/calling.cpp.s

CMakeFiles/calling.dir/calling.cpp.o.requires:

.PHONY : CMakeFiles/calling.dir/calling.cpp.o.requires

CMakeFiles/calling.dir/calling.cpp.o.provides: CMakeFiles/calling.dir/calling.cpp.o.requires
	$(MAKE) -f CMakeFiles/calling.dir/build.make CMakeFiles/calling.dir/calling.cpp.o.provides.build
.PHONY : CMakeFiles/calling.dir/calling.cpp.o.provides

CMakeFiles/calling.dir/calling.cpp.o.provides.build: CMakeFiles/calling.dir/calling.cpp.o


# Object files for target calling
calling_OBJECTS = \
"CMakeFiles/calling.dir/calling.cpp.o"

# External object files for target calling
calling_EXTERNAL_OBJECTS =

calling: CMakeFiles/calling.dir/calling.cpp.o
calling: CMakeFiles/calling.dir/build.make
calling: CMakeFiles/calling.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zjp/code/cpp/7.1/calling/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable calling"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/calling.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/calling.dir/build: calling

.PHONY : CMakeFiles/calling.dir/build

CMakeFiles/calling.dir/requires: CMakeFiles/calling.dir/calling.cpp.o.requires

.PHONY : CMakeFiles/calling.dir/requires

CMakeFiles/calling.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/calling.dir/cmake_clean.cmake
.PHONY : CMakeFiles/calling.dir/clean

CMakeFiles/calling.dir/depend:
	cd /home/zjp/code/cpp/7.1/calling/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zjp/code/cpp/7.1/calling /home/zjp/code/cpp/7.1/calling /home/zjp/code/cpp/7.1/calling/build /home/zjp/code/cpp/7.1/calling/build /home/zjp/code/cpp/7.1/calling/build/CMakeFiles/calling.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/calling.dir/depend

