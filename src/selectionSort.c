#include<stdio.h>

void selectionSort(int arr[], int n){
    for(int i=0;i<n;i++){
        // index of minimum element
        int min=i;
        // Finding the minimum element in array
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        // Swapping the found minimum element with current index
        if(min!=i){
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
}