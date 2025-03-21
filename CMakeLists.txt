cmake_minimum_required(VERSION 3.10)
cmake_policy(SET CMP0072 NEW)

set(PROJECT_NAME tanks)
project(${PROJECT_NAME})

# 🔹 Find packages
find_package(OpenGL REQUIRED)

# 🔹 Add external dependencies
add_subdirectory(external/glfw)
add_subdirectory(external/glad)

# 🔹 Include necessary directories
include_directories(
    external/glfw/include
    external/glad/include
)
include_directories(
    src/core
    src/renderer
    src/utils
)

# 🔹 Create the executable
add_executable(${PROJECT_NAME} src/main.cpp
    src/core/Window.cpp
    src/core/Application.cpp
    src/renderer/Renderer.cpp
    src/utils/Logger.cpp
)

# 🔹 Link libraries to the executable
target_link_libraries(${PROJECT_NAME} glfw)
target_link_libraries(${PROJECT_NAME} OpenGL::GL)
target_link_libraries(${PROJECT_NAME} glad)
