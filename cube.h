//
// Created by zachpuls on 5/30/2016.
//

#ifndef MINECRAFT_CUBE_H
#define MINECRAFT_CUBE_H

typedef struct cube_t {
    float x1;
    float y1;
    float z1;
    float x2;
    float y2;
    float z2;
};

void deconstruct_cube(struct cube_t cube, float *vertices);

#endif //MINECRAFT_CUBE_H
