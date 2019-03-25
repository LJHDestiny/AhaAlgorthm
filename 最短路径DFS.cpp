/*
#include<iostream>
using namespace std;

int e[10][10];//邻接矩阵
int book[10];//记录已经到过的城市
//cur是当前所在城市编号，dis是当前已经走过的路程
int n;//n个城市，n也是目的地
int min = 99999;//最短路径
void dfs(int cur,int dis)
{
	if (min < dis)//已经大于最短路径了没必要继续了
		return;
	if (cur == n)
	{
		if (min > dis)
		{
			min = dis;
		}
		return;
	}
	//从1-n开始尝试
	for (int i = 1; i <= n; i++)
	{
		if ((e[cur][i] != -1) && (book[i] == 0))
		{
			book[i] = 1;
			dfs(i, dis + e[cur][i]);
			book[i] = 0;
		}
	}
	return;
}

int main()
{
	n = 5;
	
	for(int i=1;i<=n;i++)
		for (int j = 1; j <= n; j++)
		{
			if (i == j)
				e[i][j] = 0;
			else
				e[i][j] = -1;//-1表示a城市与b城市没有直接的道路
		}
	//下面初始化地图
	e[1][2] = 2;
	e[1][5] = 10;
	e[2][3] = 3;
	e[2][5] = 7;
	e[3][1] = 4;
	e[3][4] = 4;
	e[4][5] = 5;
	e[5][3] = 3;
	//初始完毕
	book[1] = 1;
	dfs(1, 0);
	cout << min;
	return 0;
}

*/