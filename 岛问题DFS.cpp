/*
航海图，0表示海洋，1表示陆地 10*10二维矩阵，小哼的飞机将会降落在（6，8）处
现在需要计算出小哼降落所在岛的面积（即有多少个格子）
1110000011
1010111011
1010111101
1100011100
0000001110
0111011110
0111111110
0011111100
0001111011
0000000010
这次用的是深度优先的方法
*/
/*
#include<iostream>
using namespace std;
int a[11][11] = { {0,0,0,0,0,0,0,0,0,0,0},
		{0,1,1,1,0,0,0,0,0,1,1 },{0,1,0,1,0,1,1,1,0,1,1 },
		{0,1,0,1,0,1,1,1,1,0,1 },{0,1,1,0,0,0,1,1,1,0,0 },
		{0,0,0,0,0,0,0,1,1,1,0 },{0,0,1,1,1,0,1,1,1,1,0 },
		{0,0,1,1,1,1,1,1,1,1,0 },{0,0,0,1,1,1,1,1,1,0,0 },
		{0,0,0,0,1,1,1,1,0,1,1 },{0,0,0,0,0,0,0,0,0,1,0 },
};//地图
int book[11][11];
int sum;

void dfs(int x, int y, int color)
{
	int next[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };//分别向四个方向走
	int nextx, nexty;
	for (int k = 0; k < 4; k++)
	{
		nextx = x + next[k][0];
		nexty = y + next[k][1];
		if (nextx < 1 || nextx>10 || nexty < 1 || nexty>10)
			continue;
		if ((a[nextx][nexty] == 1) && (book[nextx][nexty] == 0))
		{
			book[nextx][nexty] = 1;
			a[nextx][nexty] = -color;
			dfs(nextx, nexty, color);
		}
	}
}
int main()
{
	int color=0;
	for(int i=1;i<=10;i++)
		for (int j = 1; j <= 10; j++)
		{
			if (a[i][j] == 1 && book[i][j] == 0)
			{
				color++;
				dfs(i, j, color);
			}
		}
	cout << color<<"个小岛"<<endl;
	for (int i = 1; i <= 10; i++)
		for (int j = 1; j <= 10; j++)
		{
			cout << a[i][j];
			if (j == 10)
				cout << endl;
		}
	return 0;
}
*/