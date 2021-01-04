#include <iostream>
#include <cstdlib>
using namespace std;
	
int score[20],m,i;
void bubblesort(void);
void searchless(void);
void searchhigh(void);
int main(void)
{
cin>>m;
for(i=0;i<m;i++)
{
	cin>>score[i];
}
bubblesort();
searchless();
searchhigh();
   system("pause");
   return 0;
}

void bubblesort()
{
	int j,k,stay;
	for(j=0;j<m;j++){
		for(k=0;k<m;k++)
		{
			if(score[k]>score[k+1])
			{
				stay=score[k+1];
				score[k+1]=score[k];
				score[k]=stay;
			}
		}
	}
	for(k=0;k<m;k++){
	cout<<score[k];	
	if(k!=(m-1)){
		cout<<" ";
	}
	}
	cout<<"\n";
}

void searchhigh(){
	int x=0;
	while(score[x]<60){
		x++;
	}
	if(x==m){cout<<"worst case";
	}
	else {cout<<score[x];}
	cout<<"\n";
}

void searchless(){
	int x=0;
	if(score[0]>60){
		cout<<"best case";
	}
	else{
		while(score[x]<60){
			x++;
		}
		cout<<score[x];
	}
	cout<<"\n";
}




