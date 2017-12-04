#include <iostream>

using namespace std;

struct Node {
    struct Node* left;
    struct Node* right;
    int data;
};

Node* root;
Node* new_node(int data);
Node* insert(Node* root, int data);

int main() {
    root = new_node(5);
    node = new_node(3);
    insert(

    return 0;
}

Node* new_node(int data) {
    Node node = new Node {.left = NULL, .right = NULL, .data = data };
    return &node;
}

Node* insert(Node* root, int data) {
    Node* node = root;
    //Tree is empty check
    if(root == NULL) {
        return(new_node(data));
    }
    if(data <= node->data) {
        node->left = insert(node->left, data)
    } else {
        node->right = insert(node->right, data)
    }
    return node;
}
