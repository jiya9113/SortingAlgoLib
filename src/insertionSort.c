#include<stdio.h>

void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int ele=arr[i];
        int j=i-1;
        // Move element by one position to right if the are greater tha current element
        while(j>=0 && arr[j]>ele){
            arr[j+1]=arr[j];
            j--;
        }
        // Place the element at it,s position
        arr[j+1]=ele;
    }
}
