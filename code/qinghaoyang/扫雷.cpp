#include <iostream>
using namespace std;
int g[110][110];
int main()
{
	char c;
	int n,m;
	cout<<"请输入雷区范围例:3 3（最大值不超过110）"<<endl;
	cin>>n>>m;
	cout<<"请输入地雷所在处以及未知处，地雷用*代替，未知处用?代替,每一处用空格或回车隔开"<<endl ; 
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

