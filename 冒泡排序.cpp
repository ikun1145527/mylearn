#include<bits/stdc++.h>
using namespace std;
int main()
{
	int temp=0;//������ 
	int len[10]={};
	for(int turn=0;turn<10;turn++){
		cout<<"�������"<<turn+1<<"���ֵ"<<endl;
		cin>>len[turn];
	}
	//��ȡ��ֵ���б� 
	int once=20;//�������� 
	//����Խ��Խ��׼ 
	cout<<"��������(��������Խ��Խ��׼ )?"<<endl;
	cin>>once;
	//��ȡ�������� 
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
	//���򲿷� 
	cout<<"�������"<<endl;
	for(int turn3=0;turn3<10;turn3++){
		cout<<len[turn3]<<endl;
	}
	cin>>temp;
	//���Դӵ�һ���ȡ���ֵ�������һ���ȡ��Сֵ 
	return 0;
}
