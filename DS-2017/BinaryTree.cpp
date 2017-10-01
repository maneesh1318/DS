#include<iostream>
#include<string>
#include<vector>
#include<string>
#include<algorithm>
#define infinity 9999
using namespace std;

struct tree{
	char c;
	tree *left;
	tree *right;
	tree *next;
};

void preorder(tree *T){
	if(T == NULL) return;
	cout<<T->c<<" ";
	preorder(T->left);
	preorder(T->right);
}
void inorder(tree *T){
	if(T == NULL) return;
	inorder(T->left);
	cout<<T->c<<" ";
	inorder(T->right);
}
void postorder(tree *T){
	if(T == NULL) return;
	postorder(T->left);
	postorder(T->right);
	cout<<T->c<<" ";
}

tree* makeTree(string inorder, string preorder);
tree* makeTree2(tree *T, string inorder, string postorder);
int findRoot(string inorder, string preorder){
	int root  = infinity;
	int minIndex = infinity;
	for(int i = 0; i< inorder.length();i++){
		int p = -1;
		for(int j = 0;j<preorder.length();j++){
			if(inorder[i] == preorder[j]){
				p = j;
			}
		}
		if(p == -1){
		 cout<< "Wrong Input"<<endl;
		 exit(1);
		}
		else{
			if(p < minIndex){
				root = i;
				minIndex = p;
			}
		}
	}
	return root;
}

void populateInorderSuccessor(tree *T)
{
	static tree *N = NULL;
	if(T == NULL) return;
	populateInorderSuccessor(T->right);
	T->next = N;
	N = T;
	populateInorderSuccessor(T->left);
}

int maxWidth(tree* T)
{
	if(T== NULL) return 0;
	else{
		
	}

}


int main(){
	tree *T = NULL;
	string porder = "42513687";
	string iorder = "12453867";
	//cout<<findRoot(iorder,porder);
	T = makeTree(iorder,porder);
	//populateInorderSuccessor(T);
	inorder(T);
	cout<<endl;
	preorder(T);
	cout<<endl;
	postorder(T);
	cout<<endl;
	
	
}

tree* makeTree(string inorder, string preorder){
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
		int root = findRoot(inorder,preorder);
		string inorderLeft = inorder.substr(0,(root));
		string inorderRight = inorder.substr(root + 1);
		cout<<root<<endl;
		cout<<inorderLeft<<endl;
		cout<<inorderRight<<endl;
		tree *t = new tree();
		t->c = inorder[root];
		t->left=makeTree(inorderLeft,preorder);
		t->right = makeTree(inorderRight,preorder);
		return t;
	}
}

