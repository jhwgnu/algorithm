//http://www.technical-recipes.com/2011/simple-binary-tree-implementation/
#include <iostream>
using namespace std;

class Node{
public:
	int data;
	Node* left;
	Node* right;
	Node(int v){
		data = v;
		left = NULL;
		right = NULL;
	}
};

void insert(Node** rt, Node* n){
	if(*rt==NULL) *rt = n;
	else if(n->data < (*rt)->data){
		insert(&((*rt)->left), n);	
	}
	else{
		insert(&((*rt)->right), n);	
	} 
}

void print_preorder(Node* rt){
	if(rt==NULL) return;
	cout << rt->data << endl;
	print_preorder(rt->left);
	print_preorder(rt->right);
}

void print_inorder(Node* rt){
	if(rt==NULL) return;
	print_inorder(rt->left);
	print_inorder(rt->right);
	cout << rt->data << endl;
}

int main(){
	Node* tree_root = NULL;
	insert(&tree_root, new Node(50));
	insert(&tree_root, new Node(30));
	insert(&tree_root, new Node(10));
	insert(&tree_root, new Node(20));
	insert(&tree_root, new Node(70));
	print_inorder(tree_root);
}

