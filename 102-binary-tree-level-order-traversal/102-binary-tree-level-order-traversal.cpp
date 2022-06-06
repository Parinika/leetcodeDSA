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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        map<int, vector<int>> ma;
        queue<pair<TreeNode*, int>> q;
        
        q.push({root,0});
        
        while(!q.empty()){
            pair<TreeNode*, int> p=q.front();
            q.pop();
            ma[p.second].push_back(p.first->val);
            
            if(p.first->left!=NULL){
                q.push({p.first->left,p.second+1});
            }
            if(p.first->right!=NULL){
                q.push({p.first->right,p.second+1});
            }
        }
    
    // I have got all in a map format
    /*
        0 ---> 3
        1 ---> 9 20
        2 ---> 15 7
    */
    
    for(auto i:ma){
        //i.second ---> vector he ek...denoting a vector
        ans.push_back(i.second);
    }
    return ans;
    }
};