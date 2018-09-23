#include <iostream>
#include "BinaryTreeNode.h"
#include <queue>
using namespace std;



// A Node which has no child, take its right child as -1 and left child as -1 .
// Here -1 is not a child . It's just a terminating condition.
// Function to take input levelwise
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

// Function to print Level Wise
void printLevelWise(BTNode<int> *root) {

	if(root==NULL)
  		return;

  queue<BTNode<int>*> q;	// Queue of Binary Tree Node pointer
  q.push(root);

  while(q.size()!=0){
    BTNode<int> *x=q.front();
    q.pop();

    cout<<x->data<<":";

       if(x->left!=NULL){
    	 q.push(x->left);
         cout<<"L->"<<x->left->data<<" , ";
		 }


    	if(x->right!=NULL){
       	 q.push(x->right);
    	  cout<<"R->"<<x->right->data;
		  }

    cout<<endl;
  }
}


//Main Function
int main() {

	//Taking input levelwise
	BTNode<int>* root = takeInputLevelWise();

	//Printing Level Wise	
	cout<<endl <<endl<<"The Entered Tree is (In Level order Traversal) :"<<endl;
	cout<<"---------------------------"<<endl;
	 printLevelWise(root);

	//Deleting dynamically allocated Tree
	delete root;
}
