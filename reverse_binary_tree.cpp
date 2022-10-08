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
    TreeNode* reverseOddLevels(TreeNode* root) 
    {
        if(!root)
            return root;
        queue<TreeNode*> q;
        q.push(root);
        bool level = false;
        while(q.size())
        {
            int qSize = q.size();
            vector<int> vals;
            vector<TreeNode*> refs;
            while(qSize--)
            {
                TreeNode *top = q.front();
                q.pop();
                if(level)
                {
                    vals.push_back(top->val);
                    refs.push_back(top);
                }
                if(top->left)
                    q.push(top->left);
                if(top->right)
                    q.push(top->right);
            }
            if(level)
            {
                int n = vals.size();
                for(int i = 0, j = n-1; i < n; i++, j--)
                {
                    refs[i]->val = vals[j];
                }
            }
            level = !level;
        }
        
        return root;
    }
};
