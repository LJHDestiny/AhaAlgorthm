//prim算法实现
/*
#include<iostream>
using namespace std;

int main()
{
	int n, m;
	int e[7][7], dis[7], book[7] = { 0 };
	int inf = 99999999;
	int count = 0, sum = 0;
	int t1, t2, t3;
	int min;
	int k;
	//初始化
	n = 6, m = 9;
	for (int i=1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (i == j) e[i][j] = 0;
			else
				e[i][j] = inf;
	for (int i = 1; i <= m; i++)
	{
		scanf_s("%d %d %d", &t1, &t2, &t3);
		e[t1][t2] = t3;
		e[t2][t1] = t3;
	}
	for (int i = 1; i <= n; i++)
		dis[i] = e[1][i];
	//prim核心部分
	book[1] = 1;//将1加入生成树
	count++;
	while (count < n)
	{
		min = inf;
		for (int i = 1; i <= n; i++)
		{
			if (book[i] == 0 &&dis[i] < min)
			{
				min = dis[i];
				k = i;
			}
		}
		book[k] = 1;
		count++;
		sum = sum + dis[k];
		//找到新的点之后扫描新的点所以边，更新dis数组
		for (int i = 1; i <= n; i++)
		{
			if (book[i] == 0 && dis[i] > e[k][i])
				dis[i] = e[k][i];
		}
	}
	cout << sum;
}
*/