#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;
bool ans=true;
    for(int i=0;i<n;i++){
        if(arr[i] != arr[n-1-i]){
            ans=false;
        }
    }
    if(ans){
        cout<<"given character array is a palindrome";
    }else{
        cout<<"given character array is not a  palindrome";
    }
}