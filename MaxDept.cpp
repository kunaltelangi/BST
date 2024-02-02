int maxDept(node* root){
    if(root == NULL) return 0;
  
    int r = maxDept(root->right);
    int l = maxDept(root->left);
  
    return 1 + max(r,l);
}
