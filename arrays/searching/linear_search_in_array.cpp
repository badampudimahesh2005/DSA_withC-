#include<iostream>
using namespace std;

int LinearSearch(int array[],int n,int key){
//time complexity of this is o(n)
    for(int i=0;i<n;i++){
        if(array[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){

    int n;
    cin>>n;
    int array[n];

    for (int i =0; i < n; i++)
    {
        cin>>array[i];
    }
    
    cout<<"enter the element to find the index value:";
    int key;
    cin>>key;

    cout<<LinearSearch(array,n,key);

    return 0;
}