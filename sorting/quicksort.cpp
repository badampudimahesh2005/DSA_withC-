#include<bits/stdc++.h>
using namespace std;

void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partition(int arr[],int s,int e){
    int pivot=arr[e];
    int i=s-1;
    for(int j=s;j<e;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }

    }
    swap(arr,i+1,e);

    return i+1;
}

void quickSort(int arr[],int s,int e){

    if(s<e){
        int pi=partition(arr,s,e);

        quickSort(arr,s,pi-1);
        quickSort(arr,pi+1,e);

    }
}

int main(){
    int arr[7]={6,3,9,5,2,7,1};

    quickSort(arr,0,6);

    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}