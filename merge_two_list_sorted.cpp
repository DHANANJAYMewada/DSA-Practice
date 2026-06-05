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
node*merge(node*head1,node*head2){
    node*dummy=new node(-1);
    node*curr=dummy;
    while(head1 &&head2){
        if(head1->data<head2->data){
            curr->next=head1;
            head1=head1->next;
            curr=curr->next;

        }
        else{
            curr->next=head2;
            head2=head2->next;
            curr=curr->next;

        }

    }
    if(head1){
        curr->next=head1;
    }
    if(head2){
        curr->next=head2;
    }
    return dummy->next;


}

int main(){
    node*head1=new node(1);
    head1->next=new node(2);
    head1->next->next=new node(3);
    node*head2=new node(1);
    head2->next=new node(1);
    head2->next->next=new node(4);
    node*ans=merge(head1,head2);
    node*curr=ans;
    while(curr){
        cout<<curr->data<<" ";
        curr=curr->next;
    }

return 0;
}