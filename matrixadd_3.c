//Program to input two m x n  matrices and then calculate the sum of their corresponding elements and store it in a third m x n matrix
#include<stdio.h>

int main(){
    int a[10][10], b[10][10], sum[10][10], row, col;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    printf("Enter the elements of 1st matrix: \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix: \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Resultant matrix after addition: \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ", sum[i][j]);
        }    
        printf("\n");
    }
    return 0;
}
