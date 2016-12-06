#include <queue>

/*
Node is defined as

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value)
{
    if(root == NULL) {
        root = new node;
        root->data = value;
        root->left = root->right = NULL;
        return root;
    }/*

    queue<node*> q;
    node* temp = root;

    while(1) {

        if(temp->left == NULL) {
            temp->left = new node;
            temp->left->data = value;
            temp->left->left = temp->left->right = NULL;
            break;
        }
        else if(temp->right == NULL) {
            temp->right = new node;
            temp->right->data = value;
            temp->right->left = temp->right->right = NULL;
            break;
        }
        q.push(temp->left);
        q.push(temp->right);

        temp = q.front();
        q.pop();
    }*/

//recursion way
    else if(root->data > value) root->left = insert(root->left, value);
    else if(root->data <= value) root->right = insert(root->right, value);

    return root;
}
