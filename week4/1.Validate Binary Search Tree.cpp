/* 1:
store tree's inorder traversal in an array ans check where it is soreted in ascending order or not.
2. By Using Two variables.
*/

//Solution By two variable:
bool isValidBST(TreeNode* root,long long int min=INT64_MIN,long long int max=INT64_MAX)     {
  
 return !root?true:(root->val>min && root->val<max) && isValidBST(root->left,min,root->val) &&        isValidBST(root->right,root->val,max);
    }