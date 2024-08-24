#include<iostream>

using namespace std;



//write a pogram to check if given number is power of 2

bool isPower(int n){
     // n && is because of Zero
    return (n && !(n & (n-1)));
}

//write a program to check the number of ones in the given binary number
int numberofones(int n){
int count=0;
while(n){
    n=n&n-1;
    count++;

}
return count;
}


int main(){

cout<<isPower(0)<<endl;

cout<<"number of ones:";
cout<<numberofones(19);
}