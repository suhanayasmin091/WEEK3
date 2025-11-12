//Program to interchange the largest and smallest number in an array
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int num[n];
    printf("Enter the array elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    printf("The array elements are: ");
    for(int i = 0; i < n; i++){
        printf("%d ", num[i]);
    }
    printf("\n");
    int max = num[0], min = num[0];
    int maxind = 0, minind = 0;
    for(int i = 1; i < n; i++){
        if(num[i] > max){
            max = num[i];
            maxind = i;
        }
        if(num[i] < min){
            min = num[i];
            minind = i;
        }
    }
    int temp = num[maxind];
    num[maxind] = num[minind];
    num[minind] = temp;
    printf("The interchanged array is: ");
     for(int i = 0; i < n; i++){
        printf("%d ", num[i]);
    }
    return 0;
}