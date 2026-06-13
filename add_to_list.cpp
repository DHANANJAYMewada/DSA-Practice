// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node*next;
//     node(int value){
//         data=value;
//         next=NULL;

//     }
// };





// node*reverse(node*curr,node*pre){
    
// if(curr==NULL)
// return pre;
// node*forward=curr->next;
// curr->next=pre;
// return reverse(forward,curr);






// }
// struct node*add(struct node*first,struct node*second){
//     first=reverse(first,NULL);
//     second=reverse(second,NULL);
//     struct node*result=NULL;
//     int carry=0;
//     while (first!=NULL||second!=NULL||carry!=0)
//     {
//         int sum=carry;
//         if(first!=NULL){
//             sum+=first->data;
//             first=first->next;

//         }
//         if(second!=NULL){
//             sum+=second->data;
//             second=second->next;

//         }
//         carry=sum/10;
//         struct node*newnode=new node(sum%10);
//         newnode->next=result;
//         result=newnode;

        
//     }
//     return result;
// }



// int main(){
//     struct node*first=new node(3);
//     first->next=new node(4);
//     first->next->next=new node(2);

//     struct node*second=new node(4);
//     second->next=new node(6);
//     second->next->next=new node(5);

//     struct node*result=add(first,second);
//     while (result!=NULL)
//     {
//         cout<<result->data<<" ";
//         result=result->next;
//         /* code */
//     }




   


    

// return 0;
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
 node*revese( node*curr, node*pre)
{
    if(curr==NULL)
    return pre;
    node*front=curr->next;
    curr->next=pre;
    return revese(front,curr);

    /* data */
}
struct node*add(struct node*first,struct node*second)
{
    first =revese(first ,NULL);
    second=revese(second,NULL);
    /* data */
    struct node*result=NULL;
    int carry=0;
    while (first!=NULL||second!=NULL||carry!=0)
    {
        int sum=carry;
        if(first!=NULL){
            sum+=first->data;
            first=first->next;

        }
        if(second!=NULL){
            sum+=second->data;
            second=second->next;

        }
        carry=sum/10;
        struct node*newnode=new node(sum%10);
        newnode->next=result;
        result=newnode;

        
    }
    return result;
}



int main(){
    struct node*first=new node(3);
    first->next=new node(4);
    first->next->next=new node(2);

    struct node*second=new node(4);
    second->next=new node(6);
    second->next->next=new node(5);

    struct node*result=add(first,second);
    while (result!=NULL)
    {
        cout<<result->data<<" ";
        result=result->next;
        /* code */
    }




   


    

return 0;
}
