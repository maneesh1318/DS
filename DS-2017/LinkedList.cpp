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

LinkedList* insert(LinkedList *L){
	if(L==NULL){
		return (LinkedList*)malloc(sizeof(LinkedList));
	}
	else{
		L->next = insert(L->next);
		return L;
	}
}

int main(){
	
}
