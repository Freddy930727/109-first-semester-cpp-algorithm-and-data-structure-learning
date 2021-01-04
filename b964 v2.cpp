#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(void)
{
int j,num;
int p[1000];

struct i{
	int max;
	int min;
	bool pass;
};
/*10
0 11 33 55 66 77  22 99 88 44*/

while(cin>>num){
	struct i lucky,worst;
	lucky={100,-1,false};
	worst={100,-1,true};
	for(j=0;j<num;j++){
		cin>>p[j];
		//p[j]=rand();
	}
	sort(p,p+num);

	for(j=0;j<num;j++){
		if(p[j]>=60&&p[j]<=lucky.max){
			lucky.max=p[j];
			lucky.pass=true;
		}
		else if(p[j]<60&&p[j]>worst.min){
			worst.min=p[j];
			worst.pass=false;
		}
		cout<<p[j]<<" ";
	}
	cout<<"\n";
	if(worst.pass==true){
		cout<<"best case";
	}
	else{
		cout<<worst.min;
	}
	cout<<"\n";

	if(lucky.pass==false){
		cout<<"worst case";
	}
	else{
		cout<<lucky.max;
	}
}


   return 0;
}

