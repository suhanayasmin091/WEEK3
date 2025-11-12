//In a small company there are five salesmen. Each salesman is supposed to sell three products. Write a program using a 2D array to print (i) the total sales by each salesman and (ii) total sales of each item.
#include <stdio.h>

int main(){
    int sales[5][3];
    printf("Enter sales of 5 salesmen for 3 products:\n");
    for (int i = 0; i < 5; i++){
        printf("Salesman %d:\n", i + 1);
        for (int j = 0; j < 3; j++){
            printf("  Product %d: ", j + 1);
            scanf("%d", &sales[i][j]);
        }
    }
    printf("\nTotal sales by each salesman:\n");
    for (int i = 0; i < 5; i++){
        int sum = 0;
        for (int j = 0; j < 3; j++){
            sum += sales[i][j];
        }
        printf("Salesman %d: %d\n", i + 1, sum);
    }
    printf("\nTotal sales of each product:\n");
    for (int j = 0; j < 3; j++){
        int sum = 0;
        for (int i = 0; i < 5; i++){
            sum += sales[i][j];
        }
        printf("Product %d: %d\n", j + 1, sum);
    }
    return 0;
}
