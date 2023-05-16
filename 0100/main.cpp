#include <bits/stdc++.h>

// TODO

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr) return true;
        if(p == nullptr || q == nullptr) return false;
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

int main(){

    Solution s;

    TreeNode* lchild = new TreeNode(1);
    TreeNode* rchild = new TreeNode(1);

    TreeNode* treeA = new TreeNode(1, lchild, nullptr);
    TreeNode* treeB = new TreeNode(1, nullptr, rchild);

    s.isSameTree(treeA, treeB);


}