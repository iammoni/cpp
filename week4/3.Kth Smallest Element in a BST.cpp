/*
1.Store inorder travreal in an array ans return inorder_arr[k-1] in case of zero index base
2.Don't  need to store keep global variable  do inorder traversal and minus k--code below:
3. Using Stack
*/
//global variable 
 int count=0;
    int ans=-1;
    void fun(TreeNode* root){
        if(!root) return;
        fun(root->left);
        count--;
        if(count==0) ans=root->val;
        fun(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        count=k;
        fun(root);
        return ans;
    }

    //stack 
    int kthSmallest(TreeNode* root, int k) {
      stack<TreeNode*> s;
      while(true){
          while(root){
              s.push(root);
              root=root->left;
          }
          root=s.top();
          if(--k==0) return root->val;
          s.pop();
          root=root->right;   
      }
    }