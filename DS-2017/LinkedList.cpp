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

<<<<<<< HEAD
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
=======
LinkedList* insert(LinkedList *L,string s){
	if(L==NULL){
		LinkedList *t = new LinkedList();
		t->s = s;
		t->next = NULL;
		return t;
	}
	else{
		L->next = insert(L->next,s);
>>>>>>> a3020a34b1a7a7886eda43fcee364ffce6eeb8fd
		return L;
	}
}

int main(){
<<<<<<< HEAD
	LinkedList * L = NULL;
	L = insert(L, 1);
	cout<<"xxxx";
	print(L);
	L = insert(L,2);
	print(L);
	L = insert(L, 3);
	print(L);
	print(L);
=======
	LinkedList * t = NULL;
	t = insert(t,"abc");
	t = insert(t,"xyz");
	t = insert(t,"uvx");
	print(t);
		
>>>>>>> a3020a34b1a7a7886eda43fcee364ffce6eeb8fd
}
