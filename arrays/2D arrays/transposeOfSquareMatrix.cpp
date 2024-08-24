#include<iostream>

using namespace std;
#include<climits>


/*
Given a square matrix A and its number of rows(or columns)N,return the transpose of the matrix A
The transpose of a matrix is the matrix flipped over its main diagonal ,switching 
the rows and column indices of the matrix.
*/

int main(){

    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }

    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout<<a[i][j]<<" ";
        }cout<<endl;
    }

    
}