#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

class LinkedList{
	string d;
	LinkedList *p;
	public:
		LinkedList(){
			p = NULL;
		}
		
		LinkedList(string s){
			d = s;
			p = NULL;
		}
		
		void print(){
			if(p==NULL) return;
			LinkedList *L = p;
			while(L!=NULL){
				cout<<L->d<<"  ";
				L = L->p;
			}
			cout<<endl;
		}
		
		void insert(string s){
			if(d.empty() && p == NULL){
				d = s;
			}
			else{
				p = new LinkedList();
				p->insert(s);
			}
		}
};

int main(){
	LinkedList *linkedList = new LinkedList();
	cout<<"xxx"<<endl;
	linkedList->insert("abcd");
	cout<<"xxx"<<endl;
	linkedList->insert("xyz");
	cout<<"xxx"<<endl;
	linkedList->insert("ddd");
	cout<<"xxx"<<endl;
	linkedList->print();
	cout<<"xxx"<<endl;
}
