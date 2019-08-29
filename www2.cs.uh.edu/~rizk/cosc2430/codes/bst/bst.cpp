#include <vector>
#include <iostream>
using namespace std;

struct BSTNode // BinarySearchTreeNode
{
    BSTNode(int value) : val(value), left(NULL), right(NULL) {}
    int val;
    BSTNode* left = NULL;
    BSTNode* right = NULL;
};

class BST // BinarySearchTree
{
public:
    TreeNode* insert(int value) // or void insert(int value)
    {
    }
    // ------------------------------------------
    BSTNode* BSTNode::remove(int value, BSTNode *parent) // or void BSTNode::remove(int value)
    {
    }
    // ------------------------------------------
    BSTNode* finMin() const // or BSTNode* finMin(BSTNode* rootNode)
    {
    }
    // ------------------------------------------
    BSTNode* finMax() const // or BSTNode* finMin(BSTNode* rootNode)
    {
    }
    // ------------------------------------------
    void preOrderTraversal() const
    {
        cout << "preOrderTraversal: "
        preOrderTraversal(root);
        cout << endl;
    }
    void preOrderTraversal(BSTNode* node) const
    {
        if (node != NULL) {
            cout << node->value << " ";
            preOrderTraversal(node->left);
            preOrderTraversal(node->right);
        }
    }
    // ------------------------------------------
    void inOrderTraversal() const
    {
        cout << "inOrderTraversal: "
        inOrderTraversal(root);
        cout << endl;
    }
    void inOrderTraversal(BSTNode* node) const
    {
        if (node != NULL) {
            inOrderTraversal(node->left);
            cout << node->value << " ";
            inOrderTraversal(node->right);
        }
    }
    // ------------------------------------------
    void postOrderTraversal() const
    {
        cout << "postOrderTraversal: "
        postOrderTraversal(root);
        cout << endl;
    }
    void postOrderTraversal(BSTNode* node) const
    {
        if (node != NULL) {
            postOrderTraversal(node->left);
            postOrderTraversal(node->right);
            cout << node->value << " ";
        }
    }
private:
    TreeNode* root = NULL;
}

int main(int argc, char* argv[]) 
{
    BST bst;
    vector<int> values = {5, 2, 12, -4, 3, 9, 21, -7, 19, 25, -8, -6, -4, 3, 12};
    for (int value : values) 
        bst.insert(value);

    bst.preOrderTraversal(); // should be 5 2 -4 -7 -8 -6 3 12 9 21 19 25
    bst.inOrderTraversal();  // should be -8 -7 -6 -4 2 3 5 9 12 19 21 25
    bst.postOrderTraversal();  // should be -8 -6 7 -4 3 2 9 19 25 21 12 5
    
    bst.remove(3);  // Node 3 has 0 children  --> delete the node and make it NULL;
    bst.remove(-4);  // Node -4 has 1 children --> Link parent to child --> delete the node and make it NULL;
    bst.remove(12);  // Node 12 has 2 children --> findMin for the right subtree --> swap value -> delete

    bst.preOrderTraversal(); // should be 5 2 -7 -8 -6 19 9 21 25
    bst.inOrderTraversal();  // should be -8 -7 -6 2 5 9 19 21 25
    bst.postOrderTraversal();  // should be -8 -6 7 2 9 25 21 19 5

    return 0;
}
