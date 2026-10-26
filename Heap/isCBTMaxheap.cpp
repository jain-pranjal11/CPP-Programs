#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int countNodes(Node* root){

    if(root == NULL){
        return 0;
    }

    else{
        return 1 + countNodes(root->left) + countNodes(root->right); 
    }

}

bool isComplete(Node* root, int index, int totalNodes){
    if(root == NULL)
        return true;

    if(index >= totalNodes)
        return false;

    else
        return isComplete(root->left, 2*index+1, totalNodes) && isComplete(root->right, 2*index+2, totalNodes);

}

bool isHeap(Node* root){
    if(root == NULL)
        return true;
    
    if(root->left != NULL){
        if(root->data < root->left->data)
            return false;
    }

    if(root->right != NULL){
        if(root->data < root->right->data)
            return false;
    }

    return isHeap(root->left) && isHeap(root->right); 
}

bool isBinaryTreeHeap(Node* root){
    int totalNodes = countNodes(root);

    return isComplete(root, 0, totalNodes) && isHeap(root);
}


int main() {
    
    Node* root = new Node(50);

    root->left = new Node(40);
    root->right = new Node(30);
    root->left->left = new Node(20);
    root->left->right = new Node(10);
    
    if(isBinaryTreeHeap(root))
        cout << "Binary Tree is a Heap";
    else
        cout << "Binary Tree is not a Heap";

    return 0;
}