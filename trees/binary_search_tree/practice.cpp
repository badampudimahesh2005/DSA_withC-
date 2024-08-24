// #include <iostream>
// #include <string>
// #include <vector>

// class Person {
// protected:
//     std::string first_name;
//     std::string last_name;
//     int id;

// public:
//     Person(const std::string& first, const std::string& last, int student_id)
//         : first_name(first), last_name(last), id(student_id) {}

//     void print_info() {
//         std::cout << "Name: " << first_name << " " << last_name << std::endl;
//         std::cout << "ID: " << id << std::endl;
//     }
// };

// class Student : public Person {
// private:
//     std::vector<int> test_scores;

// public:
//     Student(const std::string& first, const std::string& last, int student_id, int num_scores, const std::vector<int>& scores)
//         : Person(first, last, student_id), test_scores(scores) {}

//     char calculate_grade() {
//         if (test_scores.empty())
//             return 'I';  // Incomplete

//         int total = 0;
//         for (int score : test_scores) {
//             total += score;
//         }
//         int average = total / test_scores.size();

//         if (average >= 90) {
//             return 'E';  // Excellent
//         } else if (average >= 80) {
//             return 'A';  // Very Good
//         } else if (average >= 70) {
//             return 'P';  // Pass
//         } else if (average >= 55) {
//             return 'D';  // Average
//         } else {
//             return 'T';  // Terrible
//         }
//     }

//     void print_student_info() {
//         print_info(); // Calls the base class method to print name and ID.
//         std::cout << "Grade: " << calculate_grade() << std::endl;
//     }
// };

// int main() {
//     std::string first_name, last_name;
//     int id, num_scores;

//     // Input
//     std::cin >> first_name >> last_name >> id >> num_scores;
//     std::vector<int> scores(num_scores);
//     for (int i = 0; i < num_scores; i++) {
//         std::cin >> scores[i];
//     }

//     // Create a Student object and print the information
//     Student student(first_name, last_name, id, num_scores, scores);
//     student.print_student_info();

//     return 0;
// }


#include<bits/stdc++.h>

using namespace std;

class bstnode{
  public:
  int data;
  bstnode* left;
  bstnode* right;
 bstnode(int val){
  data=val;
  left=NULL;
  right=NULL;

 }

};


bstnode* insertnode(bstnode* root,int d){
  if(!root){
    return new bstnode(d);
  }
  if(d<root->data){
    root->left=insertnode(root->left,d);
  }else{
  root->right=insertnode(root->right,d);
  }

  return root;
}


bstnode* searchInBst(bstnode* root,int key){
  if(!root){
    return NULL;
  }

  if(root->data==key){
    return root;
  }
  if(key<root->data){
    return searchInBst(root->left,key);
  }
  return searchInBst(root->right,key);
}

void inorder(bstnode* root){
  if(!root){
    return;
  }

  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);

} 

void preorder(bstnode* root){
  if(!root){
    return;
  }
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);


}

void postorder(bstnode* root){
  if(!root){
    return;
  }

  postorder(root->left);
  postorder(root->right); 
  cout<<root->data<<" ";
}

int main(){
    bstnode* root=NULL;
    // root=insertnode(root,4);
    // insertnode(root,2);
    // insertnode(root,5);
    // insertnode(root,1);
    // insertnode(root,3);
    // insertnode(root,6);


root = insertnode(root, 20);
    insertnode(root, 8);
    insertnode(root, 22);
    insertnode(root, 4);
    insertnode(root, 12);
    insertnode(root, 10);
    insertnode(root, 14);

    if(searchInBst(root,2)==NULL){
        cout<<"key is not in tree"<<endl;
    }else{
        cout<<"key is present in tree"<<endl;
    }
   

   inorder(root);
   cout<<endl;

  //  deleteinBSt(root,8);

  //  inorder(root);


    return 0;
}