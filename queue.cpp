#include <iostream>
#include <cstdlib>
#include <ctime>
#define max 100
using namespace std;

int j,num,front,back;
int p[100];
int push(int a);
int pop(void);

int main(void)
{
srand(time(NULL));

    while(cin>>num){
        front=0;
        back=0;
        for(int j=1;j<=num;j++){
            push(rand());
            cout<<p[j]<<" ";
        }
        cout<<"\n";
        for(j=1;j<=3;j++){
            pop();
        }
        for(j=front+1;j<=back;j++){
            cout<<p[j]<<" ";
        }
       return 0;
    }
}

int push(int a){
	if(back==max){
		cout<<"the queue is full"<<endl;
	}
	else{
		back++;
		p[back]=a;
	}
	return 0;
}


int pop(void){
	if(front==back){
		cout<<"the queue is empty"<<endl;
	}
	else{
		front++;
	}
	return 0;
}
