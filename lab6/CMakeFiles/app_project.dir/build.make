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
CMAKE_SOURCE_DIR = /home/cristina/Desktop/IEP/lab6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cristina/Desktop/IEP/lab6

# Include any dependencies generated for this target.
include CMakeFiles/app_project.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/app_project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/app_project.dir/flags.make

CMakeFiles/app_project.dir/lab6.cpp.o: CMakeFiles/app_project.dir/flags.make
CMakeFiles/app_project.dir/lab6.cpp.o: lab6.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cristina/Desktop/IEP/lab6/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/app_project.dir/lab6.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/app_project.dir/lab6.cpp.o -c /home/cristina/Desktop/IEP/lab6/lab6.cpp

CMakeFiles/app_project.dir/lab6.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/app_project.dir/lab6.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cristina/Desktop/IEP/lab6/lab6.cpp > CMakeFiles/app_project.dir/lab6.cpp.i

CMakeFiles/app_project.dir/lab6.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/app_project.dir/lab6.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cristina/Desktop/IEP/lab6/lab6.cpp -o CMakeFiles/app_project.dir/lab6.cpp.s

# Object files for target app_project
app_project_OBJECTS = \
"CMakeFiles/app_project.dir/lab6.cpp.o"

# External object files for target app_project
app_project_EXTERNAL_OBJECTS =

app_project: CMakeFiles/app_project.dir/lab6.cpp.o
app_project: CMakeFiles/app_project.dir/build.make
app_project: CMakeFiles/app_project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cristina/Desktop/IEP/lab6/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable app_project"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/app_project.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/app_project.dir/build: app_project

.PHONY : CMakeFiles/app_project.dir/build

CMakeFiles/app_project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/app_project.dir/cmake_clean.cmake
.PHONY : CMakeFiles/app_project.dir/clean

CMakeFiles/app_project.dir/depend:
	cd /home/cristina/Desktop/IEP/lab6 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cristina/Desktop/IEP/lab6 /home/cristina/Desktop/IEP/lab6 /home/cristina/Desktop/IEP/lab6 /home/cristina/Desktop/IEP/lab6 /home/cristina/Desktop/IEP/lab6/CMakeFiles/app_project.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/app_project.dir/depend

