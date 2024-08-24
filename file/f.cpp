#include<bits/stdc++.h>
using namespace std;


class car{
    public:
    car(){model=new char[20];}

    ~car(){delete[] model;}

    void setmodel(const char* newmodel){
         model=new char[strlen(newmodel)+1];
        strcpy(model,newmodel);
    }
    void display(){
        cout<<"model"<<model<<endl;
    }
    private:
    char* model;
};
int main(){

    car c;
    c.
    c.setmodel("seden");
    c.display();

    

}