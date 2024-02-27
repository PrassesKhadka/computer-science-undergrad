//Whether a tree is BST or not
//      20              //This binary tree is not a BST
//    /   \
//   8     30
//        /   \
//       18   35
#include<stdio.h>

#include<stdlib.h>
#include<limits.h>

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode()
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}


int f(struct Node *root,int min,int max); //Fuction definition to avoid implicit declaration errot
int isBST(struct Node* root)
{
    return f(root,INT_MIN,INT_MAX);  
}
int f(struct Node *root,int min,int max)
{
    if(root==NULL)
        return 1;
    if(root->data<min || root->data>max)
        return 0;
    return (f(root->left,min,root->data) && f(root->right,root->data,max));
}



int main()
{
    struct Node* root=createNode();
    struct Node* p1=createNode();
    struct Node* p2=createNode();
    struct Node* p3=createNode();
    struct Node* p4=createNode();
    root->data=20;
    root->left=p1;
    root->right=p2;
    p1->data=8;
    p2->data=30;
    p2->left=p3;
    p2->right=p4;
    p3->data=18;
    p4->data=35;
    printf("%d",isBST(root));
    return 0;
}