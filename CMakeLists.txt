cmake_minimum_required(VERSION 3.10)
cmake_policy(SET CMP0072 NEW)

set(PROJECT_NAME tanks)
project(${PROJECT_NAME})

# 🔹 Find packages
find_package(OpenGL REQUIRED)

# 🔹 Add external dependencies
add_subdirectory(external/glfw)
add_subdirectory(external/glad)

# 🔹 Include necessary directories (fixes IntelliSense errors)
include_directories(external/glfw/include)
include_directories(external/glad/include)

# 🔹 Create the executable
add_executable(${PROJECT_NAME} src/main.cpp)

# 🔹 Link libraries to the executable
target_link_libraries(${PROJECT_NAME} glfw)
target_link_libraries(${PROJECT_NAME} OpenGL::GL)
target_link_libraries(${PROJECT_NAME} glad)
