//Kruskal ��С�������㷨ʵ��
/*
#include<iostream>
using namespace std;

struct edge
{
	int u;//��һ������
	int v;//��һ������
	int w;//Ȩ��
};
struct edge e[10];
int f[7] = { 0 };//���鼯
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
		//�ȴ��ұ߿�ʼ��
		while (e[j].w >= e[left].w &&i<j)
		{
			j--;
		}
		//�ٴ���߿�ʼ��
		while (e[i].w <= e[left].w &&i < j)
		{
			i++;
		}
		if (i < j)
		{
			//����
			t = e[i];
			e[i] = e[j];
			e[j] = t;
		}
	}
	//��׼ֵ��λ
	t = e[i];
	e[i] = e[left];
	e[left] = t;

	quicksort(left, i - 1);//�����������
	quicksort(i + 1, right);//���������ұ�
	return;
}
// ���鼯���Ҹ��׵ĺ���
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

//���鼯�ϲ������Ӽ��Ϻ���
int merge(int v, int u)
{
	int t1, t2;
	t1 = getfather(v);
	t2 = getfather(u);
	if (t1 != t2)
	{
		f[t2] = t1;
		return 1; //1��ʾ����һ������
	}
	return 0;//0��ʾ��һ������
}

int main()
{
	//ͼ�ĳ�ʼ��
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
	//���鼯��ʼ��
	for (int i = 1; i <= n; i++)
	{
		f[i] = i;
	}
	//Kruskal�����㷨
	for (int i = 1; i <= m; i++)//��ʼ��С����ö��ÿ����
	{
		
		//�ж�һ�����Ƿ��Ѿ���ͨ�����ж��Ƿ���ͬһ������
		if (merge(e[i].u, e[i].v))
		{
			//����ñ�
			e_count++;
			sum = sum + e[i].w;
		}
		if (e_count == n - 1)//ѡ��n-1���ߣ��Ѿ�����n��������˳�
			break;
	}
	
	cout << sum;
	return 0;
}

*/