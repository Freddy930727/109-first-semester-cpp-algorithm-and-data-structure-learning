#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int main(void)
{
srand(time(NULL));
int n,q,j,k,ans,search,count;
int p[10000];
bool found;
count=1;
while(cin>>n>>q){

	if(n==0&&q==0){
		break;
	}
	
	for(j=1;j<=n;j++){
		cin>>p[j];
		//p[j]=rand();
	}
	std::sort(p,p+1+n);
	cout<<"CASE# "<<count<<":"<<endl;
	count++;
	for(j=1;j<=q;j++){
		cin>>search;
		//search=rand();
		found=0;
		k=1;
		for(k=1;k<=n;k++){
			if(p[k]==search){
				cout<<search<<" found at "<<k<<endl;
				found=true;
				break;
			}
		}
		if(found==0){
		cout<<search<<" not found"<<endl;}
	}

	cout<<endl;

	
}

   return 0;
}



/*header:C:\Program Files\Dev-Cpp\MinGW64\lib\gcc\x86_64-w64-mingw32\4.9.2\include
#include <bits/stdc++.h>
#include <algorithm>*/

