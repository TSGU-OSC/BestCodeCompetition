#include <iostream>
using namespace std;
int g[110][110];
int main()
{
	char c;
	int n,m;
	cout<<"������������Χ��:3 3�����ֵ������110��"<<endl;
	cin>>n>>m;
	cout<<"������������ڴ��Լ�δ֪����������*���棬δ֪����?����,ÿһ���ÿո��س�����"<<endl ; 
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			cin>>c;
			if(c=='*')g[i][j]=1;
			else g[i][j]=0;
		}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(g[i][j]!=0)cout<<"*";
			else cout<<g[i-1][j]+g[i-1][j+1]+g[i][j+1]+g[i+1][j+1]+g[i+1][j]+g[i+1][j-1]+g[i][j-1]+g[i-1][j-1];
		}
		cout<<endl;
	}
	return 0;
}

