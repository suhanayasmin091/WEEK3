//Program which illustrates the use of a pointer to a three-dimensional array
#include <stdio.h>

int main(){
    int arr[2][2][2] = {
        {{1, 2}, {3, 4}},
        {{5, 6}, {7, 8}}
    };
    int *p;   
    p = &arr[0][0][0];   
    printf("Elements of 3D array using pointer:\n");
    for (int i = 0; i < 2; i++){
        printf("Block %d:\n", i);
        for (int j = 0; j < 2; j++){
            for (int k = 0; k < 2; k++){
                int index = i*2*2 + j*2 + k;
                printf("%d\t", *(p + index));
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
