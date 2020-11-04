#include <stdio.h>
#include <stdlib.h>

#define nl printf("\n")

typedef struct {
    int v1;
    int v2;
    int v3;
}Vector3;


Vector3 *initVector3(int a, int b, int c) {
    Vector3 *ret = malloc(sizeof(Vector3));
    ret->v1 = a;
    ret->v2 = b;
    ret->v3 = c;
    return ret;
}
Vector3 *addVectors(Vector3 *a, Vector3 *b) {
    Vector3 *ret;
    ret->v1 = a->v1 + b->v1;
    ret->v2 = a->v2 + b->v2;
    ret->v3 = a->v3 + b->v3;
    return ret;
}
void printVector3(Vector3 *out) {
    printf("(%d %d %d)", out->v1, out->v2, out->v3);
}

void printLimitedBodyTableAddition(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d\t", (i+j)%n);
        }
        printf("\n");
    }
}
void printLimitedBodyTableMultiplication(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d\t", (i*j)%n);
        }
        printf("\n");
    }
}

int main() {
    printLimitedBodyTableAddition(7);
    nl;
    printLimitedBodyTableMultiplication(7);
    nl;

    Vector3 *a = initVector3(1,2,3);
    Vector3 *b = initVector3(3,0,1);
    printVector3(addVectors(a, b));
    nl;
    return 0;
}
