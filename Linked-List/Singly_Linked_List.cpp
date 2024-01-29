/**
 * author : nxtsourav7
 * created : 2024-01-28 18:54:14
**/

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    // constructor
    Node(int new_value) : data(new_value), next(nullptr) {};
};


class Singly_Linked_List {
    private:
    Node* head;

    public:
    // contructor
    Singly_Linked_List() : head(nullptr) {};

    // insert
    void insert_at_front(int new_value) {
        // make new Node with new value
        Node* new_node = new Node(new_value);

        // when it's a empty linked list
        if(head==nullptr) {
            head = new_node;
            return;
        }
        
        // otherwise
        new_node->next = head;
        head = new_node;
    }
    void insert_at_back(int new_value) {
        Node* new_node = new Node(new_value);

        if(head==nullptr) {
            head = new_node;
            return;
        }

        // travese to last Node and add there
        Node* temp = head;
        while(temp->next!=nullptr) {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    // delete
    void delete_from_front() {
        if(head==nullptr) return;
        
        Node* temp = head;
        head = temp->next;
        delete temp;
    }
    void delete_from_back() {
        // empty linked list
        if(head==nullptr) return;
        
        // single Node
        if(head->next==nullptr) {
            delete head;
            return;
        }

        // more than one Node   
        Node* temp = head;
        while(temp->next->next!=nullptr) {
            temp = temp->next;
        }
        delete (temp->next);
        temp->next = nullptr;
    }

    // print the list
    void print_list() {
        Node* temp = head;
        while(temp!=nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};


int32_t main() {
    /**
     * make a object of Singly_Linked_List class 
     * a object works as a singly linked list 
     * in Singly_Linked_List class has 5 method
     *      1.insert_at_front
     *      2.insert_at_back
     *      3.delete_from_front
     *      4.delete_from_back
     *      5.print_list
    **/

   // Do your necessary stuff here !!!


    return 0;

}