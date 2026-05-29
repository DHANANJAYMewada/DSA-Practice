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
        temp->next=delete_last_node(arr,index+1,size,temp);
        temp->pre=back;
        return temp;

    }

    }

int main(){
    node*head=NULL;
    int arr[5]={1,2,3,4,5};
    head=delete_last_node(arr,0,5,NULL);
    node*tem=head;
    while(tem->next){

        tem=tem->next;
      
        }
tem->pre->next=NULL;
delete tem;


    node*p=head;
    while (p)
    {
        cout<<p->data;
        p=p->next;
  
        /* code */
    }


return 0;
}