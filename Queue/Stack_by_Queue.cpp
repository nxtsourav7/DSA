/**
 * author : nxtsourav7
 * created : 2024-01-29 23:14:05
**/

#include<bits/stdc++.h>
using namespace std;
const int INF= -1e5;
/**
 * push - tail
 * pop - head
*/

struct Node {
    int data;
    Node* next;

    // constructor
    Node(int new_data) : data(new_data), next(nullptr) {};
};


class Queue {
private:
    Node* head;
    Node* tail;
    int sz = 0;

public:
    // constructor
    Queue() : head(nullptr), tail(nullptr) {};

    void enqueue(int new_data) {
        // counting queue size
        sz++;

        // create new Node
        Node* new_node = new Node(new_data);

        if(is_empty()) {
            head = tail = new_node; 
        }
        else {
            tail->next = new_node;
            tail = new_node;
        }
    }

    void dequeue() {
        // counting size
        sz--;
        sz = max(0,sz);

        if(is_empty()) return;

        Node* temp = head;
        head = temp->next;
        delete temp;
    }

    int front() {
        if(is_empty()) {
            return INF; 
        }
        return (head->data);
    }

    int back() {
        if(is_empty()) {
            return INF;
        }
        return (tail->data);
    }

    bool is_empty() const {
        return (head==nullptr);
    }

    int size() {
        return sz;
    }
};

/**---------------Queue-----------------**/

class Stack_by_Queue {
private:
    Queue q1;

public:
    void push(int new_data) {
        int k = q1.size();
        q1.enqueue(new_data);

        // one by one element going to the back
        for(int i=0; i<k; ++i) {
            int first = q1.front();
            q1.dequeue();
            q1.enqueue(first);
        }
    }

    void pop() {
        if(!q1.is_empty()) q1.dequeue();
    }

    int top() {
        return q1.front();
    }

    bool is_empty() const {
        return q1.is_empty();
    }
};


int32_t main() {
    int n;
    cin >> n;
    Stack_by_Queue s1;
    while(n--) {
        int x;
        cin >> x;
        s1.push(x);
    }
    
    // print all element in stack
    while(!s1.is_empty()) {
        cout << s1.top() << " ";
        s1.pop();
    }
    cout << "\n";

    return 0;
}