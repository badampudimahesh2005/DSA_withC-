#include<bits/stdc++.h>
using namespace std;

int main(){
    ofstream file("Out.txt");
    file<<"line 1";
    file.seekp(5);
    file<<"2";
    file.close();
    return 0;
    
}