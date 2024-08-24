#include<bits/stdc++.h>
using namespace std;


/*

//O(n) ,O(n)
 
int rain_water1(vector<int>arr){

    int n=arr.size();
    int ans=0;
    vector<int>left(n);
    vector<int>right(n);

    left[0]=arr[0];
    right[n-1]=arr[n-1];


    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],arr[i]);

    }
    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],arr[i]);
    }
    for(int i=0;i<n;i++){
        ans+= min(left[i],right[i]) - arr[i];
    }
    return ans;
}

*/




// two pointer approach

int rain_water2(vector<int>A){
    int a=0,b=A.size()-1;

    int res=0;
    int leftmax=0,rightmax=0;

    while(a<=b){
        leftmax=max(leftmax,A[a]);
        rightmax=max(rightmax,A[b]);

        if(leftmax<rightmax){
            res+=(leftmax - A[a]);
            a++;
        }else{
            res+=(rightmax - A[b]);
            b--;
        }
    }
    return res;

}



int rain_water(vector<int>a){

    stack<int>st;
    int n=a.size();
    int ans=0;

    for(int i=0;i<n;i++){
        while(!st.empty() && a[st.top()]<a[i]){
            int cur=st.top();
            st.pop();
            if(st.empty()){
                break;;
            }
            int diff=i-st.top()-1;
            ans+=(min(a[st.top()],a[i]) - a[cur])*diff;
        }
        st.push(i);
    }
    return ans;

}



int main(){
    vector<int> a={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<rain_water2(a);

    return 0;
}