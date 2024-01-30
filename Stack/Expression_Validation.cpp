/*
*	author 	: nxtsourav7
*	created : 2023-12-27 23:58:14
*/

#include<bits/stdc++.h>
using namespace std;


struct Node {
    char data;
    Node* next;

    // constructor
    Node(char new_data) : data(new_data), next(nullptr) {};
};


class Stack {
private:
    Node* head;
    int sz = 0;

public:
    // contructor
    Stack() : head(nullptr) {};

    char top() {
        return (head->data);
    }

    // insert
    void push(char new_data) {
        // counting stack size
        sz++;

        // make new Node with new value
        Node* new_node = new Node(new_data);

        // when it's a empty stack
        if(is_empty()) {
            head = new_node;
            return;
        }
        
        // otherwise
        new_node->next = head;
        head = new_node;
    }

    // delete
    void pop() {
        //counting size
        sz--;
        sz = max(0,sz);

        if(is_empty()) return;

        Node* temp = head;
        head = temp->next;
        delete temp;
    }

    
    bool is_empty() {
        return (head==nullptr);
    }

    int size() {
        return sz;
    }
};


int32_t main() {
    /**
     * make a object of Stack class 
     * a object works as stack
     * in Stack class has 5 method
     *      1.push() to insert an element into the stack
     *      2.pop() to remove an element from the stack
     *      3.top() Returns the top element of the stack.
     *      4.isEmpty() returns true if stack is empty else false.
     *      5.size() returns the size of stack.
     * all operations time complexity : O(1) {constant};
    **/

   // Do your necessary stuff here !!!

    string s;
    cin >> s;

    Stack bracket;
    for(int i=0; i<(int)s.size(); ++i) {
        if(bracket.is_empty()) {
            bracket.push(s[i]);
        }
        else if((s[i]==')'&&bracket.top()=='(') || (s[i]=='}'&&bracket.top()=='{') || (s[i]==']'&&bracket.top()=='[')) {
            bracket.pop();
        }
        else {
            bracket.push(s[i]);
        }
    }
    
    cout << (bracket.is_empty() ? "Balanced !\n" : "imBalanced !\n");

    return 0;
}