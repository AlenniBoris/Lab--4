# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Proga for BSU\Lab--4"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Proga for BSU\Lab--4\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\Google_Tests_run.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\Google_Tests_run.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Google_Tests_run.dir\flags.make

CMakeFiles\Google_Tests_run.dir\tests.cpp.obj: CMakeFiles\Google_Tests_run.dir\flags.make
CMakeFiles\Google_Tests_run.dir\tests.cpp.obj: ..\tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Proga for BSU\Lab--4\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Google_Tests_run.dir/tests.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\ENTERP~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Google_Tests_run.dir\tests.cpp.obj /FdCMakeFiles\Google_Tests_run.dir\ /FS -c "C:\Proga for BSU\Lab--4\tests.cpp"
<<

CMakeFiles\Google_Tests_run.dir\tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Google_Tests_run.dir/tests.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\ENTERP~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\Google_Tests_run.dir\tests.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Proga for BSU\Lab--4\tests.cpp"
<<

CMakeFiles\Google_Tests_run.dir\tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Google_Tests_run.dir/tests.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\ENTERP~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Google_Tests_run.dir\tests.cpp.s /c "C:\Proga for BSU\Lab--4\tests.cpp"
<<

# Object files for target Google_Tests_run
Google_Tests_run_OBJECTS = \
"CMakeFiles\Google_Tests_run.dir\tests.cpp.obj"

# External object files for target Google_Tests_run
Google_Tests_run_EXTERNAL_OBJECTS =

Google_Tests_run.exe: CMakeFiles\Google_Tests_run.dir\tests.cpp.obj
Google_Tests_run.exe: CMakeFiles\Google_Tests_run.dir\build.make
Google_Tests_run.exe: lib\gtestd.lib
Google_Tests_run.exe: lib\gtest_maind.lib
Google_Tests_run.exe: lib\gtestd.lib
Google_Tests_run.exe: CMakeFiles\Google_Tests_run.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Proga for BSU\Lab--4\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Google_Tests_run.exe"
	"C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Google_Tests_run.dir --rc=C:\WINDOW~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\WINDOW~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MIB055~1\2019\ENTERP~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Google_Tests_run.dir\objects1.rsp @<<
 /out:Google_Tests_run.exe /implib:Google_Tests_run.lib /pdb:"C:\Proga for BSU\Lab--4\cmake-build-debug\Google_Tests_run.pdb" /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  lib\gtestd.lib lib\gtest_maind.lib lib\gtestd.lib kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Google_Tests_run.dir\build: Google_Tests_run.exe
.PHONY : CMakeFiles\Google_Tests_run.dir\build

CMakeFiles\Google_Tests_run.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Google_Tests_run.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Google_Tests_run.dir\clean

CMakeFiles\Google_Tests_run.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Proga for BSU\Lab--4" "C:\Proga for BSU\Lab--4" "C:\Proga for BSU\Lab--4\cmake-build-debug" "C:\Proga for BSU\Lab--4\cmake-build-debug" "C:\Proga for BSU\Lab--4\cmake-build-debug\CMakeFiles\Google_Tests_run.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\Google_Tests_run.dir\depend

