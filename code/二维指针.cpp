#include<iostream>
using namespace std;
int main()
{
	int**p;
	p=new int*[3];
	for(int i=0;i<3;i++)
	{
		p[i]=new int[3];
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			p[i][j]=j;
		}
	}
	for(int i=0;i<3;i++){
		cout<<"p["<<i<<"]的指针数组数据"<<endl;
		for(int j=0;j<3;j++){
			cout<<p[i][j];
		}
		cout<<endl;	
	}
 } 
