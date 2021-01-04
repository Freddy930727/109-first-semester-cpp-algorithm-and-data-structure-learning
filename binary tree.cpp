	#include <iostream>
	#include <cstdlib>
	#include <ctime>
	using namespace std;
	
	struct node{
		node* left;
		node* right;
		int key;
	};
	
	node* root;
	void createnode(int data,node* ptr);
	void traversal(node* ptr);
	
	int main(void)
	{
	srand(time(NULL));
	int j;
	root = NULL;
	
	for(j=1;j<=16;j++){
		createnode(rand(),root);
	}
	traversal(root);
	
	   return 0;
	}
	
	void createnode(int data,node* ptr){
		if(ptr==NULL){
			ptr->left=new node;
			ptr->right=new node;
			ptr->key=data;
			ptr->left=NULL;
			ptr->right=NULL;
		}
		else if(data<ptr->key){
			createnode(data,ptr->left);
		}
		else if(data>ptr->key){
			createnode(data,ptr->right);
		}
		else{
			cout<<"error";
		}
	}
	
	void traversal(node* ptr){
		if(ptr->left==NULL&&ptr->right==NULL){
			cout<<ptr->key;
		}
		else if(ptr->left!=NULL){
			traversal(ptr->left);
			cout<<ptr->key;
		}
		else if(ptr->right!=NULL){
			traversal(ptr->right);
			cout<<ptr->key;
		}
	}
	
	/*header:C:\Program Files\Dev-Cpp\MinGW64\lib\gcc\x86_64-w64-mingw32\4.9.2\include
	#include <bits/stdc++.h>
	#include <algorithm>*/
	//hello,everyone.i'm working on binary search tree,i expect to put smaller number at the left side of the node,as w
	//ell as greater at the right side of the node,and output the full traversal.However,i met with a SIGSEGV.

