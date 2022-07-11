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
    
    vector<int>vec;
    int maxl=0;
    
    void right(TreeNode* root,int curlevel){
        if(root==nullptr){
            return;
        }
        if(curlevel>maxl){
            vec.push_back(root->val);
            maxl=curlevel;
        }
        right(root->right,curlevel+1);
        right(root->left,curlevel+1);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        right(root,1);
        return vec;
    }
};