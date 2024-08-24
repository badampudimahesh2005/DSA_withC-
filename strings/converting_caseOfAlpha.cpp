#include<iostream>
using namespace std;
#include<string>
#include<algorithm>


//converting lower case to upper and upper to lower case using inbuilt fun

void convert_to_upper(string s){
    cout<<endl;

    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<"converting string into upper using in-built function"<<endl;
    cout<<s<<endl;

     transform(s.begin(),s.end(),s.begin(),::tolower);
     cout<<"converting string into lower using in-built function"<<endl;
     cout<<s<<endl;
}





int main(){

    string str="abcdefghijklmnopqrstuvwxyz";

    //cout<<'a'-'A';  32  "it means a greater than A with value 32"

    //convert the string into upper case
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z' ){
            str[i]-=32;
        }

    }
    cout<<str<<endl;

    //convert the same string into lower case
    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z')
        str[i]+=32;
    }
    cout<<str<<endl;



    convert_to_upper(str);


}