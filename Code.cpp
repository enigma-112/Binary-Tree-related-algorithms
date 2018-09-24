


//Recursive Function to count the no. of nodes in a Binary Tree


int num_Nodes(BTNode<int>* root) {
	if (root == NULL) {
		return 0;
	}
	return 1 + num_Nodes(root->left) + num_Nodes(root->right);
}
