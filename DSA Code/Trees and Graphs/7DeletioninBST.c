//Deletion in BST and insertion as such
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
    ptr->left=ptr->right=NULL;
    return ptr;
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
struct Node* insertion(struct Node* root,int data)
{
    if(root==NULL)
    {
        return createnode(data);
    }
   
    if(data>root->data)
        root->right=insertion(root->right,data);
    else
        root->left=insertion(root->left,data);
    return root;  //Returns the original node
}
struct Node* ipredecessor(struct Node* root)
{
    root=root->left;
    while(root->right!=NULL)
        root=root->right;
    return root;
}
struct Node* deletion(struct Node* root,int data)
{
    struct Node* iPre=NULL;
    if(root==NULL)
        return root;
    if(root->data==data)
    {
        //if 0 child
        if(root->left==NULL && root->right==NULL)
        {
            free(root);
            return NULL;
        }
        //if 1 child
        if(root->left!=NULL && root->right==NULL)
        {
            struct Node* temp=root->left;
            free(root);
            return temp;
        }
        if(root->left==NULL && root->right!=NULL)
        {
            struct Node* temp=root->right;
            free(root);
            return temp;
        }
        //if 2 child
        if(root->right!=NULL && root->left!=NULL)
        {
            iPre=ipredecessor(root);
            root->data=iPre->data;
            root->left=deletion(root->left,iPre->data);
            return root;
        }
    }
    if(root->data!=data)
    {
        if(data>root->data)
            root->right=deletion(root->right,data);
        else
            root->left=deletion(root->left,data);
    }
}

int main()
{
    // struct Node* root=NULL;
    // root=insertion(root,0);
    // insertion(root,1);
    // insertion(root,2);
    // insertion(root,6);
    // insertion(root,7);
    // insertion(root,8);
    // insertion(root,4);
    // insertion(root,5);

    
    //           3
    //        /     \
    //       1        5
    //      /
    //     0
    struct Node* root=createnode(3);
    struct Node* p1=createnode(1);
    struct Node* p2=createnode(5);
    struct Node* p3=createnode(0);
    root->left=p1;
    root->right=p2;
    p1->left=p3;
    inorder(root);
    printf("\n");
    deletion(root,3);
    inorder(root);
    return 0;
}