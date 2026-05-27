#include<iostream>
using namespace std;
// starting insertion
class node{
    public:
    int data;
    node*next;
    node*pre;
    node(int value){
        data=value;
        next=NULL;
        pre=NULL;

    }
};
int main(){
node*head=NULL;
node*tail=NULL;
int arr[5]={1,2,3,4,5};
for(int i=0;i<5;i++){
    if(head==NULL){
        head=new node(arr[i]);
        tail=head;

    }
    else{
        node*temp=new node(arr[i]);
        tail->next=temp;
        head->pre=temp;
        tail=temp;
        
    }
}
if(head==NULL){
    head=new node(5);
}
else{
    node*temp=head;
   while (temp->next)
   {
    /* code */
    temp=temp->next;

}
node*tem=new node(5);
temp->next=tem;
tem->pre=temp;
}

node*p=head;
while (p)
{
    cout<<p->data;
    p=p->next;
  
    /* code */
}

return 0;
}