//最短路径Floyd-Warshall算法的实现
/*
#include<iostream>
using namespace std;

int main()
{
	int e[10][10];//邻接矩阵
	int n, m;//n个顶点，m条边
	int inf = 99999999;//infinity存储一个我们认为的正无穷值
	int t1, t2, t3;
	cout << "输入n，m代表n个顶点和m条边";
	cin >> n >> m;
	for(int i=1;i<=n;i++)  //初始化
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
	//下面是Floyd-Warshall算法核心代码
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			for (int k = 1; k <= n; k++)
			{
				if (e[j][k] > e[j][i] + e[i][k])
					e[j][k] = e[j][i] + e[i][k];
			}

	//输出最终结果
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			printf("%10d", e[i][j]);
		}
		cout << "\n";

	}
	return  0;
}

*/



