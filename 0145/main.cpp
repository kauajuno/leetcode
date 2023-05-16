#include<bits/stdc++.h>

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
    vector<int> postorderTraversal(TreeNode* root) {
        TreeNode* aux = root;
        vector<int> postorder;
        stack<TreeNode*> s;
        while(aux || !s.empty()){
            if(aux){
                s.push(aux);
                postorder.insert(postorder.begin(), aux->val);
                aux = aux->right;
            }else{
                aux = s.top()->left;
                s.pop();
            }
        }

        return postorder;
    }
};

int main(){
    
    return 0;
}