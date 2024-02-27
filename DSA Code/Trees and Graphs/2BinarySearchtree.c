//Binary Search Tree:Inorder traversal of BST gives us ascending sorted values
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
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}

void inordertraversal(struct Node *root)
{
    if(root!=NULL)
    {
        inordertraversal(root->left);
        printf("%d\t",root->data);
        inordertraversal(root->right);
    }
}

//           5
//         /   \
//        3     6
//       / \  
//      1   4

int main()
{
    struct Node* root=createnode(5);
    struct Node* p1=createnode(3);
    struct Node* p2=createnode(6);
    struct Node* p3=createnode(1);
    struct Node* p4=createnode(4);

    root->left=p1;
    root->right=p2;
    p1->left=p3;
    p1->right=p4;
    inordertraversal(root);

    return 0;
}