//Bellman_Ford 队列优化 时间复杂度O（NM）
/*核心算法
for(int i=1;i<=n-1;i++)
for(int j=1;j<=m;j++)
if( dis[v[i]]>dis[u[i]]+w[i])//尝试对每一条边进行松弛
    dis[v[i]]=dis[u[i]]+w[i];
*/
/*
#include<iostream>
using namespace std;
int main()
{
	
	int n, m;//n个顶点，m条边
	int k;
	int inf = 99999999;//infinity存储一个我们认为的正无穷值
	int u[10], v[10], w[10];
	//邻接表
	int first[10], next[10];
	int dis[6] = { 0 }, book[6] = { 0 };
	int que[101] = { 0 }, head = 1, tail = 1;
	//初始化dis数组，这里是1号顶点到其余各个顶点的初始路程
	cout << "输入n，m";
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		dis[i] = inf;
	dis[1] = 0;
	//初始化book数组
	for (int i = 1; i <= n; i++)
		book[i] = 0;
	//初始化first数组
	for (int i = 1; i <= n; i++)
		first[i] = -1;
	//读入每条边
	for (int i = 1; i <= m; i++)
	{
		cin >> u[i] >> v[i] >> w[i];
		next[i] = first[u[i]];
		first[u[i]] = i;
	}
	//1 号顶点入队
	que[tail] = 1; tail++;
	book[1] = 1;
	while (head < tail)
	{
		k = first[que[head]];//当前需要处理的队首顶点
		while (k != -1)//扫描当前顶点所有边
		{
			if (dis[v[k]] > dis[u[k]] + w[k])//判断是否松弛成功
			{
				dis[v[k]] = dis[u[k]] + w[k];
				//用book数组判断顶点v[k]是否在队列中，使用数组标记就不用从head到tail扫一遍
				if (book[v[k]] == 0)
				{
					que[tail] = v[k];
					tail++;
					book[v[k]] = 1;

				}
			}
			k = next[k];
		}
		//出队
		book[que[head]] = 0;
		head++;
	}
	for (int i = 1; i <= n; i++)
		cout << dis[i];
	return 0;
}

*/