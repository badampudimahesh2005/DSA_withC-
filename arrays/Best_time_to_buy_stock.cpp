#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;
    vector<int>a;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }

int minsofar=a[0];
int maxprofit=0;

    for(int i=1;i<a.size();i++){
      minsofar= min(minsofar,a[i]);
      int profit=a[i]-minsofar;
      maxprofit=max(maxprofit,profit);

    }
    cout<<maxprofit;
}