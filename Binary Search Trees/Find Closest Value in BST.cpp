class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int val);
  BST &insert(int val);
};

bool isCloser(int val, int curr, int a);

// Time O(nlogn) 
// Space O(1)
int findClosestValueInBst(BST *tree, int target) {
	if(!tree) return -1;
	
  auto curr = tree;
	int closest = curr->value;
	
	while(curr){
		if(isCloser(target,closest,curr->value))
			closest = curr->value;
		if(curr->value < target)
			curr = curr->right;
		else
			curr = curr->left;
	}
	
  return closest;
}

bool isCloser(int val, int curr, int a){
	return std::abs(a - val) < std::abs(curr - val);
}