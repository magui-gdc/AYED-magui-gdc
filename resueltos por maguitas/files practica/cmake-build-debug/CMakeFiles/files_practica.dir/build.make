# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\clion\files practica"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\clion\files practica\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/files_practica.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/files_practica.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/files_practica.dir/flags.make

CMakeFiles/files_practica.dir/main.cpp.obj: CMakeFiles/files_practica.dir/flags.make
CMakeFiles/files_practica.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\clion\files practica\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/files_practica.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\files_practica.dir\main.cpp.obj -c "D:\clion\files practica\main.cpp"

CMakeFiles/files_practica.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/files_practica.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\clion\files practica\main.cpp" > CMakeFiles\files_practica.dir\main.cpp.i

CMakeFiles/files_practica.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/files_practica.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\clion\files practica\main.cpp" -o CMakeFiles\files_practica.dir\main.cpp.s

# Object files for target files_practica
files_practica_OBJECTS = \
"CMakeFiles/files_practica.dir/main.cpp.obj"

# External object files for target files_practica
files_practica_EXTERNAL_OBJECTS =

files_practica.exe: CMakeFiles/files_practica.dir/main.cpp.obj
files_practica.exe: CMakeFiles/files_practica.dir/build.make
files_practica.exe: CMakeFiles/files_practica.dir/linklibs.rsp
files_practica.exe: CMakeFiles/files_practica.dir/objects1.rsp
files_practica.exe: CMakeFiles/files_practica.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\clion\files practica\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable files_practica.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\files_practica.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/files_practica.dir/build: files_practica.exe

.PHONY : CMakeFiles/files_practica.dir/build

CMakeFiles/files_practica.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\files_practica.dir\cmake_clean.cmake
.PHONY : CMakeFiles/files_practica.dir/clean

CMakeFiles/files_practica.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\clion\files practica" "D:\clion\files practica" "D:\clion\files practica\cmake-build-debug" "D:\clion\files practica\cmake-build-debug" "D:\clion\files practica\cmake-build-debug\CMakeFiles\files_practica.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/files_practica.dir/depend

