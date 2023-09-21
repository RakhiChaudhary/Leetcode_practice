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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(root==NULL)
        return {};
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        int level=0;
        map<int,map<int,multiset<int>>>mp;
        while(!q.empty()){
           int s=q.size();
           for(int i=0;i<s;i++){
               TreeNode* front=q.front().first;
               int dis=q.front().second;
               q.pop();

               mp[dis][level].insert(front->val);

               if(front->left){
                   q.push({front->left,dis-1});
               }
               if(front->right){
                   q.push({front->right,dis+1});
               }
           }
           level++;
        }


        vector<vector<int>>ans;
        for(auto d:mp){
            vector<int>dummy;
            for(auto l:d.second){
                for(auto it:l.second){
                   dummy.push_back(it);
                }
            }
            ans.push_back(dummy);
        }
         return ans;
    }
};