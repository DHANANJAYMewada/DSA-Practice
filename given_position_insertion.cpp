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
node*givenposition(int arr[],int index,int size,node*back){
    if(index==size){
        return NULL;

    }
    else{
        node*temp=new node(arr[index]);
        temp->next=givenposition(arr,index+1,size,temp);
        temp->pre=back;
        return temp;

    }
}

int main(){
    node*head=NULL;
    int arr[5]={1,2,3,4,5};
    head=givenposition(arr,0,5,NULL);
    int position=5;
    if(position==0){
         node*temp=new node(10);
            temp->next=head;
            head->pre=temp;
            head=temp;






    }
    else{
        // insert at and
       node*curr=head;
         while (--position){
       
        curr=curr->next;
       }
         if(curr->next==NULL){
            node*temp=new node(10);
            curr->next=temp;
            temp->pre=curr;
         }
         else{
             node*temp=new node(10);
             temp->next=curr->next;
             temp->pre=curr;
             curr->next->pre=temp;
             curr->next=temp;

         }


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