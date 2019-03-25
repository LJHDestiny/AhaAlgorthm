// 题目：做过山车，每一排只有两个座位，为了安全起见，每个女生都必须与一个男生坐一排，
//但是每个人都想和自己认识的人坐一起。1号女生和1号男生坐一排，因此1号女生可以和1号男生
//坐一起,1,2,3号为女生，4，5，6为男生

#include<iostream>
using namespace std;

int e[101][101];
int match[101];
int book[101];
int n, m;
int dfs(int u)
{
	for (int i = 1; i <= n; i++)
	{
		if (book[i] == 0 && e[u][i] == 1)
		{
			book[i] = 1;
			//如果点i未被配对或者找到了新的配对
			if (match[i] == 0 || dfs(match[i]))
			{
				match[i] = u;
				match[u] = i;
				return 1;
			}
		}
		
	}
	return 0;
}

int main()
{
	int sum = 0;
	int t1, t2;
	cout << "输入n个点，m条边";
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		scanf_s("%d%d", &t1, &t2);
		e[t1][t2] = 1;
		e[t2][t1] = 1;//无向图
	}
	for (int i = 1; i <= n; i++)
		match[i] = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			book[j] = 0;//清空上次搜索时的标记
		if (dfs(i))
			sum++;
	}
	cout << sum<<endl;
	for (int i = 1; i <= n; i++)
		cout << match[i]<<"\t";
}