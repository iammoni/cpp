 //Wrong Outputs:
 int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int result=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int count=q.size();
            result=result>count?result:count;
            while(count--){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
        }
        return result;
    }