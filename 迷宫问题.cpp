/*
�Թ�
0 0 1 0
0 0 0 0
0 0 1 0
0 1 0 0
0 0 0 1
1�����ϰ���0�������ͨ��
���(0,0)��(p,q)�Ĳ���
*/
//������Ƚ��
/*
#include<iostream>
using namespace std;

int n, m;//��ͼ���У���
int p, q;//Ŀ���λ��
int min=99;//���ٵĲ���
int a[10][10];//��ͼ
int book[10][10];//��¼���Ƿ񵽴��

void dfs(int x,int y,int step)
{
	int next[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };//�ֱ����ĸ�������
	if ((x == p) && (y == q))
	{
		if (min > step)
		{
			min = step;
		}
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		int nextx = x + next[i][0];
		int nexty = y + next[i][1];
		if (nextx<1 || nextx>n || nexty<1 || nexty>m)//������ͼ��continue������ѭ��
			continue;
		if ((a[nextx][nexty]==0)&&(book[nextx][nexty]==0))
		{
			
			book[nextx][nexty] = 1;
			dfs(nextx, nexty, step+1);
			book[nextx][nexty] = 0;
		}
	}
	return;
}

int main()
{
	n = 5, m = 4;
	//
	for (int i = 1; i <= n; i++) //��ʼ����ͼ
		for (int j = 1; j <= m; j++)
			a[i][j] = 0;
	a[1][3] = 1;
	a[3][3] = 1;
	a[4][2] = 1;
	a[5][4] = 1;
	for (int i = 1; i <= n; i++) 
		for (int j = 1; j <= m; j++)
		{
			cout << a[i][j];
			if (j == m)
				cout << endl;
		}
	//
    p = 4, q = 3;
	book[1][1] = 1;//��ʼ���ǣ�1��1�����յ㣨4��3��
	dfs(1, 1, 0);//dfs
	cout << min;
	return 0;

}

*/
