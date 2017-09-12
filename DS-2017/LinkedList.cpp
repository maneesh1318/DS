#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

struct LinkedList{
	int n;
	LinkedList *next;
};

void print(LinkedList * L){
	if(L == NULL)
		return;
	else{
		cout<<L->n<<" ";
		print(L->next);
	}
	cout<<endl;
}

LinkedList* insert(LinkedList *L, int n){
	if(L==NULL){
		
		LinkedList * p = (LinkedList*)malloc(sizeof(LinkedList));
		cout<<n<<endl;
		p->n = n;
		cout<<"here";
		p->next = NULL;
		cout<<"here";
		return p;
	}
	else{
		L->next = insert(L->next,n);
		return L;
	}
}

int main(){
	LinkedList * L = NULL;
	L = insert(L, 1);
	cout<<"xxxx";
	print(L);
	L = insert(L,2);
	print(L);
	L = insert(L, 3);
	print(L);
	print(L);
}
