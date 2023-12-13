#include<bits/stdc++.h>
#include"header.h"
using namespace std;
void node::show()
{
    node*temp;
    temp=head;
    if(head==NULL)
    {
        cout<<"no data in list"<<endl;
    }
    while(temp!=NULL)
    {
        int num=temp->data;
        cout<<hex<<temp->data<<"->";
        temp=temp->next; 
        //e_bit_check(num);
    }
    //cout<<"head is the \n"<<hex<<head->data<<endl;
}