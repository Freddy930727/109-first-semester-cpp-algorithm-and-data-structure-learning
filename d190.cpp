#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
int n,j,k,temp;
int p[2000002];

while(scanf("%d",&n)!=0){
	for(j=1;j<=n;j++){
		cin>>p[0];
		for(k=0;k<=j-1;k++){
			if(p[k]>p[k+1]){
				temp=p[k+1];
				p[k+1]=p[k];
				p[k]=temp;
			}
			cout<<p[k]<<" ";
		}
		cout<<"\n";
	}
}



   return 0;
}



