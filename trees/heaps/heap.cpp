#include<bits/stdc++.h>
using namespace std;


class MaxHeap{
    vector<int>v;
    public:

    int size(){
        return v.size();
    }

    bool empty(){
        return v.size()==0;
    }

    void insert(int ele){
        v.push_back(ele);

        
    
        //upheapify
        int ci=v.size()-1;

        while(ci>0){
             int pi=(ci-1)/2;
            if(v[pi]<v[ci]){
                swap(v[ci],v[pi]);
                ci=pi;
            }else{
                return;

            }
        }
    }


     void display() {
        for (int element : v) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
};


class MinHeap{
    vector<int>v;
    public:

    int size(){
        return v.size();
    }

    bool empty(){
        return v.size()==0;
    }

    void push(int val){
        v.push_back(val);

        //upheapify

        int ci=v.size()-1;
        int pi=(ci-1)/2;

        while(ci>0){
            if(v[ci]<v[pi]){
                swap(v[ci],v[pi]);
            }else break;
            ci=pi;
            ci=(ci-1)/2;
        }
        return;
    }

    
     void display() {
        for (int element : v) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

};
int main(){
    MaxHeap maxHeap;
    // Insert elements into the max heap
    maxHeap.insert(10);
    maxHeap.insert(20);
    maxHeap.insert(5);
    maxHeap.insert(15);
    maxHeap.insert(30);

     // Display the max heap
    std::cout << "Max Heap: ";
    maxHeap.display();


     MinHeap minHeap;

    // Insert elements into the min heap
    minHeap.push(5);
    minHeap.push(10);
    minHeap.push(2);
    minHeap.push(8);
    minHeap.push(1);

    // Display the min heap
    std::cout << "Min Heap: ";
    minHeap.display();


    return 0;
}