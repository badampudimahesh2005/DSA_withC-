#include<iostream>
using namespace std;


//1.rectangle

/*
int main(){
    int row,col;

    cin>>row>>col;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<"* ";
        }
        cout<<endl;


    }
}

*/


//2.hollow rectangle

/*
int main(){

    int row ,col;
    cin>>row>>col;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

*/


//3.inverted half pyramid

// int main(){

//     int n;
//     cin>>n;


//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"* ";

//         }
//         cout<<endl;
//     }
// }




/*

int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";

            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}

*/



/*half pyramid using numbers*/

/*

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for (int j = 1; j <=i; j++)
        {
           cout<<i<<" ";
        }
        cout<<endl;
    }
}

*/


/*

int main(){
    int n;
    cin>>n;
    int count=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}
*/

