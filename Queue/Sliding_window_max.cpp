#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;
 vector<int>a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }


//TIME COMPLEXITY-->O(NLOGN)
    // multiset<int,greater<int>>s;
    // vector<int>ans;

    // for(int i=0;i<k;i++){
    //     s.insert(a[i]);
    // }
    // ans.push_back(*s.begin());

    // for(int i=k;i<n;i++){
    //     s.erase(s.lower_bound(a[i-k]));
    //     s.insert(a[i]);
    //     ans.push_back(*s.begin());

    // }

    // for(auto i:ans){
    //     cout<<i<<" ";
    // }



//TIME COMPLEXITY-->O(n)
deque<int>q;
vector<int>ans;

for(int i=0;i<k;i++){
    while(!q.empty() && a[i]>a[q.back()]){
        q.pop_back();
    }
q.push_back(i);
}
ans.push_back(a[q.front()]);

for(int i=k;i<n;i++){

    if(q.front() == i-k){
        q.pop_front();
    }
    while(!q.empty() && a[i]>a[q.back()]){
        q.pop_back();
    }
    q.push_back(i);
    ans.push_back(a[q.front()]);
}

     
for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}