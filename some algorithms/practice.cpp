
// #include<iostream>
// using namespace std;

// int main(){

//     int a[2][4]={1,2,3,4,5,6,7,8};
//     cout<<*(a[1]+2) <<*(*(a+1)+2)<<2[1[a]];
//     return 0;
// }


// #include<iostream>

// using namespace std;

// int main(){
//     char* ptr ="GeeksQuiz";
//     cout<<*&*&*ptr;
//     return 0;
// }


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() {
        head = nullptr;
    }

    void insertEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;

        if (head == nullptr) {
            newNode->next = newNode; // Point to itself to create a circular list
            head = newNode;
        } else {
            newNode->next = head->next;
            head->next = newNode;
            head = newNode;
        }
    }

    void deleteAtPosition(int position) {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        Node* current = head->next;
        Node* prev = head;

        int count = 1;

        while (count < position && current->next != head) {
            prev = current;
            current = current->next;
            count++;
        }

        if (count != position) {
            cout << "Invalid position." << endl;
            return;
        }

        prev->next = current->next;

        if (current == head) {
            head = prev; // Update the head if the last node is deleted
        }

        delete current;
    }

    void display() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        Node* current = head->next;
        bool firstNode = true;

        cout << "Contents of the CLL: |";

        do {
            if (!firstNode) {
                cout << " --> ";
            }
            cout << current->data;
            current = current->next;
            firstNode = false;
        } while (current != head->next);

        cout << " |" << endl;
    }
};

int main() {
    CircularLinkedList cll;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        cll.insertEnd(value);
    }

    int position;
    cin >> position;
    cll.display();

    cll.deleteAtPosition(position);
    cll.display();

    return 0;
}
