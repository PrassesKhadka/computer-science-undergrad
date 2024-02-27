//Searching in a BST(Search operation)
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
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;
}


//          50
//      /       \
//     40       60
//    /   \    /   \
//   20   45  55   70

struct Node* searching(struct Node* root,int data)
{
    if(root==NULL)  //Base Case
        return root;


    if(data==root->data)
        return root;


    else if(data<root->data)
        searching(root->left,data);


    else
        searching(root->right,data);

}

int main()
{
    struct Node* root=createnode(50);       
    struct Node* p1=createnode(40);       
    struct Node* p2=createnode(60);       
    struct Node* p3=createnode(20);       
    struct Node* p4=createnode(45);       
    struct Node* p5=createnode(55);       
    struct Node* p6=createnode(70);       

    root->left=p1;
    root->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    p2->right=p6;

    struct Node* n=searching(root,70);

    if(n!=NULL)
        printf("%d Found",n->data);
    else
        printf("Not Found");

    return 0;
}