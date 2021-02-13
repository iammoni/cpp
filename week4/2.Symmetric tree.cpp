/*
1. store tree's inorder traversal and this is a palidrome
but some test case fails almost work
fails for [1,2,2,2,null,2,null] gives true ans:false;

2. make a copy of tree and code given below 
*/
bool is(TreeNode* root1,TreeNode* root2){
        if(root1==NULL && root2==NULL) return true;
        if(root1==NULL || root2==NULL) return false;
        return (root1->val==root2->val && is(root1->left,root2->right) && is(root1->right,root2->left));
    }

int main(){
    //input: root
    return is(root,root);
}