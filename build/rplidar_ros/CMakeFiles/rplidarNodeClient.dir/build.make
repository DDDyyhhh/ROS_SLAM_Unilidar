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
CMAKE_SOURCE_DIR = /home/orangepi/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/orangepi/catkin_ws/build

# Include any dependencies generated for this target.
include rplidar_ros/CMakeFiles/rplidarNodeClient.dir/depend.make

# Include the progress variables for this target.
include rplidar_ros/CMakeFiles/rplidarNodeClient.dir/progress.make

# Include the compile flags for this target's objects.
include rplidar_ros/CMakeFiles/rplidarNodeClient.dir/flags.make

rplidar_ros/CMakeFiles/rplidarNodeClient.dir/src/client.cpp.o: rplidar_ros/CMakeFiles/rplidarNodeClient.dir/flags.make
rplidar_ros/CMakeFiles/rplidarNodeClient.dir/src/client.cpp.o: /home/orangepi/catkin_ws/src/rplidar_ros/src/client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/orangepi/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object rplidar_ros/CMakeFiles/rplidarNodeClient.dir/src/client.cpp.o"
	cd /home/orangepi/catkin_ws/build/rplidar_ros && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rplidarNodeClient.dir/src/client.cpp.o -c /home/orangepi/catkin_ws/src/rplidar_ros/src/client.cpp

rplidar_ros/CMakeFiles/rplidarNodeClient.dir/src/client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rplidarNodeClient.dir/src/client.cpp.i"
	cd /home/orangepi/catkin_ws/build/rplidar_ros && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/orangepi/catkin_ws/src/rplidar_ros/src/client.cpp > CMakeFiles/rplidarNodeClient.dir/src/client.cpp.i

rplidar_ros/CMakeFiles/rplidarNodeClient.dir/src/client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rplidarNodeClient.dir/src/client.cpp.s"
	cd /home/orangepi/catkin_ws/build/rplidar_ros && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/orangepi/catkin_ws/src/rplidar_ros/src/client.cpp -o CMakeFiles/rplidarNodeClient.dir/src/client.cpp.s

# Object files for target rplidarNodeClient
rplidarNodeClient_OBJECTS = \
"CMakeFiles/rplidarNodeClient.dir/src/client.cpp.o"

# External object files for target rplidarNodeClient
rplidarNodeClient_EXTERNAL_OBJECTS =

/home/orangepi/catkin_ws/devel/lib/rplidar_ros/rplidarNodeClient: rplidar_ros/CMakeFiles/rplidarNodeClient.dir/src/client.cpp.o
/home/orangepi/catkin_ws/devel/lib/rplidar_ros/rplidarNodeClient: rplidar_ros/CMakeFiles/rplidarNodeClient.dir/build.make
/home/orangepi/catkin_ws/devel/lib/rplidar_ros/rplidarNodeClient: /opt/ros/noetic/lib/libroscpp.so
/home/orangepi/catkin_ws/devel/lib/rplidar_ros/rplidarNodeClient: /usr/lib/aarch64-linux-gnu/libpthread.so
/home/orangepi/catkin_ws/devel/lib/rplidar_ros/rplidarNodeClient: /usr/lib/aarch64-linux-gnu/libboost_chrono.so.1.71.0
/home/orangepi/catkin_ws/devel/lib/rplidar_ros/rplidarNodeClient: /usr/lib/aarch64-linux-gnu/libboost_filesystem.so.1.71.0
/home/orangepi/catkin_ws/devel/lib/rplidar_ros/rplidarNodeClient: /opt/ros/noetic/lib/libxmlrpcpp.so
/home/orangepi/catkin_ws/devel/lib/rplidar_ros/rplidarNodeClient: /opt/ros/noetic/lib/librosconsole.so
/home/orangepi/catkin_ws/devel/lib/rplidar_ros/rplidarNodeClient: /opt/ros/noetic/lib/librosconsole_log4cxx.so
/home/orangepi/catkin_ws/devel/lib/rplidar_ros/rplidarNodeClient: /opt/ros/noetic/lib/librosconsole_backend_interface.so
/home/orangepi/catkin_ws/devel/lib/rplidar_ros/rplidarNodeClient: /usr/lib/aarch64-linux-gnu/liblog4cxx.so
/home/orangepi/catkin_ws/devel/lib/rplidar_ros/rplidarNodeClient: /usr/lib/aarch64-linux-gnu/libboost_regex.so.1.71.0
/home/orangepi/catkin_ws/devel/lib/rplidar_ros/rplidarNodeClient: /opt/ros/noetic/lib/libroscpp_serialization.so
/home/orangepi/catkin_ws/devel/lib/rplidar_ros/rplidarNodeClient: /opt/ros/noetic/lib/librostime.so
/home/orangepi/catkin_ws/devel/lib/rplidar_ros/rplidarNodeClient: /usr/lib/aarch64-linux-gnu/libboost_date_time.so.1.71.0
/home/orangepi/catkin_ws/devel/lib/rplidar_ros/rplidarNodeClient: /opt/ros/noetic/lib/libcpp_common.so
/home/orangepi/catkin_ws/devel/lib/rplidar_ros/rplidarNodeClient: /usr/lib/aarch64-linux-gnu/libboost_system.so.1.71.0
/home/orangepi/catkin_ws/devel/lib/rplidar_ros/rplidarNodeClient: /usr/lib/aarch64-linux-gnu/libboost_thread.so.1.71.0
/home/orangepi/catkin_ws/devel/lib/rplidar_ros/rplidarNodeClient: /usr/lib/aarch64-linux-gnu/libconsole_bridge.so.0.4
/home/orangepi/catkin_ws/devel/lib/rplidar_ros/rplidarNodeClient: rplidar_ros/CMakeFiles/rplidarNodeClient.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/orangepi/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/orangepi/catkin_ws/devel/lib/rplidar_ros/rplidarNodeClient"
	cd /home/orangepi/catkin_ws/build/rplidar_ros && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rplidarNodeClient.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
rplidar_ros/CMakeFiles/rplidarNodeClient.dir/build: /home/orangepi/catkin_ws/devel/lib/rplidar_ros/rplidarNodeClient

.PHONY : rplidar_ros/CMakeFiles/rplidarNodeClient.dir/build

rplidar_ros/CMakeFiles/rplidarNodeClient.dir/clean:
	cd /home/orangepi/catkin_ws/build/rplidar_ros && $(CMAKE_COMMAND) -P CMakeFiles/rplidarNodeClient.dir/cmake_clean.cmake
.PHONY : rplidar_ros/CMakeFiles/rplidarNodeClient.dir/clean

rplidar_ros/CMakeFiles/rplidarNodeClient.dir/depend:
	cd /home/orangepi/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/orangepi/catkin_ws/src /home/orangepi/catkin_ws/src/rplidar_ros /home/orangepi/catkin_ws/build /home/orangepi/catkin_ws/build/rplidar_ros /home/orangepi/catkin_ws/build/rplidar_ros/CMakeFiles/rplidarNodeClient.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : rplidar_ros/CMakeFiles/rplidarNodeClient.dir/depend

