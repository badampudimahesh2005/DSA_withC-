#include<bits/stdc++.h>

using namespace std;


void towerofHanoi(int start,int end,char source,char aux,char destination){
    if(start>end){
        return;
    }
    towerofHanoi(start,end-1,source,destination,aux);
    cout<<"move disk "<<end<<" from "<<source<<" to "<<destination<<endl;
    towerofHanoi(start,end-1,aux,source,destination);

}

int main(){

    towerofHanoi(1,3,'A','B','C');
    return 0;
}