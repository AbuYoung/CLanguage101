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
CMAKE_SOURCE_DIR = /mnt/c/Users/AbuYoung/Desktop/CLanguage101

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/AbuYoung/Desktop/CLanguage101/cmake-build-release

# Include any dependencies generated for this target.
include CMakeFiles/maxsort1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/maxsort1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/maxsort1.dir/flags.make

CMakeFiles/maxsort1.dir/maxsort1.c.o: CMakeFiles/maxsort1.dir/flags.make
CMakeFiles/maxsort1.dir/maxsort1.c.o: ../maxsort1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/AbuYoung/Desktop/CLanguage101/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/maxsort1.dir/maxsort1.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/maxsort1.dir/maxsort1.c.o   -c /mnt/c/Users/AbuYoung/Desktop/CLanguage101/maxsort1.c

CMakeFiles/maxsort1.dir/maxsort1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/maxsort1.dir/maxsort1.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/AbuYoung/Desktop/CLanguage101/maxsort1.c > CMakeFiles/maxsort1.dir/maxsort1.c.i

CMakeFiles/maxsort1.dir/maxsort1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/maxsort1.dir/maxsort1.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/AbuYoung/Desktop/CLanguage101/maxsort1.c -o CMakeFiles/maxsort1.dir/maxsort1.c.s

CMakeFiles/maxsort1.dir/maxsort1.c.o.requires:

.PHONY : CMakeFiles/maxsort1.dir/maxsort1.c.o.requires

CMakeFiles/maxsort1.dir/maxsort1.c.o.provides: CMakeFiles/maxsort1.dir/maxsort1.c.o.requires
	$(MAKE) -f CMakeFiles/maxsort1.dir/build.make CMakeFiles/maxsort1.dir/maxsort1.c.o.provides.build
.PHONY : CMakeFiles/maxsort1.dir/maxsort1.c.o.provides

CMakeFiles/maxsort1.dir/maxsort1.c.o.provides.build: CMakeFiles/maxsort1.dir/maxsort1.c.o


# Object files for target maxsort1
maxsort1_OBJECTS = \
"CMakeFiles/maxsort1.dir/maxsort1.c.o"

# External object files for target maxsort1
maxsort1_EXTERNAL_OBJECTS =

maxsort1: CMakeFiles/maxsort1.dir/maxsort1.c.o
maxsort1: CMakeFiles/maxsort1.dir/build.make
maxsort1: CMakeFiles/maxsort1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/AbuYoung/Desktop/CLanguage101/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable maxsort1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/maxsort1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/maxsort1.dir/build: maxsort1

.PHONY : CMakeFiles/maxsort1.dir/build

CMakeFiles/maxsort1.dir/requires: CMakeFiles/maxsort1.dir/maxsort1.c.o.requires

.PHONY : CMakeFiles/maxsort1.dir/requires

CMakeFiles/maxsort1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/maxsort1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/maxsort1.dir/clean

CMakeFiles/maxsort1.dir/depend:
	cd /mnt/c/Users/AbuYoung/Desktop/CLanguage101/cmake-build-release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/AbuYoung/Desktop/CLanguage101 /mnt/c/Users/AbuYoung/Desktop/CLanguage101 /mnt/c/Users/AbuYoung/Desktop/CLanguage101/cmake-build-release /mnt/c/Users/AbuYoung/Desktop/CLanguage101/cmake-build-release /mnt/c/Users/AbuYoung/Desktop/CLanguage101/cmake-build-release/CMakeFiles/maxsort1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/maxsort1.dir/depend

