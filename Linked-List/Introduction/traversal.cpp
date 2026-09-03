#include<bits/stdc++.h>
using namespace std;


class Node {
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    head -> next = second;
    second -> next = third;

    Node* current = head;

    while(current != nullptr){
        cout << current -> data << " ";
        current = current -> next;
    }

    Node* newNode = new Node(40);
    current -> next = newNode; 
    

     while(current ->next != nullptr){
        cout << current -> data << " ";
        current = current -> next;
    }
    cout << head;
    return 0;
}