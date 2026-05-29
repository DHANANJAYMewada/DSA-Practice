#include<iostream>
using namespace std;
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
node*delete_last_node(int arr[],int index,int size,node*back){
    if(index==size){
        return NULL;

    }
    else{
        node*temp=new node(arr[index]);
        temp->pre=back;
        temp->next=delete_last_node(arr,index+1,size,temp);
        return temp;

    }
}
int main(){
    node*head=NULL;
    int arr[5]={1,2,3,4,5};
    head=delete_last_node(arr,0,5,NULL);
    int position=2;
    node*curr=head;
    while (--position)
    {
        curr=curr->next;
        /* code */
    }
    if(curr->next==NULL){
        curr->pre->next=NULL;
        delete curr;
    }
    else{
        curr->pre->next=curr->next;
        curr->next->pre=curr->pre;
        delete curr;

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