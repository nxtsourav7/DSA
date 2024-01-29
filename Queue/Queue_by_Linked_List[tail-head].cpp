/**
 * author : nxtsourav7
 * created : 2024-01-29 22:29:57
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


int32_t main() {
    /**
     * make a object of Queue class 
     * a object works as queue
     * in Queue class has 5 method
     *      1.enqueue() to insert an element into the queue
     *      2.dequeue() to remove an element from the queue
     *      3.front() Returns the first element of the queue.
     *      4.back() Returns the last element of the queue.
     *      5.is_empty() returns true if queue is empty else false.
     *      6.size() returns the size of queue.
     * all operations time complexity : O(1) {constant};
    **/

   // Do your necessary stuff here !!!



    return 0;
}