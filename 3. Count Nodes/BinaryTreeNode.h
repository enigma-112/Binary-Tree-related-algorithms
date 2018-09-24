// Generic Binary Tree node
// BTNode means Binary Tree Node
template <typename T>
class BTNode {
	public:
	T data;			// Data
	BTNode* left;	// Left Child
	BTNode* right;	// Right Child

	//Constructor
	BTNode(T data) {
		this->data = data;
		left = NULL;
		right = NULL;
	}
	
	//Destructor
	~BTNode() {
		delete left;
		delete right;
	}
};
