//���·��Dijkstra�㷨ʵ��
/*
#include<iostream>
using namespace std;

int main()
{
	int e[10][10];//�ڽӾ���
	int dis[10];//��1�ŵ����·��
	int book[10];
	int n, m;//n�����㣬m����
	int u;//�����dis��Ķ���
	int inf = 99999999;//infinity�洢һ��������Ϊ��������ֵ
	int t1, t2, t3;
	cout << "����n��m����n�������m����";
	cin >> n >> m;
	for (int i = 1; i <= n; i++)  //��ʼ��
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
	//��ʼ��dis����
	for (int i = 1; i <= n; i++)
		dis[i] = e[1][i];
	//��ʼ��book����
	for (int i = 1; i <= n; i++)
		book[i] = 0;
	book[1] = 1;
	//������Dijkstra�㷨�ĺ��Ĵ���
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

//�ڽӱ�
/*
int n,m,i;
u,v,w������1������2��Ȩ��
int u[6],v[6],w[6]
int first[5],next[5];
scanf("%d %d",&n,&m);
//��ʼ��first����1~n-1,��ʾ1~n-1��ʱû�бߣ���Ϊ����nû�г���
for(int i=1;i<=n-1;i++)
   first[i]=-1;
   for(int i=1;i<=m;i++)
   {
   scanf("%d %d %d,&u[i],&v[i],&w[i]);//����ÿһ����
   //���������ǹؼ�
   next[i]=first[u[i]];
   first[u[i]]=i;
   }
*/