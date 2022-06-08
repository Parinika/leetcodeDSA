/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidTree(TreeNode* root, long min, long max){
        if(root==NULL)
            return true;
        
        if(root->val<min || root->val>max){
            return false;
        }
        
        if((isValidTree(root->left,min,(long)root->val-1))&&(isValidTree(root->right,(long)root->val+1,max)))
           return true;
           
        else
           return false;
    }
    bool isValidBST(TreeNode* root) {
        return isValidTree(root,-1e12,1e12);
    }
};