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
		p->n = n;
		p->next = NULL;
		return p;
	}
	else{
		L->next = insert(L->next,n);
		return L;
	}
}

LinkedList * addBigInt(LinkedList *P, LinkedList *Q,int & C,bool flag){
	if(P == NULL || Q == NULL){
		C = 0;
		return NULL;
	}
	else{
		int q = 0;
		LinkedList * R = addBigInt(P->next,Q->next,q,false);
		LinkedList * S = (LinkedList*)malloc(sizeof(LinkedList));
		int x = P->n + Q->n + q;
		if(x < 10){
			S->n = x;
			S->next = R;
			return S;
		}
		else{
			S->n = x%10;
			S->next = R;
			if(flag){
				LinkedList * T = (LinkedList*)malloc(sizeof(LinkedList));
				T->n = x/10;
				T->next = S;
				return T;
			}
			else{
				C = x/10;
				return S;
			}
		}
	}

}

int main(){
	LinkedList * P = NULL;
	LinkedList *Q = NULL;
	P = insert(P,5);
	P = insert(P,5);
	P = insert(P,5);
	Q = insert(Q,5);
	Q = insert(Q,5);
	Q = insert(Q,5);
	int C=0;
	print(P);
	print(Q);
	LinkedList * R = addBigInt(P,Q,C,true);
	print(R);
}
