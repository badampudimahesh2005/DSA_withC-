#include<bits/stdc++.h>
using namespace std;

bool sorted(int array[],int n){
    if(n==1){
        return true;
    }


    int restarray=sorted(array+1,n-1);
    return (array[0]<array[1] && restarray);
}

int main(){
    int arr[]={1,2,3,8,5,6};

    bool result=sorted(arr,6);

    if(result){
        cout<<"true";
    }else{
        cout<<"false";
    }

    return 0;


}