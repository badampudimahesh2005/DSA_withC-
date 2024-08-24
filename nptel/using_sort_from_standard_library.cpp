#include<iostream>
 using namespace std;

#include<algorithm>//sort function


//compare function pointer

bool compare(int i,int j){
    return i>j;//casting is not needed copmare to c

}
int ascending_order(int data[]);

int main(){
int arr[]={42,55,71,22,30};

    //start ptr. , end ptr.,fun ptr.
    sort(arr,arr+5,compare);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"in ascending order wihtout compare function:"<<endl;
    ascending_order(arr);
}

//above code for descending order
//For ascending order there is no need of compare function

int ascending_order(int data[]){
    sort(data,data+5);

    for(int i=0;i<5;i++){
        cout<<data[i]<<" ";
    }
}






