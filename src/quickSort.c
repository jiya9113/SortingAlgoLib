#include<stdio.h>

// Partitioning with ending element as pivot
int endPartition(int arr[], int start, int end){
    int pivot=arr[end];
    int i=start-1;
    for(int j=start;j<=end;j++){
        if(arr[j]<pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    // Pivot at its correct position
    int temp=arr[++i];
    arr[i]=arr[end];
    arr[end]=temp;
    return i;
}

// Partitioning with starting element as pivot
int startPartition(int arr[], int start, int end){
    int pivot=arr[start];
    int i=end+1;
    for(int j=end;j>=start;j--){
        if(arr[j]>pivot){
            i--;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[--i];
    arr[i]=arr[start];
    arr[start]=temp;
    return i;
}

void quickSort(int arr[], int start,int end, int type){
    if(start>=end){
        return;
    }
    int part;
    if(type==1){
        part=startPartition(arr,start,end);
    }
    else{
        part=endPartition(arr,start,end);
    }
    // Sorting first part of the array
    quickSort(arr,start,part-1,type);
    // Sorting second part of the array
    quickSort(arr,part+1,end,type);
}