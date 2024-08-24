
#include<iostream>

using namespace std;
#include<climits>



/*
Given two 2-Dimensional arrays of sizes n1xn2 and n2Xn3. 
Your task is to multiply these matrices and output the multiplied matrix.
*/

int main(){

    int n1,n2,n3;
    cin>>n1>>n2>>n3;

    int m1[n1][n2];
    int m2[n2][n3];
//taking input for matrix1
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>m1[i][j];
        }
    }
 //taking input for matrix2   
     for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cin>>m2[i][j];
        }
    }

int ans[n1][n3];

//assigning every element of ans matrix to zero
     for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            ans[i][j]=0;
        }
    }


//matrix multplication

for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
        for(int k=0;k<n2;k++){
            ans[i][j]+=m1[i][k]*m2[k][j];
        }
    }
}


//output
for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
        cout<<ans[i][j]<<" ";
    }cout<<endl;
}

    return 0;
}