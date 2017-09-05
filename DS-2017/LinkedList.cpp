#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

struct LinkedList{
	string s;
	LinkedList *next;
};

void print(LinkedList * L){
	if(L == NULL)
		return;
	else{
		cout<<L->s<<" ";
		print(L->next);
	}
	cout<<endl;
}

LinkedList* insert(LinkedList *L,string s){
	if(L==NULL){
		LinkedList *t = new LinkedList();
		t->s = s;
		t->next = NULL;
		return t;
	}
	else{
		L->next = insert(L->next,s);
		return L;
	}
}

int main(){
	LinkedList * t = NULL;
	t = insert(t,"abc");
	t = insert(t,"xyz");
	t = insert(t,"uvx");
	print(t);
		
}
