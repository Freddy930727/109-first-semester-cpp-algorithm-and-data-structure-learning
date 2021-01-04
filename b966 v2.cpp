#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int front[10000];	//5 160 180 150 200 280 300 300 330 190 210 
int back[10000];	//4 5 6 1 2 4 8 7 9 
int n;
int bubble(void);

int main(void)
{
srand( time(NULL) );

int j,k,last,ans;

while(cin>>n){
	for(j=1;j<=n;j++){
		cin>>front[j]>>back[j];
		/*front[j]=rand();
		back[j]=rand();*/
	}
	bubble();
	last=0;
	ans=0;

	/*for(j=1;j<=n;j++){
		cout<<front[j]<<" ";
	}
	cout<<endl;	*/
	/*for(j=1;j<=n;j++){
		cout<<back[j]<<" ";
	}
	cout<<endl;*/
	for(j=1;j<=n;j++){
		if(back[j]>last){
			if(front[j]>last){
				ans+=back[j]-front[j];
			}
			else{
				ans+=back[j]-last;
			}
			last=back[j];
		}
	}
	cout<<ans<<endl;

}
   return 0;
}

int bubble(void){
		
	int p[101];
	int k,a,b,temp;

	for(a=1;a<=n;a++){
		for(b=1;b<=n-a;b++){
			if(front[b]>front[b+1]){
				temp=front[b+1];
				front[b+1]=front[b];
				front[b]=temp;
				temp=back[b+1];
				back[b+1]=back[b];
				back[b]=temp;
			}
		}
	}
	return 0;
}

/*header:C:\Program Files\Dev-Cpp\MinGW64\lib\gcc\x86_64-w64-mingw32\4.9.2\include
#include <bits/stdc++.h>
#include <algorithm>*/

