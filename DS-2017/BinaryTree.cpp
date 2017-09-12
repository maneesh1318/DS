#include<iostream>
#include<string>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

struct tree{
	char c;
	tree *left;
	tree *right;
};

tree* makeTree(tree *T, string inorder, string preorder);
tree* makeTree2(tree *T, string inorder, string postorder);
int findRoot(string inorder, string preorder){
	int root  = -1;
	for(int i = 0; i< inorder.length();i++){
		for(int j = 0;j<preorder.length();j++){
			if(inorder[i] == preorder[j]){
				root = (root > j)?i:root;
			}
		}
	}
}


int main(){
	
}

tree* makeTree(tree *T, string inorder, string preorder){
	if(inorder.length() == 0)
		return NULL;
	else if(inorder.length() == 1){
		tree * t = new tree();
		t->c = inorder[0];
		t->left = NULL;
		t->right = NULL;
		return t;
	}
	else{
		
	}
	
	
}

