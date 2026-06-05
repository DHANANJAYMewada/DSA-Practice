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
node*reverse(node*head){
    node*pre=NULL;
    node*curr=head;
    while(curr){
        node*temp=curr->next;
        curr->next=pre;
        pre=curr;
        curr=temp;
        
    }
    return pre;
}
int main(){
    node*head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    head=reverse(head);
    node*curr=head;
    while(curr){
        cout<<curr->data<<" ";
        curr=curr->next;
    }

return 0;
}