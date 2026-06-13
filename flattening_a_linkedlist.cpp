#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node*bottom;
    node(int value){
        data=value;
        next=NULL;
        bottom=NULL;

    }
};
node* merge(node* head1, node* head2)
{
    node* head = new node(0);
    node* tail = head;

    while(head1 && head2)
    {
        if(head1->data < head2->data)
        {
            tail->bottom = head1;
            head1 = head1->bottom;
        }
        else
        {
            tail->bottom = head2;
            head2 = head2->bottom;
        }

        tail = tail->bottom;
    }

    if(head1)
        tail->bottom = head1;
    else
        tail->bottom = head2;

    return head->bottom;
}

int main(){
    node*head1=new node(5);
    head1->bottom=new node(7);
    head1->bottom->bottom=new node(10);
    node*head2=new node(3);
    head2->bottom=new node(4);
    head2->bottom->bottom=new node(20);
    node*head=merge(head1,head2);
    while(head){
        cout<<head->data<<" ";
        head=head->bottom;
    }


return 0;
}