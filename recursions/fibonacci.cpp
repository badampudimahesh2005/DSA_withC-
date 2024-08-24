#include<iostream>
using namespace std;

int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    cin>>n;
    int sum=0;
    cout<<"fibonacci series: ";
    for(int i=0;i<n;i++){
        cout<<fib(i)<<" ";
        sum+=fib(i);
    }cout<<endl;
    cout<<"sum of fibonacci series is: "<<sum<<endl;
}