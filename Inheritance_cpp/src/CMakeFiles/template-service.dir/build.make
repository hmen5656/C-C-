# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.26.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.26.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp

# Include any dependencies generated for this target.
include src/CMakeFiles/template-service.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/template-service.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/template-service.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/template-service.dir/flags.make

src/CMakeFiles/template-service.dir/main.cpp.o: src/CMakeFiles/template-service.dir/flags.make
src/CMakeFiles/template-service.dir/main.cpp.o: src/main.cpp
src/CMakeFiles/template-service.dir/main.cpp.o: src/CMakeFiles/template-service.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/template-service.dir/main.cpp.o"
	cd /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/template-service.dir/main.cpp.o -MF CMakeFiles/template-service.dir/main.cpp.o.d -o CMakeFiles/template-service.dir/main.cpp.o -c /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/src/main.cpp

src/CMakeFiles/template-service.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/template-service.dir/main.cpp.i"
	cd /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/src/main.cpp > CMakeFiles/template-service.dir/main.cpp.i

src/CMakeFiles/template-service.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/template-service.dir/main.cpp.s"
	cd /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/src/main.cpp -o CMakeFiles/template-service.dir/main.cpp.s

src/CMakeFiles/template-service.dir/human.cpp.o: src/CMakeFiles/template-service.dir/flags.make
src/CMakeFiles/template-service.dir/human.cpp.o: src/human.cpp
src/CMakeFiles/template-service.dir/human.cpp.o: src/CMakeFiles/template-service.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/template-service.dir/human.cpp.o"
	cd /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/template-service.dir/human.cpp.o -MF CMakeFiles/template-service.dir/human.cpp.o.d -o CMakeFiles/template-service.dir/human.cpp.o -c /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/src/human.cpp

src/CMakeFiles/template-service.dir/human.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/template-service.dir/human.cpp.i"
	cd /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/src/human.cpp > CMakeFiles/template-service.dir/human.cpp.i

src/CMakeFiles/template-service.dir/human.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/template-service.dir/human.cpp.s"
	cd /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/src/human.cpp -o CMakeFiles/template-service.dir/human.cpp.s

src/CMakeFiles/template-service.dir/student.cpp.o: src/CMakeFiles/template-service.dir/flags.make
src/CMakeFiles/template-service.dir/student.cpp.o: src/student.cpp
src/CMakeFiles/template-service.dir/student.cpp.o: src/CMakeFiles/template-service.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/template-service.dir/student.cpp.o"
	cd /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/template-service.dir/student.cpp.o -MF CMakeFiles/template-service.dir/student.cpp.o.d -o CMakeFiles/template-service.dir/student.cpp.o -c /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/src/student.cpp

src/CMakeFiles/template-service.dir/student.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/template-service.dir/student.cpp.i"
	cd /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/src/student.cpp > CMakeFiles/template-service.dir/student.cpp.i

src/CMakeFiles/template-service.dir/student.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/template-service.dir/student.cpp.s"
	cd /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/src/student.cpp -o CMakeFiles/template-service.dir/student.cpp.s

# Object files for target template-service
template__service_OBJECTS = \
"CMakeFiles/template-service.dir/main.cpp.o" \
"CMakeFiles/template-service.dir/human.cpp.o" \
"CMakeFiles/template-service.dir/student.cpp.o"

# External object files for target template-service
template__service_EXTERNAL_OBJECTS =

src/template-service: src/CMakeFiles/template-service.dir/main.cpp.o
src/template-service: src/CMakeFiles/template-service.dir/human.cpp.o
src/template-service: src/CMakeFiles/template-service.dir/student.cpp.o
src/template-service: src/CMakeFiles/template-service.dir/build.make
src/template-service: src/CMakeFiles/template-service.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable template-service"
	cd /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/template-service.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/template-service.dir/build: src/template-service
.PHONY : src/CMakeFiles/template-service.dir/build

src/CMakeFiles/template-service.dir/clean:
	cd /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/src && $(CMAKE_COMMAND) -P CMakeFiles/template-service.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/template-service.dir/clean

src/CMakeFiles/template-service.dir/depend:
	cd /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/src /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/src /Users/hsynmn/Desktop/C-C++/C-Cpp/Inheritance_cpp/src/CMakeFiles/template-service.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/template-service.dir/depend

