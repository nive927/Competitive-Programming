// C++ program to insert element in Binary Tree
#include <iostream>
#include <queue>
using namespace std;

/* A binary tree node has data, pointer to left child
and a pointer to right child */

class Node {

    public:

	int data;
	Node* left;
	Node* right;

    Node()
    {
        this->data = -999;
        this->left = this->right = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }

    Node* CreateNode(int data)
    {
        Node* newNode = new Node(data);

        return newNode;
    }
};

class Tree
{
    public:

    Node* root;
    
    Tree()
    {
        root = NULL;
    }

    Tree(vector<int> nodeList)
    {
        for(auto & element : nodeList)
        {
            InsertNode(root, element);
        }
        
    }

    Node* InsertNode(Node* root, int data);

};

// Function to insert element in binary tree
Node* Tree::InsertNode(Node* root, int data)
{
	// If the tree is empty, assign new node address to root
	if (root == NULL) {
		root->CreateNode(data);
		return root;
	}

	// Else, do level order traversal until we find an empty
	// place, i.e. either left child or right child of some
	// node is pointing to NULL.
	queue<Node*> q;
	q.push(root);

	while (!q.empty()) {
		Node* temp = q.front();
		q.pop();

		if (temp->left != NULL)
			q.push(temp->left);
		else {
			temp->left->CreateNode(data);
			return root;
		}

		if (temp->right != NULL)
			q.push(temp->right);
		else {
			temp->right->CreateNode(data);
			return root;
		}
	}

    return root;
}

/* Inorder traversal of a binary tree */

void inorder(Node* temp)
{
	if (temp == NULL)
		return;

	inorder(temp->left);
	cout << temp->data << ' ';
	inorder(temp->right);
}

// Driver code
int main()
{
	Node* root;
    root->CreateNode(10);
	root->left->CreateNode(11);
	root->left->left->CreateNode(7);
	root->right->CreateNode(9);
	root->right->left->CreateNode(15);
	root->right->right->CreateNode(8);

	cout << "Inorder traversal before insertion: ";
	inorder(root);
	cout << endl;

	return 0;
}
