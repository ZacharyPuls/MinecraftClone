//
// Created by zachpuls on 5/30/2016.
//

#include "cube.h"

// Deconstruct a cube_t into a set of vertices forming triangles

void deconstruct_cube(struct cube_t cube, float *vertices) {
    float vertices_[] = {
            // FRONT
            cube.x1, cube.y1, cube.z1, cube.x2, cube.y1, cube.z1, cube.x1, cube.y2, cube.z1,
            cube.x2, cube.y1, cube.z1, cube.x2, cube.y2, cube.z1, cube.x1, cube.y2, cube.z1,
            // RIGHT
            cube.x2, cube.y1, cube.z1, cube.x2, cube.y1, cube.z2, cube.x2, cube.y2, cube.z1,
            cube.x2, cube.y1, cube.z2, cube.x2, cube.y2, cube.z2, cube.x2, cube.y2, cube.z2,
            // BACK
            cube.x2, cube.y1, cube.z2, cube.x1, cube.y1, cube.z2, cube.x2, cube.y2, cube.z2,
            cube.x1, cube.y1, cube.z2, cube.x1, cube.y2, cube.z2, cube.x2, cube.y2, cube.z2,
            // LEFT
            cube.x1, cube.y1, cube.z2, cube.x1, cube.y1, cube.z1, cube.x1, cube.y2, cube.z1,
            cube.x1, cube.y1, cube.z2, cube.x1, cube.y2, cube.z2, cube.x1, cube.y2, cube.z1,
            // TOP
            cube.x1, cube.y2, cube.z1, cube.x2, cube.y2, cube.z1, cube.x1, cube.y2, cube.z2,
            cube.x2, cube.y2, cube.z1, cube.x2, cube.y2, cube.z2, cube.x1, cube.y2, cube.z2,
            // BOTTOM
            cube.x2, cube.y1, cube.z1, cube.x1, cube.y1, cube.z1, cube.x1, cube.y1, cube.z2,
            cube.x2, cube.y1, cube.z1, cube.x1, cube.y1, cube.z2, cube.x2, cube.y1, cube.z2
    };

    vertices = vertices_;
}
