#include<iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    int array[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>array[i][j];
        }
    }



    //spiral order print 

int rowStart=0,rowEnd=n-1;
int columnStart=0,columnEnd=m-1;

while (rowStart<=rowEnd && columnStart<columnEnd)
{
    //FOR ROW START
    for(int col=columnStart;col<=columnEnd;col++){
        cout<<array[rowStart][col]<<" ";
    }
    rowStart++;

    //FOR COLUMN END
    for(int row=rowStart;row<=rowEnd;row++){
        cout<<array[row][columnEnd]<<" ";
    }
    columnEnd--;

    //FOR ROW end
    for(int col=columnEnd;col>=columnStart;col--){
        cout<<array[rowEnd][col]<<" ";
    }
    rowEnd--;

    //FOR COLUMN start
    for(int row=rowEnd;row>=rowStart;row--){
        cout<<array[row][columnStart]<<" ";
    }
    columnStart++;


}
return 0;


    
}

