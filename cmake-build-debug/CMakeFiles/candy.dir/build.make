# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = E:\JetBrains\CLion\bin\cmake\bin\cmake.exe

# The command to remove a file.
RM = E:\JetBrains\CLion\bin\cmake\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\cprc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\cprc\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/candy.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/candy.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/candy.dir/flags.make

CMakeFiles/candy.dir/candy.c.obj: CMakeFiles/candy.dir/flags.make
CMakeFiles/candy.dir/candy.c.obj: ../candy.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\cprc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/candy.dir/candy.c.obj"
	C:\LLVM\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\candy.dir\candy.c.obj   -c E:\cprc\candy.c

CMakeFiles/candy.dir/candy.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/candy.dir/candy.c.i"
	C:\LLVM\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\cprc\candy.c > CMakeFiles\candy.dir\candy.c.i

CMakeFiles/candy.dir/candy.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/candy.dir/candy.c.s"
	C:\LLVM\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\cprc\candy.c -o CMakeFiles\candy.dir\candy.c.s

CMakeFiles/candy.dir/candy.c.obj.requires:

.PHONY : CMakeFiles/candy.dir/candy.c.obj.requires

CMakeFiles/candy.dir/candy.c.obj.provides: CMakeFiles/candy.dir/candy.c.obj.requires
	$(MAKE) -f CMakeFiles\candy.dir\build.make CMakeFiles/candy.dir/candy.c.obj.provides.build
.PHONY : CMakeFiles/candy.dir/candy.c.obj.provides

CMakeFiles/candy.dir/candy.c.obj.provides.build: CMakeFiles/candy.dir/candy.c.obj


# Object files for target candy
candy_OBJECTS = \
"CMakeFiles/candy.dir/candy.c.obj"

# External object files for target candy
candy_EXTERNAL_OBJECTS =

candy.exe: CMakeFiles/candy.dir/candy.c.obj
candy.exe: CMakeFiles/candy.dir/build.make
candy.exe: CMakeFiles/candy.dir/linklibs.rsp
candy.exe: CMakeFiles/candy.dir/objects1.rsp
candy.exe: CMakeFiles/candy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\cprc\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable candy.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\candy.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/candy.dir/build: candy.exe

.PHONY : CMakeFiles/candy.dir/build

CMakeFiles/candy.dir/requires: CMakeFiles/candy.dir/candy.c.obj.requires

.PHONY : CMakeFiles/candy.dir/requires

CMakeFiles/candy.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\candy.dir\cmake_clean.cmake
.PHONY : CMakeFiles/candy.dir/clean

CMakeFiles/candy.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\cprc E:\cprc E:\cprc\cmake-build-debug E:\cprc\cmake-build-debug E:\cprc\cmake-build-debug\CMakeFiles\candy.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/candy.dir/depend

