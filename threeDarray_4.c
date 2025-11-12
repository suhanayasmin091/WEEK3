//Program to read and display 2 x 2 x 2 array
#include<stdio.h>

int main(){
    int arr[2][2][2];
    int i, j, k;
    printf("Enter 8 elements for a 2x2x2 array:\n");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            for (k = 0; k < 2; k++){
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
    printf("\nThe 2x2x2 array elements are:\n");
    for (i = 0; i < 2; i++){
        printf("Block %d:\n", i);
        for (j = 0; j < 2; j++){
            for (k = 0; k < 2; k++){
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
