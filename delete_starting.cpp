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
node*delete_starting(int arr[],int index,int size,node*back){
    if(index==size){
        return NULL;

    }
    else{
        node*temp=new node(arr[index]);
        temp->pre=back;
        temp->next=delete_starting(arr,index+1,size,temp);
        return temp;

    }
}
int main(){
    node*head=NULL;
    int arr[5]={1,2,3,4,5};
    head=delete_starting(arr,0,5,NULL);
    head=head->next;
    head->pre=NULL;
    node*p=head;
    while (p)
    {
        cout<<p->data;
        p=p->next;
  
        /* code */
    }

return 0;
}