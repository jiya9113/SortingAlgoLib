#include<stdio.h>

int takeInput(int arr[], int n){
    // Checking if the length is positive
    if(n<0){
        printf("Invalid input: Length cannot be negative");
        return 0;
    }
    if(n==0){
        return 0;
    }
    // Taking input
    printf("\nEnter your array\n");
    for(int i=0;i<n;i++){
        // Checking if the given input is an integer
        if (scanf("%d", &arr[i]) != 1){
            printf("Invalid input: Number is not an integer");
            return 0;
        }
    }
    return 1;
}