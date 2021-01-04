#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int tmp[20000],p[100000000];

void merge(int l,int m,int r){
	int j=1,maxl=m,k=l;	//j is the index of tmp[],maxl is the max of l,k is the initial index of these two merging array
	m++;	//now m is the initial index of the right array
	while(l<=maxl&&m<=r){
		if(p[l]<p[m]){
			tmp[j]=p[l];
			j++;
			l++;

		}
		else{	//if p[m]==p[l] or p[m]<p[l] then put p[m] in tmp[]
			tmp[j]=p[m];
			j++;
			m++;
		}
	}
	
	while(l<=maxl){		//maxl=original m
		tmp[j]=p[l];
		j++;
		l++;
	}
	while(m<=r){
		tmp[j]=p[m];
		j++;
		m++;
	}
	j--;	//j前面多加了一次 
	for(int x=0;x<j;x++){
		p[k+x]=tmp[x+1];
	}

}

void divide(int l,int r){
	if(l<r){
		int m=(l+r)/2;		 
		divide(l,m);
		divide(m+1,r);
		merge(l,m,r);
	}
}



void print(int k){
	int j;
	cout<<"p[] is ";
	for(j=1;j<=k;j++){
		cout<<p[j]<<" ";
	}
}


int main(void)
{
srand( time(NULL) );
int j,k;
cin>>k;
for(j=1;j<=k;j++){
	p[j]=rand();
	//cin>>p[k];
}

divide(1,k);
print(k);

   return 0;
}


