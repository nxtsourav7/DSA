/*
*	author 	: nxtsourav7
*	created : 2023/10/05 09:48:46
*/


#include<bits/stdc++.h>
using namespace std;


struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int new_data) : data(new_data), left(nullptr), right(nullptr) {};
};


class BinarySearchTree {
private:
    TreeNode* root;

    // insert
    TreeNode* insertNode(TreeNode* root, int new_data) {
        if(root == nullptr) {
            root = new TreeNode(new_data);
            return root;
        }

        if(new_data < (root->data)) {
            root->left = insertNode(root->left, new_data);
        }
        else {
            root->right = insertNode(root->right, new_data);
        }

        return root;
    }

    // delete
    TreeNode* deleteNode(TreeNode* root, int target) {
        if(root == nullptr) return root;

        if(target < (root->data)) {
            root->left = deleteNode(root->left, target);
        }
        else if(target > (root->data)) {
            root->right = deleteNode(root->right, target);
        }
        // found the target 
        else {
            // nodede has only one child
            if(root->left == nullptr) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            else if(root->right == nullptr) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
        }
    }

    void preorder_traverse(TreeNode* root) {
        if(root==nullptr) return;

        cout << root->data << " ";
        preorder_traverse(root->left);
        preorder_traverse(root->right);
    }

    void inorder_traverse(TreeNode* root) {
        if(root==nullptr) return;

        inorder_traverse(root->left);
        cout << root->data << " ";
        inorder_traverse(root->right);
    }

    void postorder_traverse(TreeNode* root) {
        if(root==nullptr) return;

        postorder_traverse(root->left);
        postorder_traverse(root->right);
        cout << root->data << " ";
    }


    TreeNode* p_search(TreeNode* root, int x) {
        if(root==nullptr || root->data==x) {
            return root;
        }
    
        if(x<(root->data)) {
            return p_search(root->left, x);
        }
        else {
            return p_search(root->right, x);
        }
    }





public:
    BinarySearchTree() : root(nullptr) {};


    void insert(int new_data) {
        root = insertNode(root, new_data);
    }
    
    void pre_order_print() {
        cout << "PRE-ORDER : \n";
        preorder_traverse(root);
        cout << "\n";
    }

    void in_order_print() {
        cout << "IN-ORDER : \n";
        inorder_traverse(root);
        cout << "\n";
    }

    void post_order_print() {
        cout << "POST-ORDER : \n";
        postorder_traverse(root);
        cout << "\n";
    }


    bool search(int x) {
        // return (p_search(root,x));

        TreeNode* temp = root;

        while(true) {
            if(temp==nullptr) {
                return false;
            }
            if(temp->data==x) {
                return true;
            }

            if(x<temp->data) {
                temp = temp->left;
            }
            else {
                temp = temp->right;
            }
        }
    }
};

int32_t main() {
    BinarySearchTree bst;

    /*

            20
          /   \
         10   30
        / \   / \ 
       5 12  25 40

    */
    bst.insert(20);
    bst.insert(30);
    bst.insert(10);
    bst.insert(5);
    bst.insert(12);
    bst.insert(25);
    bst.insert(40);
    bst.insert(18);
    bst.insert(11);

    bst.pre_order_print();
    bst.in_order_print();
    bst.post_order_print();

    // int x;
    // cout << "Search Element : ";
    // cin >> x;
    // if(bst.search(x)) {
    //     cout << "FOUND !\n";
    // }
    // else {
    //     cout << "NOT FOUND !\n";
    // }

    return 0;
}