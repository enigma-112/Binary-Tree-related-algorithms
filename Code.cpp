// Following is the Binary Tree node structure
/*
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
*/

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


