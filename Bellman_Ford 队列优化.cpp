//Bellman_Ford �����Ż� ʱ�临�Ӷ�O��NM��
/*�����㷨
for(int i=1;i<=n-1;i++)
for(int j=1;j<=m;j++)
if( dis[v[i]]>dis[u[i]]+w[i])//���Զ�ÿһ���߽����ɳ�
    dis[v[i]]=dis[u[i]]+w[i];
*/
/*
#include<iostream>
using namespace std;
int main()
{
	
	int n, m;//n�����㣬m����
	int k;
	int inf = 99999999;//infinity�洢һ��������Ϊ��������ֵ
	int u[10], v[10], w[10];
	//�ڽӱ�
	int first[10], next[10];
	int dis[6] = { 0 }, book[6] = { 0 };
	int que[101] = { 0 }, head = 1, tail = 1;
	//��ʼ��dis���飬������1�Ŷ��㵽�����������ĳ�ʼ·��
	cout << "����n��m";
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		dis[i] = inf;
	dis[1] = 0;
	//��ʼ��book����
	for (int i = 1; i <= n; i++)
		book[i] = 0;
	//��ʼ��first����
	for (int i = 1; i <= n; i++)
		first[i] = -1;
	//����ÿ����
	for (int i = 1; i <= m; i++)
	{
		cin >> u[i] >> v[i] >> w[i];
		next[i] = first[u[i]];
		first[u[i]] = i;
	}
	//1 �Ŷ������
	que[tail] = 1; tail++;
	book[1] = 1;
	while (head < tail)
	{
		k = first[que[head]];//��ǰ��Ҫ����Ķ��׶���
		while (k != -1)//ɨ�赱ǰ�������б�
		{
			if (dis[v[k]] > dis[u[k]] + w[k])//�ж��Ƿ��ɳڳɹ�
			{
				dis[v[k]] = dis[u[k]] + w[k];
				//��book�����ж϶���v[k]�Ƿ��ڶ����У�ʹ�������ǾͲ��ô�head��tailɨһ��
				if (book[v[k]] == 0)
				{
					que[tail] = v[k];
					tail++;
					book[v[k]] = 1;

				}
			}
			k = next[k];
		}
		//����
		book[que[head]] = 0;
		head++;
	}
	for (int i = 1; i <= n; i++)
		cout << dis[i];
	return 0;
}

*/