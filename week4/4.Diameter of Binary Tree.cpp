pair<int,int> height(TreeNode* root){
        if(root==nullptr){
            pair<int,int> p;
            p.first=0;
            p.second=0;
            return p;
        }
        
        //int option1=height(root->left)+height(root->right);
        pair<int,int> left=height(root->left);
        pair<int,int> right=height(root->right);
        int lh=left.first;
        int rh=right.first;
        int ld=left.second;
        int rd=right.second;
        
        int height=1+max(lh,rh);
        int diameter=max(max(ld,rd),lh+rh);
        pair<int,int> p=make_pair(height,diameter);
        return p;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        
        pair<int,int> p=height(root);
        return p.second;
    }