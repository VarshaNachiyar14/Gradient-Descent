#include <stdio.h>

float gradw1(float x1, float x2, float y, float w1, float w2) {
    float derw1 = 2 * (y - ((w1 * x1) + (w2 * x2))) * (-x1);
    return derw1;
}

float gradw2(float x1, float x2, float y, float w1, float w2) {
    float derw2 = 2 * (y - ((w1 * x1) + (w2 * x2))) * (-x2);
    return derw2;
}

int main() {
    int arr[4][3] = {{0, 1, 1}, {2, 1, 9}, {1, 0, 1}, {-2, 1, 7}};
    float w1 = 0.5;
    float w2 = 0.7;

    for (int i = 0; i < 4; i++) {
        float x1 = arr[i][0];
        float x2 = arr[i][1];
        float y = arr[i][2];

        float fn1 = gradw1(x1, x2, y, w1, w2);
        float fn2 = gradw2(x1, x2, y, w1, w2);
        printf("input:%f,%f,%f \n",x1,x2,y);
        printf("gradient descent1:%f\n",fn1);
        printf("gradient descent2:%f\n",fn2);

        
    }
   
    
    
}
