// Rearrange the array in alternating postive and negative

#include<bits/stdc++.h>
using namespace std;


void rearrange(int arr[],int n){
    int i=-1;
    int j=n-1;

    while(i<j){
        while(i<=n-1 && arr[i]>0)
            i++;

        while(j>=0 && arr[j]<0)
            j--;
        
        if(i<j)
            swap(arr[i],arr[j]);
        
    }

    if(i==0 || i==n){
        return;
    }

    int k=0;
    while(k<n && i<n){
        swap(arr[k],arr[i]);
        i++;
        k+=2;
        
    }

}
void print(int arr[],int n){
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[]={2,3,-4,-4,6,-9};
    int n=6;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    rearrange(arr,n);
    cout<<endl;
 print(arr,n);

    return 0;
}