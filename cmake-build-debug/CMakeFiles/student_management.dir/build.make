# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2023.1.3\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2023.1.3\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Desktop\student-management

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Desktop\student-management\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/student_management.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/student_management.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/student_management.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/student_management.dir/flags.make

CMakeFiles/student_management.dir/main.c.obj: CMakeFiles/student_management.dir/flags.make
CMakeFiles/student_management.dir/main.c.obj: E:/Desktop/student-management/main.c
CMakeFiles/student_management.dir/main.c.obj: CMakeFiles/student_management.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Desktop\student-management\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/student_management.dir/main.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/student_management.dir/main.c.obj -MF CMakeFiles\student_management.dir\main.c.obj.d -o CMakeFiles\student_management.dir\main.c.obj -c E:\Desktop\student-management\main.c

CMakeFiles/student_management.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/student_management.dir/main.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\Desktop\student-management\main.c > CMakeFiles\student_management.dir\main.c.i

CMakeFiles/student_management.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/student_management.dir/main.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\Desktop\student-management\main.c -o CMakeFiles\student_management.dir\main.c.s

CMakeFiles/student_management.dir/student.c.obj: CMakeFiles/student_management.dir/flags.make
CMakeFiles/student_management.dir/student.c.obj: E:/Desktop/student-management/student.c
CMakeFiles/student_management.dir/student.c.obj: CMakeFiles/student_management.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Desktop\student-management\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/student_management.dir/student.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/student_management.dir/student.c.obj -MF CMakeFiles\student_management.dir\student.c.obj.d -o CMakeFiles\student_management.dir\student.c.obj -c E:\Desktop\student-management\student.c

CMakeFiles/student_management.dir/student.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/student_management.dir/student.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\Desktop\student-management\student.c > CMakeFiles\student_management.dir\student.c.i

CMakeFiles/student_management.dir/student.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/student_management.dir/student.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\Desktop\student-management\student.c -o CMakeFiles\student_management.dir\student.c.s

# Object files for target student_management
student_management_OBJECTS = \
"CMakeFiles/student_management.dir/main.c.obj" \
"CMakeFiles/student_management.dir/student.c.obj"

# External object files for target student_management
student_management_EXTERNAL_OBJECTS =

student_management.exe: CMakeFiles/student_management.dir/main.c.obj
student_management.exe: CMakeFiles/student_management.dir/student.c.obj
student_management.exe: CMakeFiles/student_management.dir/build.make
student_management.exe: CMakeFiles/student_management.dir/linkLibs.rsp
student_management.exe: CMakeFiles/student_management.dir/objects1
student_management.exe: CMakeFiles/student_management.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Desktop\student-management\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable student_management.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\student_management.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/student_management.dir/build: student_management.exe
.PHONY : CMakeFiles/student_management.dir/build

CMakeFiles/student_management.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\student_management.dir\cmake_clean.cmake
.PHONY : CMakeFiles/student_management.dir/clean

CMakeFiles/student_management.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Desktop\student-management E:\Desktop\student-management E:\Desktop\student-management\cmake-build-debug E:\Desktop\student-management\cmake-build-debug E:\Desktop\student-management\cmake-build-debug\CMakeFiles\student_management.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/student_management.dir/depend

