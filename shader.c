//
// Created by zachpuls on 5/30/2016.
//

#include "shader.h"

GLuint create_shader(const char *source, GLenum type) {
    GLuint shader_id = glCreateShader(type);
    glShaderSource(shader_id, 1, &source, NULL);
    glCompileShader(shader_id);

    GLuint compile_status = 0;
    glGetShaderiv(shader_id, GL_COMPILE_STATUS, &compile_status);
    return shader_id;
}