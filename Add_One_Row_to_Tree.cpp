class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) 
    {

        if(depth == 1)
        {
            TreeNode *newRoot = new TreeNode(val, root, NULL);
            return newRoot;
        }

        queue<TreeNode*> q;
        int curDepth = 1;
        q.push(root);
        
        while(q.size() > 0)
        {
            int qSize = q.size();
            while(qSize--)
            {
                TreeNode *top = q.front();
                q.pop();

                if(curDepth == depth - 1)
                {
                    TreeNode *leftSubTree = top->left;
                    TreeNode *rightSubTree = top->right;

                    TreeNode *newNodeLeft = new TreeNode(val, leftSubTree, NULL);
                    TreeNode *newNodeRight = new TreeNode(val, NULL, rightSubTree);

                    top->left = newNodeLeft;
                    top->right = newNodeRight;
                }

                if(top->left)
                    q.push(top->left);

                if(top->right)
                    q.push(top->right);
            }
            curDepth++;
        }
        return root;
    }
};
