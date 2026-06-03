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
    node*curr=head->next;
    node*pre=head;
    while(curr){
        if(curr->data==pre->data){
            pre->next=curr->next;
            delete curr;
            curr=pre->next;

        }
        else{
            pre=pre->next;
            curr=curr->next;

        }

     

        }
    return head;


    }
    


int main(){
    node*head=new node(1);
    head->next=new node(1);
    head->next->next=new node(2);
    head->next->next->next=new node(2);
    head->next->next->next->next=new node(5);
    head=reverse(head);
    node*curr=head;
    while(curr){
        cout<<curr->data<<" ";
        curr=curr->next;
    }

return 0;
}