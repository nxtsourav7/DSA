/**
 * author : nxtsourav7
 * created : 2024-01-29 10:22:56
**/

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

    int n;
    cin >> n;
    Stack input;
    while(n--) {
        int x;
        cin >> x;
        input.push(x);
    }

    Stack output;
    bool flag = false;
    while(!input.is_empty()) {
        if(input.top() & 1) {
            output.push(input.top());
            input.pop();
            flag = false;
        }
        // here got even number !!
        else {
            if(flag) {
                // doesn't effect on empty output stack
                if(output.top() & 1) input.pop();
                // remove from output stack util contiguous set stop
                else {
                    input.pop();
                    output.pop();
                }
            }
            else {
                output.push(input.top());
                input.pop();
                flag = true;
            }
        }
    }

    //print the output
    while(!output.is_empty()) {
        cout << output.top() << " ";
        output.pop();
    }
    cout << "\n";
    
    return 0;

}