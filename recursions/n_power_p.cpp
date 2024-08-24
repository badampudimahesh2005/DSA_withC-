#include<iostream>
using namespace std;

int power(int n,int p){
    if(p==0){
        return 1;
    }
    int prevpower=power(n,p-1);
    return n*prevpower;
}

int main(){

    int n,p;
    cout<<"enter the integer n and p: ";
    cin>>n>>p;


    cout<<"n power p is  : "<<power(n,p)<<endl;
    return 0;
}