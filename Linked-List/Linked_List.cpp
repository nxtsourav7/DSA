/**
 * author : nxtsourav7
 * created : 2024-01-28 18:54:14
**/

#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;

    // constructor
    node(int new_value) : data(new_value), next(nullptr) {};
};


class Linked_List {
    private:
    node* head;

    public:
    // contructor
    Linked_List() : head(nullptr) {};

    // insert
    void insert_at_front(int new_value) {
        // make new node with new value
        node* new_node = new node(new_value);

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
        node* new_node = new node(new_value);

        if(head==nullptr) {
            head = new_node;
            return;
        }

        // travese to last node and add there
        node* temp = head;
        while(temp->next!=nullptr) {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    // delete
    void delete_from_front() {
        node* temp = head;
        head = temp->next;
        delete temp;
    }
    void delete_from_back() {
        // empty linked list
        if(head==nullptr) return;
        
        // single node
        if(head->next==nullptr) {
            delete head;
            return;
        }

        // more than one node   
        node* temp = head;
        while(temp->next->next!=nullptr) {
            temp = temp->next;
        }
        delete (temp->next);
        temp->next = nullptr;
    }

    // print the list
    void print_list() {
        node* temp = head;
        while(temp!=nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};


int32_t main() {
    /**
     * make a object of Linked_List class 
     * a object works as a linked list 
     * in Linked_List class has 5 method
     *      1.insert_at_front
     *      2.insert_at_back
     *      3.delete_from_front
     *      4.delete_from_back
     *      5.print_list
    **/

   // Do your necessary stuff here !!!


    return 0;

}