#include<bits/stdc++.h>
using namespace std;

//Find the first and last occurence of a number in an array
//           {4,2,1,2,5,2,7}


int firstocu(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }

    if(arr[i]==key){
        return i;
    }
    return firstocu(arr,n,i+1,key);
}

int lastocu(int arr[],int n,int i,int key){
    if(i==-1){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return lastocu(arr,n,i-1,key);
}

int lastocu2(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int restarray= lastocu2(arr,n,i+1,key);

    if(restarray!=-1){
        return restarray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main(){
 
    int arr[]={4,2,1,2,5,2,7};
    cout<<firstocu(arr,7,0,2)<<endl;
    //cout<<lastocu(arr,7,6,2)<<endl;

    cout<<lastocu2(arr,7,0,2)<<endl;



    return 0;
}