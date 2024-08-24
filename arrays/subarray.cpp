#include<iostream>
using namespace std;

//question:Given an array a[] of size n. output sum of the each subarray of the given arrray

int main(){

    int n;
    cin>>n;

    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }


    int current =0;

    for(int i=0;i<n;i++){
        current=0;
        for(int j=i;j<n;j++){
            current+=array[j];
            cout<<current<<endl;
        }
    }
    return 0;
}


 