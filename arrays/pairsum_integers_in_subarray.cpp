#include<iostream>
using namespace std;

//this is for sorted array if array is not sorted then sort the array before coding

bool pairsum(int arr[],int n,int k){


    int low=0;
    int high=n-1;

    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>k){
            high--;
        }
        else{
            low++;
        }
    }return false;

    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]+arr[j]==k){
    //             cout<<i<<" "<<j<<endl;
    //             return 1;
    //         }
    //     }
    // }
    // return 0;
 
}


 
int main(){
    int arr[]={2,11,12,16,18,20,22,34,};
    int k=33;

    cout<<pairsum(arr,8,k)<<endl;
    return 0;

}