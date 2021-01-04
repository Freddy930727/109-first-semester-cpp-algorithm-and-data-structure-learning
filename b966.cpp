#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
int i,j,k,rm,temp,total;
int s[10000][2];
while(scanf("%d",&i)!=EOF){
	for(j=0;j<i;j++){
		cin>>s[j][0];
		cin>>s[j][1];
	}
	
	for(j=0;j<i-1;j++){
		for(k=0;k<i-1-j;k++){
			if(s[j][0]>s[j+1][0]){
				temp=s[j][0];
				s[j][0]=s[j+1][0];
				s[j+1][0]=temp;
				
				temp=s[j][1];
				s[j][1]=s[j+1][1];
				s[j+1][1]=temp;		
			}
		}
	}
	
	rm=s[0][1];
	total=s[0][1]-s[0][0];
	
	for(j=1;j<i;j++){
		if(s[j][1]<=rm){
			
		}
		else if(s[j][0]<rm && rm<s[j][1]){
			rm=s[j][1];
			total+=(s[j][1]-rm);
		}
		else if(s[j][0]>=rm){
			rm=s[j][1];
			total+=s[j][1]-s[j][0];
		}
		
		
	}
	cout<<total;
	
}



   return 0;
}



