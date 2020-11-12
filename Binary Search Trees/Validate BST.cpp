class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int val);
  BST &insert(int val);
};

bool val(BST *node, int min = INT_MIN, int max = INT_MAX);

bool validateBst(BST *tree) {
  // Write your code here.
  return val(tree);
}

bool val(BST *node, int min, int max){
	if(!node)
		return true;
	if(node->value < min || node->value >= max)
		return false;
	return (val(node->right,node->value,max) && val(node->left,min,node->value));
	
}