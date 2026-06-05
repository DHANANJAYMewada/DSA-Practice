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
node*mid(node*head){
    int count=0;
    node*temp=head;
    while(temp){
        count++;
        temp=temp->next;

    }
    temp=head;
    for(int i=0;i<count/2;i++){
        temp=temp->next;
    }
    return temp;
}

int main(){
    node*head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    head->next->next->next->next=new node(5);
    node*ans=mid(head);
    cout<<ans->data<<" ";

return 0;
}