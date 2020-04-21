#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "mult.h"

Vector mult(Matrix m, Vector v) {
    assert(m.x == v.len);
    
    Vector result = {m.y, calloc(m.y, sizeof(float)) };
    
    for (int i = 0; i < m.y; i++) {
        float sum = 0.0f;
        for (int j = 0; j < v.len; j++) {
            sum += m.array[m.x * m.y +j] * v.array[j];
        }
        result.array[i] = sum;
    }
    
    return result;
}

