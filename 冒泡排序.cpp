#include<bits/stdc++.h>
using namespace std;
int main()
{
	int temp=0;//缓存区 
	int len[10]={};
	for(int turn=0;turn<10;turn++){
		cout<<"请输入第"<<turn+1<<"项的值"<<endl;
		cin>>len[turn];
	}
	//获取数值到列表 
	int once=20;//迭代次数 
	//次数越多越精准 
	cout<<"迭代几次(迭代次数越多越精准 )?"<<endl;
	cin>>once;
	//获取迭代次数 
	for(int turn4=0;turn4<once;turn4++){
		for(int turn2=0;turn2<10;turn2++){
			if (len[turn2]<len[turn2+1]){
			temp=len[turn2];
			len[turn2]=len[turn2+1];
			len[turn2+1]=temp;
			/*
			(test)   
			cout<<len[turn2]<<endl; 
			cout<<len[turn2+1]<<endl;
			cout<<" "<<endl;
			*/
		    }
		}
	}
	//排序部分 
	cout<<"排序完成"<<endl;
	for(int turn3=0;turn3<10;turn3++){
		cout<<len[turn3]<<endl;
	}
	cin>>temp;
	//可以从第一项获取最大值，从最后一项获取最小值 
	return 0;
}
