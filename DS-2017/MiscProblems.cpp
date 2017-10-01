#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

bool isPalindrome(int n);

int main(){
	int x[10] = {12, 10, 9, 45, 2, 10, 10, 45};

}

bool isPalindrome(int n){
	if(n == 0) return true;
	int x = n;
	int y = 0;
	while(n>0){
	  y = y << 1;	
	  y = y | (n & 1);
	  n = n>>1;
	}
	return x==y;	
}

void printDistictElement(int x[],int n)
{

}
