# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /v/filer5b/v38q001/azn72/Downloads/menger

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /v/filer5b/v38q001/azn72/Downloads/menger/build

# Include any dependencies generated for this target.
include src/CMakeFiles/menger.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/menger.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/menger.dir/flags.make

src/CMakeFiles/menger.dir/menger.cc.o: src/CMakeFiles/menger.dir/flags.make
src/CMakeFiles/menger.dir/menger.cc.o: ../src/menger.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/v/filer5b/v38q001/azn72/Downloads/menger/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/menger.dir/menger.cc.o"
	cd /v/filer5b/v38q001/azn72/Downloads/menger/build/src && /lusr/opt/gcc-5.2.0/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/menger.dir/menger.cc.o -c /v/filer5b/v38q001/azn72/Downloads/menger/src/menger.cc

src/CMakeFiles/menger.dir/menger.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/menger.dir/menger.cc.i"
	cd /v/filer5b/v38q001/azn72/Downloads/menger/build/src && /lusr/opt/gcc-5.2.0/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /v/filer5b/v38q001/azn72/Downloads/menger/src/menger.cc > CMakeFiles/menger.dir/menger.cc.i

src/CMakeFiles/menger.dir/menger.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/menger.dir/menger.cc.s"
	cd /v/filer5b/v38q001/azn72/Downloads/menger/build/src && /lusr/opt/gcc-5.2.0/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /v/filer5b/v38q001/azn72/Downloads/menger/src/menger.cc -o CMakeFiles/menger.dir/menger.cc.s

src/CMakeFiles/menger.dir/menger.cc.o.requires:

.PHONY : src/CMakeFiles/menger.dir/menger.cc.o.requires

src/CMakeFiles/menger.dir/menger.cc.o.provides: src/CMakeFiles/menger.dir/menger.cc.o.requires
	$(MAKE) -f src/CMakeFiles/menger.dir/build.make src/CMakeFiles/menger.dir/menger.cc.o.provides.build
.PHONY : src/CMakeFiles/menger.dir/menger.cc.o.provides

src/CMakeFiles/menger.dir/menger.cc.o.provides.build: src/CMakeFiles/menger.dir/menger.cc.o


src/CMakeFiles/menger.dir/camera.cc.o: src/CMakeFiles/menger.dir/flags.make
src/CMakeFiles/menger.dir/camera.cc.o: ../src/camera.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/v/filer5b/v38q001/azn72/Downloads/menger/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/menger.dir/camera.cc.o"
	cd /v/filer5b/v38q001/azn72/Downloads/menger/build/src && /lusr/opt/gcc-5.2.0/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/menger.dir/camera.cc.o -c /v/filer5b/v38q001/azn72/Downloads/menger/src/camera.cc

src/CMakeFiles/menger.dir/camera.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/menger.dir/camera.cc.i"
	cd /v/filer5b/v38q001/azn72/Downloads/menger/build/src && /lusr/opt/gcc-5.2.0/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /v/filer5b/v38q001/azn72/Downloads/menger/src/camera.cc > CMakeFiles/menger.dir/camera.cc.i

src/CMakeFiles/menger.dir/camera.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/menger.dir/camera.cc.s"
	cd /v/filer5b/v38q001/azn72/Downloads/menger/build/src && /lusr/opt/gcc-5.2.0/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /v/filer5b/v38q001/azn72/Downloads/menger/src/camera.cc -o CMakeFiles/menger.dir/camera.cc.s

src/CMakeFiles/menger.dir/camera.cc.o.requires:

.PHONY : src/CMakeFiles/menger.dir/camera.cc.o.requires

src/CMakeFiles/menger.dir/camera.cc.o.provides: src/CMakeFiles/menger.dir/camera.cc.o.requires
	$(MAKE) -f src/CMakeFiles/menger.dir/build.make src/CMakeFiles/menger.dir/camera.cc.o.provides.build
.PHONY : src/CMakeFiles/menger.dir/camera.cc.o.provides

src/CMakeFiles/menger.dir/camera.cc.o.provides.build: src/CMakeFiles/menger.dir/camera.cc.o


