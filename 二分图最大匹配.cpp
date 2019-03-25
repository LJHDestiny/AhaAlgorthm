// ��Ŀ������ɽ����ÿһ��ֻ��������λ��Ϊ�˰�ȫ�����ÿ��Ů����������һ��������һ�ţ�
//����ÿ���˶�����Լ���ʶ������һ��1��Ů����1��������һ�ţ����1��Ů�����Ժ�1������
//��һ��,1,2,3��ΪŮ����4��5��6Ϊ����

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
			//�����iδ����Ի����ҵ����µ����
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
	cout << "����n���㣬m����";
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		scanf_s("%d%d", &t1, &t2);
		e[t1][t2] = 1;
		e[t2][t1] = 1;//����ͼ
	}
	for (int i = 1; i <= n; i++)
		match[i] = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			book[j] = 0;//����ϴ�����ʱ�ı��
		if (dfs(i))
			sum++;
	}
	cout << sum<<endl;
	for (int i = 1; i <= n; i++)
		cout << match[i]<<"\t";
}