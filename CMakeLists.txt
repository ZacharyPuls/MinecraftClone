cmake_minimum_required(VERSION 3.5)
project(Minecraft)

set(SOURCE_FILES glad/src/glad.c main.c logging.h datetime.h datetime.c cube.h cube.c shader.h shader.c)
add_executable(Minecraft ${SOURCE_FILES})

include_directories(glad/include)

add_subdirectory(glfw-3.1.2)
include_directories(glfw-3.1.2/include)
target_link_libraries(Minecraft glfw ${GLFW_LIBRARIES})