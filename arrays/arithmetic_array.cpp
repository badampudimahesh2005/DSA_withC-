#include<iostream>
using namespace std;


/*
⁡⁣⁢⁣.............WHAT IS AN ARITHMETIC ARRAY..................
An arithmetic array is an array that contains at least two integers and the differences between
consecutive integers are equal .for ex: [9,10], [3,3,3], and [9,7,5,3]
*/

/*
Sarsavathi has an array of N non-negative integes. the ith integer of the array is Ai.
she wants to choose a contiguous arithmetic sub arary from her array that has the maximum
length.please help her to determine the length of the longest con𝘵𝘪𝘨𝘪𝘰𝘶𝘴 𝘢𝘳𝘪𝘵𝘩𝘮𝘦𝘵𝘪𝘤 𝘴𝘶𝘣𝘢𝘳𝘳𝘢𝘺.⁡⁡
*/ 


int main(){

    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];

    }

    int j=2;
    int ans=2;
    int pd=a[1]-a[0];
    int curr=2;

    while (j<n){
        if(pd==a[j]-a[j-1]){
            curr++;
        }
        else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;

    }
    cout<<ans<<endl;
   
    

    return 0;

}