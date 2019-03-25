//最短路径Dijkstra算法实现
/*
#include<iostream>
using namespace std;

int main()
{
	int e[10][10];//邻接矩阵
	int dis[10];//存1号的最短路径
	int book[10];
	int n, m;//n个顶点，m条边
	int u;//存最短dis里的顶点
	int inf = 99999999;//infinity存储一个我们认为的正无穷值
	int t1, t2, t3;
	cout << "输入n，m代表n个顶点和m条边";
	cin >> n >> m;
	for (int i = 1; i <= n; i++)  //初始化
		for (int j = 1; j <= n; j++)
		{
			if (i == j)
				e[i][j] = 0;
			else
				e[i][j] = inf;
		}
	//读入边
	cout << "下面输入边";
	for (int i = 1; i <= m; i++)
	{
		cin >> t1 >> t2 >> t3;
		e[t1][t2] = t3;
	}
	//初始化dis数组
	for (int i = 1; i <= n; i++)
		dis[i] = e[1][i];
	//初始化book数组
	for (int i = 1; i <= n; i++)
		book[i] = 0;
	book[1] = 1;
	//下面是Dijkstra算法的核心代码
	for (int i = 1; i <= n - 1; i++)
	{
		int min = 99999999;
		for (int j = 1; j <= n; j++)
		{
			if (book[j] == 0 && min > dis[j])
			{
				min = dis[j];
				u = j;
			}
		}
		book[u] = 1;
		for (int v = 1; v <= n; v++)
		{
			if (e[u][v] < inf)
			{
				if (dis[v] > dis[u] + e[u][v])
					dis[v] = dis[u] + e[u][v];
			}
		}
	}
	for (int i = 1; i <= n; i++)
		printf("%d", dis[i]);
	return 0;
}

*/

//邻接表
/*
int n,m,i;
u,v,w代表顶点1，顶点2，权重
int u[6],v[6],w[6]
int first[5],next[5];
scanf("%d %d",&n,&m);
//初始化first数组1~n-1,表示1~n-1暂时没有边，因为顶点n没有出边
for(int i=1;i<=n-1;i++)
   first[i]=-1;
   for(int i=1;i<=m;i++)
   {
   scanf("%d %d %d,&u[i],&v[i],&w[i]);//读入每一条边
   //下面两句是关键
   next[i]=first[u[i]];
   first[u[i]]=i;
   }
*/