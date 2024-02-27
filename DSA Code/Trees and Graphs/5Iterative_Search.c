//Previous was Recursive Search This one is Iterative Search 
#include<stdio.h>

#include<stdlib.h>

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createnode(int data)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;
}

int f(struct Node*root,int min,int max); //Function Definition
int isBST(struct Node* root)
{
    return f(root,INT_MIN,INT_MAX);
}
int f(struct Node*root,int min,int max)
{
    if(root==NULL)
        return 1;
    if(root->data<min || root->data>max)
        return 0;
    return f(root->left,min,root->data) && f(root->right,root->data,max);
}


//Iterative Search in BST
struct Node* search(struct Node* root,int data)
{
    while(root!=NULL)
    {
        if(root->data==data)
            return root;
        else if(data<root->data)
            root=root->left;
        else
            root=root->right;
    }
    return NULL;  //If root is NUll then this line executes;
}


int main()
{
    //Nodes Creation
    struct Node* root=createnode(50);       
    struct Node* p1=createnode(40);       
    struct Node* p2=createnode(60);       
    struct Node* p3=createnode(20);       
    struct Node* p4=createnode(45);       
    struct Node* p5=createnode(55);       
    struct Node* p6=createnode(70);       
    //Nodes Mapping
    root->left=p1;
    root->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    p2->right=p6;

    if(isBST(root))
        printf("The given Binary Tree is a BST\n");
    else
        printf("The given Binary Tree is not a BST\n");
    
    //Iterative Search
    struct Node* n=search(root,7);
    if(n!=NULL)
        printf("%d Found\n",n->data);
    else
        printf("Not Found\n");

    return 0;
}