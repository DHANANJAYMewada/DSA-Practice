#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int dat){
        data=dat;
        next=NULL;
    }
};
node*intersection(node*head1,node*head2){
    node*curr1=head1;
    node*curr2=head2;
    int count1=0;
    int count2=0;
    while (curr1)
    {
        count1++;
        curr1=curr1->next;

        /* code */
    }
   
    while (curr2)
    {
        count2++;
        curr2=curr2->next;
        /* code */
    }
   curr1=head1;
   curr2=head2;

    while (count1>count2)
    {
        curr1=curr1->next;
        count1--;
        /* code */
    }
    while (count2>count1)
    {
        curr2=curr2->next;
        count2--;
        /* code */
    }
while (curr1!=curr2)
{
    curr1=curr1->next;
    curr2=curr2->next;
    /* code */
}


    return curr1;
    
    
}
int main(){
node*head1=new node(1);
head1->next=new node(2);
head1->next->next=new node(3);
head1->next->next->next=new node(4);
head1->next->next->next->next=new node(5);
head1->next->next->next->next->next=new node(6);
head1->next->next->next->next->next->next=new node(7);
node*com=new node(5);
com->next=new node(6);
com->next->next=new node(7);

head1->next->next->next->next=com;
node*head2=new node(8);
head2->next=new node(9);

head2->next->next=com;
node*ans=intersection(head1,head2);
if(ans)
cout<<"ins"<<ans->data;
else
cout<<"no instersection";


return 0;
}