//Insertion in BST
#include<stdio.h>

#include<stdlib.h>

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;
}

void insertion(struct Node* root,int data)
{
    struct Node* prev;
    while(root!=NULL)
    {
        prev=root;
        if(root->data==data)
        {
            printf("Value already in the BST.Cannot add\n");
            return;
        }
        else if(data<root->data)
            root=root->left;
        else
            root=root->right;
    }
    struct Node* new=createNode(data);
    if(data<prev->data)
        prev->left=new;
    else
        prev->right=new;
}
void inorder(struct Node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
}
int main()
{
    struct Node* root=createNode(5);
    struct Node* p1=createNode(3);
    struct Node* p2=createNode(6);
    struct Node* p3=createNode(1);
    struct Node* p4=createNode(4);
    root->left=p1;
    root->right=p2;
    p1->left=p3;
    p1->right=p4;
    printf("Inorder Traversal is:\t");
    inorder(root);
    insertion(root,2);
    insertion(root,10);
    printf("\n");
    printf("Inorder Traversal is:\t");
    inorder(root);
    return 0;
}