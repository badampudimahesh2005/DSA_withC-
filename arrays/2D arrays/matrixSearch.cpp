#include<iostream>
#include<climits>
using namespace std;

/*
Given a nxm matrix.
Write an algorithm to find that the given value exists in the matrixor not.
Integers in each row are sorted in ascending from left to right.
 Integers in each column are sorted in ascending from top to bottom.
*/

int main(){

    int n,m;
    cin>>n>>m;

    int target;
    cin>>target;

    int mat[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];

        }
    }

bool found=false;
    int r=0,c=m-1;
    while(r<n && c>=0){
        if(mat[r][c]==target){
            found=true;
        }
        if(mat[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }



    if(found){
        cout<<"Element found";
    }
    else{
        cout<<"element does not found";
    }
}