cmake_minimum_required(VERSION 3.1...3.22 FATAL_ERROR)

project(glfw_setup VERSION 0.1.0 LANGUAGES C++)
find_package((OpenGL Required))
add_executable(${PROJECT_NAME} main.cpp)


add_subdirectory(${PROJECT_NAME} external/glfw)
target_include_directories(${PROJECT_NAME} external/glfw/include)
link_directories(${PROJECT_NAME} external/glfw/src)
target_link_libraries(${PROJECT_NAME} glfw)