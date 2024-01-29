/*
*	author 	: nxtsourav7
*	problem : Create five node of linked list where each node contain Name and ID
*	created : 2023/10/05 09:48:46
*/


#include<bits/stdc++.h>
using namespace std;


struct node {
    string Name;
    string ID;

    node* next = nullptr;
};


void print(node* temp) {
    while(temp!=nullptr) {
        cout << "Name : " << temp->Name << "-> ID : " << temp->ID;
        cout << "\n";
        temp = temp->next;
    }
}


int main() {
    //create nodes
    node* head = new node();
    node* second = new node();
    node* third = new node();
    node* fourth = new node();
    node* fifth = new node();

    //input data
    cin >> head->Name, cin >> head->ID;
    cin >> second->Name, cin >> second->ID;
    cin >> third->Name, cin >> third->ID;
    cin >> fourth->Name, cin >> fourth->ID;
    cin >> fifth->Name, cin >> fifth->ID;

    //connect the nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = nullptr;

    //traverse the data
    print(head);

    return 0;
}