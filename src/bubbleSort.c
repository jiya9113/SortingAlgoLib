#include<stdio.h>

void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int swap=0;
        for(int j=0;j<n-i-1;j++){
            // Swap the elements if larger element occurs before smaller element
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap++;
            }
        }
        // if there are no swaps then array is sorted
        if(swap==0){
            return;
        }
    }
}