/*
迷宫
0 0 1 0
0 0 0 0
0 0 1 0
0 1 0 0
0 0 0 1
1代表障碍，0代表可以通过
输出(0,0)到(p,q)的步数
*/
//深度优先解决
/*
#include<iostream>
using namespace std;

int n, m;//地图的行，列
int p, q;//目标的位置
int min=99;//最少的步数
int a[10][10];//地图
int book[10][10];//记录点是否到达过

void dfs(int x,int y,int step)
{
	int next[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };//分别向四个方向走
	if ((x == p) && (y == q))
	{
		if (min > step)
		{
			min = step;
		}
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		int nextx = x + next[i][0];
		int nexty = y + next[i][1];
		if (nextx<1 || nextx>n || nexty<1 || nexty>m)//超过地图则continue，跳过循环
			continue;
		if ((a[nextx][nexty]==0)&&(book[nextx][nexty]==0))
		{
			
			book[nextx][nexty] = 1;
			dfs(nextx, nexty, step+1);
			book[nextx][nexty] = 0;
		}
	}
	return;
}

int main()
{
	n = 5, m = 4;
	//
	for (int i = 1; i <= n; i++) //初始化地图
		for (int j = 1; j <= m; j++)
			a[i][j] = 0;
	a[1][3] = 1;
	a[3][3] = 1;
	a[4][2] = 1;
	a[5][4] = 1;
	for (int i = 1; i <= n; i++) 
		for (int j = 1; j <= m; j++)
		{
			cout << a[i][j];
			if (j == m)
				cout << endl;
		}
	//
    p = 4, q = 3;
	book[1][1] = 1;//起始点是（1，1），终点（4，3）
	dfs(1, 1, 0);//dfs
	cout << min;
	return 0;

}

*/
