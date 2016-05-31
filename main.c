//
// Created by zachpuls on 5/30/2016.
//

#include "glad/glad.h"
#include <GLFW/glfw3.h>

#include <stdio.h>

#include "logging.h"
#include "cube.h"

struct cube_t cube = {
        0.0f, 0.0f, 1.0f,
        1.0f, 1.0f, 2.0f
};

int main(int argc, char **argv) {
    if (!glfwInit()) {
        LOG_ERROR("Could not initialize GLFW Library. Exiting program.");
        return -1;
    }

    GLFWwindow *window = glfwCreateWindow(640, 480, "Minecraft", NULL, NULL);

    if (!window) {
        LOG_ERROR("Could not initialize GLFW Window. Terminating GLFW and exiting program.");
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    if (!gladLoadGL()) {
        LOG_ERROR("Could not load OpenGL extensions. Exiting program.");
        return -1;
    }

    printf_s("OpenGL Version: %d.%d\n", GLVersion.major, GLVersion.minor);

    GLuint vbo = 0;

    glGenBuffers(1, &vbo);

    float *vertices = (float *)malloc(sizeof(float) * 108);

    deconstruct_cube(cube, vertices);

    glBindBuffer(GL_ARRAY_BUFFER, vbo);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
    glVertexPointer(sizeof(float) * 3, GL_FLOAT, 0, (void *)(NULL + 0));

    while (!glfwWindowShouldClose(window)) {
        glDrawArrays(GL_TRIANGLES, 0, 108);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    free(vertices);

    LOG_INFO("Program terminating gracefully.");
    glfwTerminate();
    return 0;
}