#include <queue>
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void LevelOrder(node * root) {
    queue<node*> nodes;
    node* temp = root;

    while(temp != NULL) {
        cout << temp->data << " ";
        if(temp->left != NULL) nodes.push(temp->left);
        if(temp->right != NULL) nodes.push(temp->right);

        temp = nodes.front();
        nodes.pop();
    }
}