src/CMakeFiles/menger.dir/main.cc.o: src/CMakeFiles/menger.dir/flags.make
src/CMakeFiles/menger.dir/main.cc.o: ../src/main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/v/filer5b/v38q001/azn72/Downloads/menger/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/menger.dir/main.cc.o"
	cd /v/filer5b/v38q001/azn72/Downloads/menger/build/src && /lusr/opt/gcc-5.2.0/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/menger.dir/main.cc.o -c /v/filer5b/v38q001/azn72/Downloads/menger/src/main.cc

src/CMakeFiles/menger.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/menger.dir/main.cc.i"
	cd /v/filer5b/v38q001/azn72/Downloads/menger/build/src && /lusr/opt/gcc-5.2.0/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /v/filer5b/v38q001/azn72/Downloads/menger/src/main.cc > CMakeFiles/menger.dir/main.cc.i

src/CMakeFiles/menger.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/menger.dir/main.cc.s"
	cd /v/filer5b/v38q001/azn72/Downloads/menger/build/src && /lusr/opt/gcc-5.2.0/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /v/filer5b/v38q001/azn72/Downloads/menger/src/main.cc -o CMakeFiles/menger.dir/main.cc.s

src/CMakeFiles/menger.dir/main.cc.o.requires:

.PHONY : src/CMakeFiles/menger.dir/main.cc.o.requires

src/CMakeFiles/menger.dir/main.cc.o.provides: src/CMakeFiles/menger.dir/main.cc.o.requires
	$(MAKE) -f src/CMakeFiles/menger.dir/build.make src/CMakeFiles/menger.dir/main.cc.o.provides.build
.PHONY : src/CMakeFiles/menger.dir/main.cc.o.provides

src/CMakeFiles/menger.dir/main.cc.o.provides.build: src/CMakeFiles/menger.dir/main.cc.o


# Object files for target menger
menger_OBJECTS = \
"CMakeFiles/menger.dir/menger.cc.o" \
"CMakeFiles/menger.dir/camera.cc.o" \
"CMakeFiles/menger.dir/main.cc.o"

# External object files for target menger
menger_EXTERNAL_OBJECTS =

bin/menger: src/CMakeFiles/menger.dir/menger.cc.o
bin/menger: src/CMakeFiles/menger.dir/camera.cc.o
bin/menger: src/CMakeFiles/menger.dir/main.cc.o
bin/menger: src/CMakeFiles/menger.dir/build.make
bin/menger: /usr/lib/x86_64-linux-gnu/libGLEW.so
bin/menger: /usr/lib/x86_64-linux-gnu/libGLEW.so
bin/menger: libutgraphicsutil.so
bin/menger: /usr/lib/x86_64-linux-gnu/libGL.so
bin/menger: /usr/lib/x86_64-linux-gnu/libGLEW.so
bin/menger: src/CMakeFiles/menger.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/v/filer5b/v38q001/azn72/Downloads/menger/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ../bin/menger"
	cd /v/filer5b/v38q001/azn72/Downloads/menger/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/menger.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/menger.dir/build: bin/menger

.PHONY : src/CMakeFiles/menger.dir/build

src/CMakeFiles/menger.dir/requires: src/CMakeFiles/menger.dir/menger.cc.o.requires
src/CMakeFiles/menger.dir/requires: src/CMakeFiles/menger.dir/camera.cc.o.requires
src/CMakeFiles/menger.dir/requires: src/CMakeFiles/menger.dir/main.cc.o.requires

.PHONY : src/CMakeFiles/menger.dir/requires

src/CMakeFiles/menger.dir/clean:
	cd /v/filer5b/v38q001/azn72/Downloads/menger/build/src && $(CMAKE_COMMAND) -P CMakeFiles/menger.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/menger.dir/clean

src/CMakeFiles/menger.dir/depend:
	cd /v/filer5b/v38q001/azn72/Downloads/menger/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /v/filer5b/v38q001/azn72/Downloads/menger /v/filer5b/v38q001/azn72/Downloads/menger/src /v/filer5b/v38q001/azn72/Downloads/menger/build /v/filer5b/v38q001/azn72/Downloads/menger/build/src /v/filer5b/v38q001/azn72/Downloads/menger/build/src/CMakeFiles/menger.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/menger.dir/depend

