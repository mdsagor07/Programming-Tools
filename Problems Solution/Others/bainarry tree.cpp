#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node*left;
    node*right;
};
node* root=NULL;
void preorder(node*root)
{
    if(root==NULL)return;
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);

}
void add(int n)
{
    node*temp=new node;
    temp->data=n;
    temp->left=NULL;
    temp->right==NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        node*temp=root;
        while(1)
        {
            if(temp->data>n)
            {
                if(temp->left==NULL)
                {
                    temp->left=temp;
                    break;
                }
                else{
                        temp=temp->right;
                        }
            }
        }
    }
}

int main()
{
    add(50);
    add(62);
    add(30);
    add(77);
    add(55);
    add(72);
    add(99);
    add(65);
    add(33);
    add(66);
    add(95);

    preorder(root);
}
