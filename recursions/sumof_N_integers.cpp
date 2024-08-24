#include<iostream>
using namespace std;

int sumofn(int n){
    if(n==0){
        return 0;
    }
    int prevsum=sumofn(n-1);
    return n+prevsum;
}

int main(){

    int n;
    cout<<"enter the integer n: ";
    cin>>n;

    cout<<"sum of integers upto n is : "<<sumofn(n)<<endl;
    return 0;
}