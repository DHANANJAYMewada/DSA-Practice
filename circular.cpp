#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int value) {
        data = value;
        next = NULL;
    }
};

void makeCircular(node* head) {
    node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = head;   // last node points to head
}

void display(node* head) {
    node* temp = head;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while(temp != head);

    cout << endl;
}

int main() {
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);

    makeCircular(head);

    display(head);

    return 0;
}