#include<stdio.h>

void merge(int arr[], int start, int mid, int end){
    int n=mid-start+1;
    int m=end-mid;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++){
        arr1[i]=arr[start+i];
    }
    for(int i=0;i<m;i++){
        arr2[i]=arr[mid+i+1];
    }
    int i=0;
    int j=0;
    int index=start;
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
    int mid=(start+end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

