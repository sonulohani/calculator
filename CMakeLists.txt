cmake_minimum_required(VERSION 3.10)
project(calculator)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_PREFIX_PATH /home/sonu/Qt5.11.2/5.11.2/gcc_64)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)

# Create code from a list of Qt designer ui files
set(CMAKE_AUTOUIC ON)

# Find the QtWidgets library
find_package(Qt5Widgets CONFIG REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# Populate a CMake variable with the sourcese
set(calculator_src  src/main.cpp
                    src/mainwindow.cpp)

# Tell CMake to create the helloworld executable
add_executable(calculator ${calculator_src})

# Use the Widgets module from Qt 5
target_link_libraries(calculator Qt5::Widgets)



