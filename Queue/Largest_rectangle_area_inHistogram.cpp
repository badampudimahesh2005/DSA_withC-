#include <bits/stdc++.h>
using namespace std;

vector<string> ans;

void solve(int ind, string &s, vector<int> &vis, string &res)
{
    if (ind == s.size())
    {
        ans.push_back(res);
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (i != 0 && s[i] == s[i - 1])
            continue;
        if (!vis[i])
        {
            res.push_back(s[i]);
            vis[i] = 1;
            solve(ind + 1, s, vis, res);
            res.pop_back();
            vis[i] = 0;
            
        }
    }
}

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<int> vis(s.size(), 0);
    string res = "";
    solve(0, s, vis, res);
    for (auto &x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
