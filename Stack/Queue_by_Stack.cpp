/*
*	author 	: nxtsourav7
*	created : 2023/10/05 09:48:46
*/


#include<bits/stdc++.h>
using namespace std;
const int INF= -1e5;

struct Node {
    int data;
    Node* next;

    // constructor
    Node(int new_data) : data(new_data), next(nullptr) {};
};


class Stack {
private:
    Node* head;
    int sz = 0;

public:
    // contructor
    Stack() : head(nullptr) {};

    int top() {
        // if it's a empty stack then return infinity value
        if(is_empty()) {
            return INF;
        }
        return (head->data);
    }

    // insert
    void push(int new_data) {
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

    
    bool is_empty() const {
        return (head==nullptr);
    }

    int size() {
        return sz;
    }
};


/**---------------Stack-----------------**/


class Queue_by_Stack {
private:
    Stack s1,s2;     

public:
    void enqueue(int new_data) {
        // move all element to s2
        while(!s1.is_empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        // insert new data to s1
        s1.push(new_data);

        // move back all element to s1
        while(!s2.is_empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    void dequeue() {
        if(!s1.is_empty()) s1.pop();
    }

    int front() {
        return s1.top();
    }

    bool is_empty() const {
        return s1.is_empty();
    }
};



int main() {
    int n;
    cin >> n;
    Queue_by_Stack q1;
    while(n--) {
        int x;
        cin >> x;
        q1.enqueue(x);
    }
    
    // print all element in stack
    while(!q1.is_empty()) {
        cout << q1.front() << " ";
        q1.dequeue();
    }
    cout << "\n";

    return 0;
}
