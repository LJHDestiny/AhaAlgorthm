//prim�㷨ʵ��
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
	//��ʼ��
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
	//prim���Ĳ���
	book[1] = 1;//��1����������
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
		//�ҵ��µĵ�֮��ɨ���µĵ����Աߣ�����dis����
		for (int i = 1; i <= n; i++)
		{
			if (book[i] == 0 && dis[i] > e[k][i])
				dis[i] = e[k][i];
		}
	}
	cout << sum;
}
*/