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
    
    map<int,vector<int> >sol;
    int cmax=0;
    
    void dfs(TreeNode* root,int cur){
        if(root==nullptr){
            return;
        }
        cmax=max(cmax,cur);
        sol[cur].push_back(root->val);
        dfs(root->left,cur+1);
        dfs(root->right,cur+1);
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        sol.clear();
        dfs(root,0);
        vector<vector<int> >ans;
        for(auto x : sol){
            ans.push_back(x.second);
        }
        return ans;
    }
};