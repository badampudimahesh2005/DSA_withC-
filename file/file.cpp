#include<iostream>
#include<fstream>

using namespace std;

/*
The useful classes for working with files in cpp are:
1.fstreambase
2.ifstream --> derived from fstreambase
3.ofstream --> derived from fstreambase

*/


// In order to work with files in cpp , you will have to open it. primarily, there are 2 ways to open a file:
// 1. using the constructor
// 2.using the member function open() of the class


int main(){

//opening the file using constructor

// string st="mahesh bhai";
// ofstream out("sample.txt"); //write operation
// out<<st;

 string s2;

 ifstream in("sample.txt");//read operation 

 getline(in,s2);
 cout<<s2;

 return 0;


/*
 ofstream out;
 out.open("sample.txt");
 out<<"this is me";
 out<<"this is you";
 out<<"this is him";
 out<<"this is her";
 out.close();
*/

}
