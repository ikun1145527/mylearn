#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[3][4]={{23,653,897,809},{522,75,971,314},{2341,975,7,657,}};
	int b[4][3]={};
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			b[j][i]=a[i][j];
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
}
