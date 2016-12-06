void print_left_nodes(node * root) {
    if(root->left != NULL) print_left_nodes(root->left);
    cout << root->data << " ";
}

void print_right_nodes(node * root) {
    cout << root->data << " ";
    if(root->right != NULL)
        print_right_nodes(root->right);
}

void top_view(node * root){
    print_left_nodes(root);

    if(root->right != NULL)
        print_right_nodes(root->right);
}
