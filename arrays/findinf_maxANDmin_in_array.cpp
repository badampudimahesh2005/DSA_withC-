#include<iostream>
using namespace std;
#include<climits>

int main(){
    
    cout<<"enter the number integers to be in array:";
    int n;
    cin>>n;
int array[n];

cout<<"enter"<<n<<"integers:";
    for(int i=0;i<n;i++){
        cin>>array[i];

    }

    int max_no=INT_MIN;
    int min_no=INT_MAX;

/*
    for(int i=0;i<n;i++){
        if(array[i]>max_no){
            max_no=array[i];
        }
        if(array[i]<min_no){
            min_no=array[i];
        }
    }
*/

//we can also write code with max and min functions
for (int i = 0; i < n; i++)
{
    max_no=max(max_no, array[i]);

    min_no=min(min_no,array[i]);
}

    cout<<"maximum integer in array"<<max_no<<endl;
    cout<<"minimum integer in array:"<<min_no;
}

