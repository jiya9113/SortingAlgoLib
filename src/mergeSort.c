#include<stdio.h>

void merge(int arr[], int start, int mid, int end){
    // Length of first half
    int n=mid-start+1;
    // Length of second half
    int m=end-mid;
    // Creating two temporary arrays
    int arr1[n];
    int arr2[m];
    // Copying first half of the array
    for(int i=0;i<n;i++){
        arr1[i]=arr[start+i];
    }
    // Copying second half of the array
    for(int i=0;i<m;i++){
        arr2[i]=arr[mid+i+1];
    }
    int i=0;
    int j=0;
    int index=start;
    // Merging two sorted arrays
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr[index]=arr1[i];
            i++;
            index++;
        }
        else{
            arr[index]=arr2[j];
            j++;
            index++;
        }
    }
    // inserting remaining elements
    while(i<n){
        arr[index]=arr1[i];
        i++;
        index++;
    }
    while(j<m){
        arr[index]=arr2[j];
        j++;
        index++;
    }
}

void mergeSort(int arr[], int start, int end){
    if(start>=end){
        return;
    }
    // Partitioning array into half
    int mid=(start+end)/2;
    // Calling merge sort on first half of the array
    mergeSort(arr,start,mid);
    // Calling merge sort on second half of the array
    mergeSort(arr,mid+1,end);
    // Merging two sorted arrays
    merge(arr,start,mid,end);
}

