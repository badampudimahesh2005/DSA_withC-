#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int start = 0;
        int end = 0;
        while (end < n) {
            while (end < n && s[end] != ' ') {
                end++;
            }
            reverse(s.begin() + start, s.begin() + end);
            start = end + 1;
            end = start;
        }
        return s;
    }
};
class Solution2 {
public:
    string reverseWords(string s) {
        int n = s.size();
        int start = 0;
        int end = 0;
        while (end < n) {
            while (end < n && s[end] != ' ') {
                end++;
            }
            reverse(s.begin() + start, s.begin() + end);
            start = end + 1;
            end = start;
        }
        reverse(s.begin(), s.end());
        return s;
    }
};


int main(){
 Solution s;
 cout<<s.reverseWords("the sky is blue")<<endl;
 Solution2 s2;
 cout<<s2.reverseWords("the sky is blue");
 
    return 0;
}