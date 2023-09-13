#include <stdio.h>
#include "SortingAlgoLib.h"

int main(){
    int n;
    printf("Give size of integer array\n");
    scanf("%d",&n);
    int arr[n];
    if(takeInput(arr,n)){
        printf("\nSelect the type of sorting\n");
        int type;
        printf("1 for Bubble Sort\n2 for Selection Sort\n3 for Insertion Sort\n4 for Merge Sort\n5 for Quick sort with Starting element as pivot\n6 for Quick Sort with Ending element as pivot\n");
        if(scanf("%d",&type)!=1){
            printf("Invalid choice");
        }
        else{
            switch (type)
            {
                case 1:{
                    bubbleSort(arr,n);
                    break;
                }
                case 2:{
                    selectionSort(arr,n);
                    break;
                }
                case 3:{
                    insertionSort(arr,n);
                    break;
                }
                case 4:{
                    mergeSort(arr,0,n-1);
                    break;
                }
                case 5:{
                    quickSort(arr,0,n-1,1);
                    break;
                }
                case 6:{
                    quickSort(arr,0,n,0);
                    break;
                }
                default:{
                    printf("Invalid Choice");
                    break;
                }
            }
            printArray(arr,n);
        }
    }
}