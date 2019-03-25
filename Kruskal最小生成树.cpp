//Kruskal 最小生成树算法实现
/*
#include<iostream>
using namespace std;

struct edge
{
	int u;//上一个顶点
	int v;//下一个顶点
	int w;//权重
};
struct edge e[10];
int f[7] = { 0 };//并查集
int sum = 0;
int e_count = 0;

void quicksort(int left, int right)
{
	int i, j;
	edge t;
	if (left > right)
		return;
	i = left;
	j = right;
	while (i != j)
	{
		//先从右边开始找
		while (e[j].w >= e[left].w &&i<j)
		{
			j--;
		}
		//再从左边开始找
		while (e[i].w <= e[left].w &&i < j)
		{
			i++;
		}
		if (i < j)
		{
			//交换
			t = e[i];
			e[i] = e[j];
			e[j] = t;
		}
	}
	//基准值归位
	t = e[i];
	e[i] = e[left];
	e[left] = t;

	quicksort(left, i - 1);//继续处理左边
	quicksort(i + 1, right);//继续处理右边
	return;
}
// 并查集查找父亲的函数
int getfather(int v)
{
	if (f[v] == v)
		return v;
	else
	{
		f[v] = getfather(f[v]);
		return f[v];

	}
}

//并查集合并两个子集合函数
int merge(int v, int u)
{
	int t1, t2;
	t1 = getfather(v);
	t2 = getfather(u);
	if (t1 != t2)
	{
		f[t2] = t1;
		return 1; //1表示不是一个集合
	}
	return 0;//0表示是一个集合
}

int main()
{
	//图的初始化
	int n = 6, m = 9;
	e[1].v = 2; e[1].u = 4; e[1].w = 11;
	e[2].v = 3; e[2].u = 5; e[2].w = 13;
	e[3].v = 4; e[3].u = 6; e[3].w = 3;
	e[4].v = 5; e[4].u = 6; e[4].w = 4;
	e[5].v = 2; e[5].u = 3; e[5].w = 6;
	e[6].v = 4; e[6].u = 5; e[6].w = 7;
	e[7].v = 1; e[7].u = 2; e[7].w = 1;
	e[8].v = 3; e[8].u = 4; e[8].w = 9;
	e[9].v = 1; e[9].u = 3; e[9].w = 2;
	
	quicksort(1, m);
	//并查集初始化
	for (int i = 1; i <= n; i++)
	{
		f[i] = i;
	}
	//Kruskal核心算法
	for (int i = 1; i <= m; i++)//开始从小到大枚举每条边
	{
		
		//判断一条边是否已经联通，即判断是否在同一个集合
		if (merge(e[i].u, e[i].v))
		{
			//加入该边
			e_count++;
			sum = sum + e[i].w;
		}
		if (e_count == n - 1)//选了n-1条边，已经连了n个点可以退出
			break;
	}
	
	cout << sum;
	return 0;
}

*/