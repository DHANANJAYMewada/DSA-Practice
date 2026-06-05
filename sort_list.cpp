// sort a list which contains 0,1,2
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
node*sort(node*head){
    int count0=0;
    int count1=0;
    int count2=0;
    node*curr=head;
    while(curr){
        if(curr->data==0){
            count0++;
        }
        else if(curr->data==1){
            count1++;
        }
        else{
            count2++;
        }
        curr=curr->next;

    }
    curr=head;
    while(count0--){
        curr->data=0;
        curr=curr->next;

    }
     while(count1--){
        curr->data=1;
        curr=curr->next;

    }
     while(count2--){
        curr->data=2;
        curr=curr->next;

    }
    return head;
}
int main(){
    node*head=new node(1);
    head->next=new node(2);
    head->next->next=new node(0);
    head->next->next->next=new node(1);
    head->next->next->next->next=new node(2);
    head=sort(head);
    node*curr=head;
    while(curr){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    return 0;
}