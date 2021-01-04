#include <iostream>
#include <cstdlib>
using namespace std;
int input[10000];
int main(void)
{
int j,k;
void sort(int);
int i=0; 
input[1]=0;
while(scanf("%d",&input[i])!=EOF){
	sort(i);
	if(i%2==0){//©_¼Æ­Ó// 
	cout<<input[(i+1)/2];
	}
	else if(i%2==1){
	cout<<(input[i/2]+input[i/2+1])/2;
	}
	cout<<"\n";
	i++;
}
   return 0;
}

void sort(int i){
	int j,k;
	for(j=i;j>0;j--){
	if(input[j]<input[j-1]){
		k=input[j-1];
		input[j-1]=input[j];
		input[j]=k;
	}
}

}





