/*
����ͼ��0��ʾ����1��ʾ½�� 10*10��ά����С�ߵķɻ����ή���ڣ�6��8����
������Ҫ�����С�߽������ڵ�����������ж��ٸ����ӣ�
1110000011
1010111011
1010111101
1100011100
0000001110
0111011110
0111111110
0011111100
0001111011
0000000010
����õ���������ȵķ���
*/
/*
#include<iostream>
using namespace std;
int a[11][11] = { {0,0,0,0,0,0,0,0,0,0,0},
		{0,1,1,1,0,0,0,0,0,1,1 },{0,1,0,1,0,1,1,1,0,1,1 },
		{0,1,0,1,0,1,1,1,1,0,1 },{0,1,1,0,0,0,1,1,1,0,0 },
		{0,0,0,0,0,0,0,1,1,1,0 },{0,0,1,1,1,0,1,1,1,1,0 },
		{0,0,1,1,1,1,1,1,1,1,0 },{0,0,0,1,1,1,1,1,1,0,0 },
		{0,0,0,0,1,1,1,1,0,1,1 },{0,0,0,0,0,0,0,0,0,1,0 },
};//��ͼ
int book[11][11];
int sum;

void dfs(int x, int y, int color)
{
	int next[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };//�ֱ����ĸ�������
	int nextx, nexty;
	for (int k = 0; k < 4; k++)
	{
		nextx = x + next[k][0];
		nexty = y + next[k][1];
		if (nextx < 1 || nextx>10 || nexty < 1 || nexty>10)
			continue;
		if ((a[nextx][nexty] == 1) && (book[nextx][nexty] == 0))
		{
			book[nextx][nexty] = 1;
			a[nextx][nexty] = -color;
			dfs(nextx, nexty, color);
		}
	}
}
int main()
{
	int color=0;
	for(int i=1;i<=10;i++)
		for (int j = 1; j <= 10; j++)
		{
			if (a[i][j] == 1 && book[i][j] == 0)
			{
				color++;
				dfs(i, j, color);
			}
		}
	cout << color<<"��С��"<<endl;
	for (int i = 1; i <= 10; i++)
		for (int j = 1; j <= 10; j++)
		{
			cout << a[i][j];
			if (j == 10)
				cout << endl;
		}
	return 0;
}
*/