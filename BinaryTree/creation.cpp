#include <iostream>
#include <queue>
using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root){
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if(data == -1)
        return NULL;

    cout << "Enter the data for inserting in the left of: " << data << endl;
    root->left = buildTree(root->left);
    cout << "Etner the data for insertiong in the right of: " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void inOrder(Node *root){
    //base case
    if(root == NULL){
        return ;
    }

    inOrder(root->left);
    cout << root-> data << " ";
    inOrder(root->right);
}

void preOrder(Node *root){
    if(root == NULL){
        return ;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node *root){
    if(root == NULL){
        return ;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void levelOrderTraversal(Node *root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node *temp = q.front();
        q.pop();

        if(temp == NULL){
            //purana level complete ho chuka
            cout << endl;
            if(!q.empty()){
                //queue still have some child
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
}


int main() {
    
    Node *root;

    //creating a Tree
    root = buildTree(root);

    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //levelOrderTraversal
    cout << "Printing the level Order Traversal Output" << endl;
    levelOrderTraversal(root);

    cout << "\nInorder traversal is: ";
    inOrder(root);

    cout << "\nPreorder traversal is: ";
    preOrder(root);
    
    cout << "\nPostOrder traversal is: ";
    postOrder(root);

    return 0;
}