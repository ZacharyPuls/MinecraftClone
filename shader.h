//
// Created by zachpuls on 5/30/2016.
//

#include <glad/glad.h>

#ifndef MINECRAFT_SHADER_H
#define MINECRAFT_SHADER_H

GLuint create_shader(const char *source, GLenum type);
GLuint create_program(const char *vertex_shader, const char *fragment_shader);

#endif //MINECRAFT_SHADER_H
