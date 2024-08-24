#include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"no. of words in string:";
    cin>>n;
    cin.ignore();

    char arr[n+1];

    cin.getline(arr,n);
    cin.ignore();



    int i=0;
    int current=0,max=0;
    int st=0;
    int maxst=0;
    while (1)
    {
        if(arr[i]==' ' || arr[i]== '\0'){
            if(current>max){
                max=current; 
                maxst=st;
            }
            current=0;
            st=i+1;

        }
        else
        current++;


        if(arr[i]=='\0')
            break;

        i++;
    }
cout<<max<<endl;

for(int i=0;i<maxst;i++){
    cout<<arr[i+maxst];
}
    return 0;
    
}