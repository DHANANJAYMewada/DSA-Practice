#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int value){
        data=value;
        next=NULL;

    }
};
node*detectloop(node*head){
    node*slow=head;
    node*fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow =slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return slow;
        }

    }

}

int main(){
    node*head=new node(1);
    head->next=new node(2);
    head->next->next=new node(1);
    head->next->next->next=head->next;
    node*loop=detectloop(head);
    if(loop!=NULL){
        cout<<"Loop detected at node with value: "<<loop->data<<endl;
    }

return 0;
}