//���·��Floyd-Warshall�㷨��ʵ��
/*
#include<iostream>
using namespace std;

int main()
{
	int e[10][10];//�ڽӾ���
	int n, m;//n�����㣬m����
	int inf = 99999999;//infinity�洢һ��������Ϊ��������ֵ
	int t1, t2, t3;
	cout << "����n��m����n�������m����";
	cin >> n >> m;
	for(int i=1;i<=n;i++)  //��ʼ��
		for (int j = 1; j <= n; j++)
		{
			if (i == j)
				e[i][j] = 0;
			else
				e[i][j] = inf;
		}
	//�����
	cout << "���������";
	for (int i = 1; i <= m; i++)
	{
		cin >> t1 >> t2 >> t3;
		e[t1][t2] = t3;
	}
	//������Floyd-Warshall�㷨���Ĵ���
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			for (int k = 1; k <= n; k++)
			{
				if (e[j][k] > e[j][i] + e[i][k])
					e[j][k] = e[j][i] + e[i][k];
			}

	//������ս��
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



