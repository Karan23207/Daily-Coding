//Leetcode Problem- 572

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
    bool isidentical(TreeNode* p, TreeNode* q){
    if(p == NULL && q== NULL)
        return true;

        if(p == NULL && q!= NULL)
        return false;

        if(p != NULL && q== NULL)
        return false;

        bool leftans= isidentical(p->left,q->left);
        bool rightans = isidentical(p->right , q->right);
        bool val= p->val == q->val;

        if(leftans && rightans && val) 
        return true;
        else 
        return false;

}

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        if(subRoot == NULL )
        return true;
        if(root == NULL) return false;

        if((subRoot->val == root->val) && isidentical(root,subRoot)){
            return true;
        }

        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
        

    }
};
