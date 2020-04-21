#ifndef mult_h
#define mult_h

typedef struct {
    size_t x,y;
    float* array;
} Matrix;

typedef struct {
    size_t len;
    float* array;
} Vector;

Vector mult(Matrix m, Vector v);


#endif

