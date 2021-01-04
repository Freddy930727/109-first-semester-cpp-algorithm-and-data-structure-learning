#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void) 
{
int p[101];
int k,a,b,temp;

srand(time(NULL));		//set the seed of randon number

for(k=1;k<=101;k++){
	p[k]=rand();
	cout<<p[k]<<" ";
}
cout<<"\n";

for(a=1;a<=k;a++){
	for(b=1;b<=k-a;b++){
		if(p[b]>p[b+1]){
			temp=p[b+1];
			p[b+1]=p[b];
			p[b]=temp;
		}
	}
}

for(a=1;a<=k;a++){
	cout<<p[a]<<" ";
}

   return 0;
}



