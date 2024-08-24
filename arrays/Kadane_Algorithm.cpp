#include<iostream>
#include<climits>
using namespace std;

//..............Largest Sum Contiguous Subarray (Kadane’s Algorithm)...........

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int currentsum=0;
    int maxsum=INT_MIN;

    for(int i=0;i<n;i++){
        currentsum+=arr[i];
        if(currentsum<0){
            currentsum=0;
        }
        maxsum=max(maxsum,currentsum);
    }

    cout<<"largest sum of contiguous subarray using kadane's algorithm: "<<maxsum<<endl;

    return 0;
}