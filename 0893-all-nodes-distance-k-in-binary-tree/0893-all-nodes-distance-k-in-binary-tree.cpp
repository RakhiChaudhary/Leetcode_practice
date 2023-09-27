/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    void inorder(TreeNode* root, unordered_map<TreeNode*,TreeNode*>&Parent){
        if(root==NULL)
        return;

        if(root->left){
            Parent[root->left]=root;
             inorder(root->left,Parent);
        }

       if(root->right){
            Parent[root->right]=root;
             inorder(root->right,Parent);
        }
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        queue<TreeNode*>q;
        vector<int>ans;
        unordered_map<TreeNode*,TreeNode*>Parent;
        unordered_map<TreeNode*,bool>visited;
        inorder(root,Parent);
        q.push(target);
        int level=0;
        while(!q.empty()){
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode* f=q.front();
                q.pop();
                visited[f]=true;
                if(level==k)
                ans.push_back(f->val);

                if(f->left && !visited[f->left])
                q.push(f->left);

                if(f->right && !visited[f->right])
                q.push(f->right);

                if(Parent[f] && !visited[Parent[f]])
                q.push(Parent[f]);

            }

            if(level==k)
            return ans;
            level++;
        }
        return ans;

    }
};