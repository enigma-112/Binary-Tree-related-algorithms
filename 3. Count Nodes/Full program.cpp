#include <iostream>
#include "BinaryTreeNode.h"
#include <queue>
using namespace std;

BTNode<int>* takeInputLevelWise() {
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	if (rootData == -1) {
		return NULL;
	}

	BTNode<int>* root = new BTNode<int>(rootData);

	queue<BTNode<int>*> remainingNodes;
	remainingNodes.push(root);
	while (remainingNodes.size() != 0) {
		BTNode<int>* front = remainingNodes.front();
		remainingNodes.pop();
		cout << "Enter left child of " << front->data << endl;
		int leftChildData;
		cin >> leftChildData;
		if (leftChildData != -1) {
			BTNode<int>* child = new BTNode<int>(leftChildData);
			front->left = child;
			remainingNodes.push(child);
		}
		cout << "Enter right child of " << front->data << endl;
		int rightChildData;
		cin >> rightChildData;
		if (rightChildData != -1) {
			BTNode<int>* child = new BTNode<int>(rightChildData);
			front->right = child;
			remainingNodes.push(child);
		}
	}
	return root;
}



//Recursive Function to count the no. of nodes in a Binary Tree
int num_Nodes(BTNode<int>* root) {
	if (root == NULL) {
		return 0;
	}
	return 1 + num_Nodes(root->left) + num_Nodes(root->right);
}

// Main Function
int main() {

	//Taking input levelwise
	BTNode<int>* root = takeInputLevelWise();

	//Counting number of nodes	
	cout<<endl <<endl<<"No. of nodes is  :  "<<num_Nodes(root)<<endl;
	 
	//Deleting dynamically allocated Tree
	delete root;
}
