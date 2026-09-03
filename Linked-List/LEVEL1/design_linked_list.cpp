/*Input
["MyLinkedList", "addAtHead", "addAtTail", "addAtIndex", "get", "deleteAtIndex", "get"]
[[], [1], [3], [1, 2], [1], [1], [1]]
Output
[null, null, null, null, 2, null, 3] */

#include<bits/stdc++.h>
using namespace std;

class myLinkedList{
    public:

        struct Node{
            int val;
            Node* next;

            Node(int val){
                this->val = val;
                next = nullptr;
            }
        };
        
        Node* head = nullptr;
    void addAtHead(int val){
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        return;
    }

    void addAtTail(int val){

        if(head == nullptr){
             Node* newNode = new Node(val);
             head = newNode;
             return;
        }

        Node* current = head;
        while(current->next != nullptr){
            current = current->next;
        }
        Node* newNode = new Node(val);
        current->next = newNode;

        return;
    }

    void addAtIndex(int index, int val){

        Node* current = head;
        Node* newNode = new Node(val);
        if(index == 0){
            newNode->next = head;
            head = newNode;
            return;
        }

        for(int i = 0; i < index - 1; i++){
            current = current->next;
        }
        newNode ->next = current->next;
        current->next = newNode;
        return;
    }

    int get(int index){
        Node* current = head;
        for(int i = 0;i < index; i++){

            if(current == nullptr){
                return -1;
            }
            current = current->next;

        }

        if(current == nullptr){
                return -1;
            }

        return current->val;
    }

    void deleteAtIndex(int index){

        Node* current = head;
        
        if(index == 0){
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        for(int i = 0; i < index - 1; i++){
            current = current->next;
        }
        Node* temp = current->next;
        current ->next = current->next->next;
        delete temp;
        return;

    }

   int Head(){
        Node* current = head;
        while(current != nullptr){
            cout << current->val << endl;
            current = current->next;
        }
        return 0;
    }
};



int main(){
    myLinkedList object;

    object.addAtHead(1);
    object.addAtTail(3);
    object.addAtIndex(1,2);
    cout << object.get(2) << endl;
    cout<< object.Head() << endl;
   return 0;
    
}