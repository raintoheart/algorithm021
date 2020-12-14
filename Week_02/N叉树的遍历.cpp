/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
         vector<int> ve;
        if (!root) return ve;
        recursivePerorder(root, ve);
        return ve;
    }

    void recursivePerorder(Node* node, vector<int>& ve) {
        if (!node) return;
        
        ve.emplace_back(node->val);
        int size = node->children.size();
        for (int i=0; i<size; i++ ) {
            Node *n = node->children[i];
            if (n) {
                recursivePerorder(n,ve);
            }
        }
    }
};