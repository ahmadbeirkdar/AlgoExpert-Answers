#include <vector>
using namespace std;

class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int val);
};

void preorder(BST *tree, vector<int> &array){
	if(tree){
		array.push_back(tree->value);
		preorder(tree->left,array);
		preorder(tree->right,array);
	}
}
void inorder(BST *tree, vector<int> &array){
	if(tree){
		inorder(tree->left,array);
		array.push_back(tree->value);
		inorder(tree->right,array);
	}
}
void postorder(BST *tree, vector<int> &array){
	if(tree){
		postorder(tree->left,array);
		postorder(tree->right,array);
		array.push_back(tree->value);
	}
}

vector<int> inOrderTraverse(BST *tree, vector<int> array) {
  // Write your code here.
	inorder(tree,array);
  return array;
}

vector<int> preOrderTraverse(BST *tree, vector<int> array) {
  preorder(tree,array);
  return array;
}

vector<int> postOrderTraverse(BST *tree, vector<int> array) {
  postorder(tree,array);
  return array;
}