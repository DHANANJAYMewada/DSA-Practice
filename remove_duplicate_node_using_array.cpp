#include<iostream>
using namespace std;
#include<vector>
class node{
    public:
    int data;
    node*next;
    node(int value){
        data=value;
        next=NULL;
    }
    
};
node*remove_duplicate_node(int arr[],int index,int size){
    if(index==size){
        return NULL;
    }
    else{
        node*temp=new node(arr[index]);
        temp->next=remove_duplicate_node(arr,index+1,size);
        return temp;

    }
}
int main(){
     node*head=NULL;
     int arr[5]={1,1,2,2,5};
     head=remove_duplicate_node(arr,0,5);
     vector<int>ans;
   ans.push_back(head->data);
   node*curr=head->next;
   while (curr)
   {
    if(ans[ans.size()-1]!=curr->data){
        ans.push_back(curr->data);

    }
    curr=curr->next;

    /* code */
   }
   curr=head;
   int index=0;
   while (index<ans.size())
   {
    curr->data=ans[index];
    index++;
    curr=curr->next;
   


    /* code */
   }
  

   int size=ans.size()-1;
   curr=head;
   while(size--){
    curr=curr->next;
 
    
   }

    curr->next=NULL;
   
   node*temp=head;
   while (temp)
    {
     cout<<temp->data;
     temp=temp->next;
    
     /* code */
    }
   


   
     


return 0;
}