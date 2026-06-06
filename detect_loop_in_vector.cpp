#include<iostream>
#include<vector>
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
int check(vector<node*>& visited,node*curr){
    for(int i=0;i<visited.size();i++){
        if(visited[i]==curr){
            return 1;
        }
    }
    return 0;
}
int main(){
    node*head=NULL;
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(head==NULL){
            head=new node(arr[i]);

        }
        else{
            node*temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=new node(arr[i]);

        }
        

    }

    node* tem = head;

    while(tem->next != NULL) {
        tem = tem->next;
    }

    tem->next = head;  
     // last node points to head
node* te = head;

do {
    cout << te->data << " ";
    te = te->next;
} while(te != head);

node*curr=head;
vector<node*> visited;
while(curr!=NULL){
    if(check(visited,curr)){\
        cout << " Cycle";
        return 1;


    }
    visited.push_back(curr);
    curr=curr->next;
  
}
cout << "No Cycle";
  return 0;



    



return 0;
}