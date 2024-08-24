#include<iostream>

using namespace std;

/*

1.GET BIT
  3 2 1 0--> position
n=0 1 0 1 =5
suppose we need to get bit at position , i=2
1<<i=0100

0101 & 0100 = 0100



2.SET BIT
n=0101
suppose we need to set bit at position , i=1
1<<i=0010

0101 | 0010 =0111


3.CLEAR BIT
suppose we need to clear bit at position ,i=2
1<<i=0100
~0100=1011

0101 & 1011=0001


4.UPDATE BIT 
n=0101
suppose we need to update bit at position ,i=1 to 1
1<<i=0010
~0010 =1101
0101 & 1101 = 0101
1<<i=0010
0101 | 0010 = 0111

*/

int getbit(int n,int pos){
    return ((n& (1<<pos))!=0);
}

int setbit(int n,int pos){
    return (n|( 1<<pos)); 
}

int clearbit(int n,int pos){
    int mask=~(1<<pos);
    return (n & mask);
}
int updatebit(int n,int pos,int value){
    int mask=~(1<<pos);
    return( (n & mask)|(value<<pos));

}


int main(){

    cout<<getbit(5,2)<<endl;
    cout<<setbit(5,1)<<endl; 
    cout<<clearbit(5,2)<<endl;
    cout<<updatebit(5,1,1);

    return 0;
}