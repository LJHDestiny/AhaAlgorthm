/*
#include<iostream>
using namespace std;

int e[10][10];//�ڽӾ���
int book[10];//��¼�Ѿ������ĳ���
//cur�ǵ�ǰ���ڳ��б�ţ�dis�ǵ�ǰ�Ѿ��߹���·��
int n;//n�����У�nҲ��Ŀ�ĵ�
int min = 99999;//���·��
void dfs(int cur,int dis)
{
	if (min < dis)//�Ѿ��������·����û��Ҫ������
		return;
	if (cur == n)
	{
		if (min > dis)
		{
			min = dis;
		}
		return;
	}
	//��1-n��ʼ����
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
				e[i][j] = -1;//-1��ʾa������b����û��ֱ�ӵĵ�·
		}
	//�����ʼ����ͼ
	e[1][2] = 2;
	e[1][5] = 10;
	e[2][3] = 3;
	e[2][5] = 7;
	e[3][1] = 4;
	e[3][4] = 4;
	e[4][5] = 5;
	e[5][3] = 3;
	//��ʼ���
	book[1] = 1;
	dfs(1, 0);
	cout << min;
	return 0;
}

*/