#include <iostream>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
};
//hello
class BST {
private:
    Node* root;

    Node* insert(Node* node, int key) {
        if (node == NULL) {
            Node* newNode = new Node;
            newNode->key = key;
            newNode->left = NULL;
            newNode->right = NULL;
            return newNode;
        }
        if (key < node->key)
            node->left = insert(node->left, key);
        else if (key > node->key)
            node->right = insert(node->right, key);
        return node;
    }

    Node* search(Node* node, int key) {
        if (node == NULL || node->key == key)
            return node;
        if (key < node->key)
            return search(node->left, key);
        return search(node->right, key);
    }

    void inorder(Node* node) {
        if (node == NULL)
            return;
        inorder(node->left);
        cout << node->key << " ";
        inorder(node->right);
    }

    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left != NULL)
            current = current->left;
        return current;
    }

    Node* deleteNode(Node* node, int key) {
        if (node == NULL)
            return node;
        if (key < node->key)
            node->left = deleteNode(node->left, key);
        else if (key > node->key)
            node->right = deleteNode(node->right, key);
        else {
            if (node->left == NULL) {
                Node* temp = node->right;
                delete node;
                return temp;
            }
            else if (node->right == NULL) {
                Node* temp = node->left;
                delete node;
                return temp;
            }
            Node* temp = minValueNode(node->right);
            node->key = temp->key;
            node->right = deleteNode(node->right, temp->key);
        }
        return node;
    }

public:
    BST() {
        root = NULL;
    }

    void insert(int key) {
        root = insert(root, key);
    }

    Node* search(int key) {
        return search(root, key);
    }

    void inorder() {
        inorder(root);
    }

    void deleteNode(int key) {
        root = deleteNode(root, key);
    }
};

int main() {
    BST tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(20);
    tree.insert(40);
    tree.insert(70);
    tree.insert(60);
    tree.insert(80);

    cout << "Inorder traversal: ";
    tree.inorder();
    cout << endl;

    int key = 60;
    Node* node = tree.search(key);
    if (node == NULL)
        cout << key << " not found\n";
    else
        cout << key << " found\n";

    key = 90;
    node = tree.search(key);
    if (node == NULL)
        cout << key << " not found\n";
    else
        cout << key << " found\n";

    tree.deleteNode(20);
    cout << "Inorder traversal after deleting 20: ";
    tree.inorder();
    cout << endl;

    tree.deleteNode(30);
    cout << "Inorder traversal after deleting 30: ";
    tree.inorder();
    cout << endl;
    return 0;
}

