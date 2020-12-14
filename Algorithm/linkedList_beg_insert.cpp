#include<bits/stdc++.h>

using namespace std;
// dynamic memory allocation using link list
struct node
{
    int data;
    node*link;


};

node* head;
void insertt(int x)
{
    node* temp=new node();
    temp->data=x;
    temp->link=head;
    head=temp;

}

void print()
{
    node* temp=head;
    cout<<"new list is : ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;

    }
    cout<<endl;


}


int main()
{
    head=NULL;
    int n,x;
    cout<<"Enter the total number :"<<endl;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        insertt(x);
        print();
    }
    }
