// // remove loop in linked list
// #include<iostream>
// using namespace std;
// #include<vector>
// class node{
//     public:
//     int data;
//     node*next;
//     node(int value){
//         data=value;
//         next=NULL;

//     }

// };
// node*detectloop(node*head){
//     node*slow=head;
//     node*fast=head;
//     while(fast!=NULL&&fast->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//         if(slow==fast){
//             fast->next=NULL;
//             return slow;

//         }

//     }
// return NULL;

// }
// int main(){

//     node*head=new node(1);
//     head->next=new node(2);
//     head->next->next=new node(1);
//     head->next->next->next=head->next;
//     node*loop=detectloop(head);
//     if(loop!=NULL){
//         cout<<"Loop detected at node with value: "<<loop->data<<endl;
//         cout<<"Loop removed successfully."<<endl;
//     }
// }


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
node*remove(node*head){
    node*slow=head;
    node*fast=head;
    while (fast!=NULL&& fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        /* code */
    
    // slow=head;
    if(slow==fast){
        // slow=slow->next;
        fast->next=NULL;
        return slow;
    }
   

    }
    return NULL;
    
}
int main(){
        node*head=new node(1);
    head->next=new node(2);
    head->next->next=new node(1);
    head->next->next->next=head->next;
    node*loop=remove(head);
    if(loop!=NULL){
        cout<<"Loop detected at node with value: "<<loop->data<<endl;
        cout<<"Loop removed successfully."<<endl;
    }



return 0;
}