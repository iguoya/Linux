# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tiger/LinuxProgramming/QtApp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tiger/LinuxProgramming/QtApp

# Utility rule file for QtApp_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/QtApp_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/QtApp_autogen.dir/progress.make

CMakeFiles/QtApp_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tiger/LinuxProgramming/QtApp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target QtApp"
	/usr/local/bin/cmake -E cmake_autogen /home/tiger/LinuxProgramming/QtApp/CMakeFiles/QtApp_autogen.dir/AutogenInfo.json ""

QtApp_autogen: CMakeFiles/QtApp_autogen
QtApp_autogen: CMakeFiles/QtApp_autogen.dir/build.make
.PHONY : QtApp_autogen

# Rule to build all files generated by this target.
CMakeFiles/QtApp_autogen.dir/build: QtApp_autogen
.PHONY : CMakeFiles/QtApp_autogen.dir/build

CMakeFiles/QtApp_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/QtApp_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/QtApp_autogen.dir/clean

CMakeFiles/QtApp_autogen.dir/depend:
	cd /home/tiger/LinuxProgramming/QtApp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tiger/LinuxProgramming/QtApp /home/tiger/LinuxProgramming/QtApp /home/tiger/LinuxProgramming/QtApp /home/tiger/LinuxProgramming/QtApp /home/tiger/LinuxProgramming/QtApp/CMakeFiles/QtApp_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/QtApp_autogen.dir/depend
