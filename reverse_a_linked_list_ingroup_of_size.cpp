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
struct node*reverse(struct node*head,int k)
{
    node*first=new node(0);
    first->next=head;
    head=first;
    while (first->next)
    {
        int x=k;
        node*second=first->next;
        node*pre=first;
        node*curr=first->next;
        while (x&&curr)
        {
            node*front=curr->next;
            curr->next=pre;
            pre=curr;
            curr=front;
            x--;

            /* code */
        }
        first->next=pre;
        second->next=curr;
        first=second;



        
    }

    first=head;
    head=head->next;
    delete first;
    return head;

    
    /* data */
};


int main(){
    int k=4;

    struct node*head=new node(2);
    head->next=new node(3);
    head->next->next=new node(4);
    head->next->next->next=new node(6);
      head->next->next->next->next=new node(8);
        head->next->next->next->next->next=new node(7);
          head->next->next->next->next->next->next=new node(5);
      head->next->next->next->next->next->next->next=new node(5);
  head->next->next->next->next->next->next->next->next=new node(4);


  head=reverse(head,k);
while (head)

{
    cout<<head->data;
    head=head->next;
    /* code */
}


return 0;
}