#include<iostream>

using namespace std;



int BinarySearch(int arr[],int n,int key){

    int s=0;
    int e=n;

    while(s<=n){
        int mid=(s+e)/2;

        if(arr[mid]== key){
            return mid; 
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
return -1;
}



int main(){
    int n;
    cin>>n;

    int arr[n];

    cout<<"enter the elements :"<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"enter the key to search:"<<endl;
int key;
cin>>key;

cout<<BinarySearch(arr,n ,key);

return 0;

}
