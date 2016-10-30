#include <iostream>
#include "Ray.h"


void recalculation(Ray **pRay);

using namespace std;

int main() {
    int m = 100;
    int n = 100;
    Ray **rays = new Ray *[m]; //матрица входных (падающих лучей)
    for (int i = 0; i < n; ++i) {
        rays[i] = new Ray[n];
    }

    recalculation(rays); //после прохода через систему

    for (int i = 0; i < m; i++) {
        delete[] rays[i];
    }
    delete[] rays;
}

void recalculation(Ray **pRay) {

}