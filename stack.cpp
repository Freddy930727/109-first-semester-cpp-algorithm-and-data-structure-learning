#include <iostream>
#include <cstdlib>
#include <ctime>
#define max 100
using namespace std;

int j,num,top;
int p[100];
int push(int a);
int pop(void);

int main(void)
{
srand( time(NULL) );



while(cin>>num){
	top=0;
	for(j=1;j<=num;j++){
		push(rand());
		cout<<p[j]<<" ";
	}
	cout<<endl;
	for(j=1;j<=num+1;j++){	//the time you pop up is more than the things you put in the stack
		pop();
	}
	for(j=1;j<=top;j++){
		cout<<p[j]<<" ";
	}
	cout<<endl;
}
   return 0;
}

int push(int a){
	if(top+1==max){
		cout<<"the stack is full"<<endl;
	}
	else{
		top++;
		p[top]=a;
	}
	return 0;
}

int pop(void){
	if(top==0){
		cout<<"there is nothing left"<<endl;
	}
	else{
		top--;
	}
	return 0;
}
/*header:C:\Program Files\Dev-Cpp\MinGW64\lib\gcc\x86_64-w64-mingw32\4.9.2\include
#include <bits/stdc++.h>
#include <algorithm>*/
