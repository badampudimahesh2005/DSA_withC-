#include<iostream>
using namespace std;


//write a program to find the unique number in an array where all the numbers except one,are present twice

int unique(int arr[],int n){

int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];

    }
    return ans;

}

//write a program to find 2 unique numbers in an array where all numbers except two,are present twice


int main(){
int arr[]={1,2,3,4,1,2,3};
cout<<unique(arr,7);
    return 0;
}


