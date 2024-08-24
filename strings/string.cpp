#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


//largest number from given digits

/*
int main(){


    string s="35416435748746";

    sort(s.begin(),s.end(),greater<int>());

    cout<<s<<endl;
     return 0;
}

*/




//maximum freq char in a string

int main(){

string s="abceeededds";
    int freq[26];

    for(int i=0;i<26;i++){
        freq[i]=0;
    }

    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }

    char ans='a';
    int maxf=0;

    for(int i=0;i<26;i++){
        if(freq[i]>maxf){
            maxf=freq[i];
            ans=i+'a';
        }
    }

    cout<<maxf<<" "<<ans;
    return 0;

}
