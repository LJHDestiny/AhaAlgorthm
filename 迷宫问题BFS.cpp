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

struct note
{
	int x;//������
	int y;//������
	int step;//����
};

int main()
{
	bool flag = 0;
	note queue[100];//����ʵ�ֹ�������㷨
	int head = 1, tail = 1;//ʵ�ֶ���,tailָ���β�����һ��ָ��
	int a[10][10];//��ͼ
	int book[10][10] = { 0 };//Ҫ��ʼ����¼���Ƿ񵽴��
	int n = 5, m = 4;//�к�����
	int p = 4, q = 3;//�յ�
	int next[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };//�ֱ����ĸ�������
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
	//��ʼ����ͼ
	queue[head].x = 1;
	queue[head].y = 1;
	queue[head].step = 0;
	book[1][1] = 1;
	tail++;
	
	while ((head < tail))
	{
		for (int k = 0; k < 4; k++)
		{
			int nextx = queue[head].x + next[k][0];
			int nexty = queue[head].y + next[k][1];
			int nextstep = queue[head].step+1;//ע������Ҫ+1 ������++��Ȼqueue[head].stepҲ������
			
			if (nextx<1 || nextx>n || nexty<1 || nexty>m)//������ͼ��continue���������ѭ��
				continue;
			
			if ((book[nextx][nexty] == 0) && (a[nextx][nexty] == 0))//�ж��Ƿ����ϰ����߹���
			{
				queue[tail].x = nextx;
				queue[tail].y = nexty;
				queue[tail].step = nextstep;//���µĵ�������
				book[nextx][nexty] = 1;//����Ѿ��߹�
				tail++;

			}
			if (nextx == p && nexty == q)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			break;
		}
		head++;
	}
	for (int i = 1; i < tail; i++)
	{
		cout << queue[i].x << queue[i].y<<queue[i].step<<endl;
	}
	cout << queue[tail - 1].step;//���tailǰһ�����յ�Ĳ���
	return 0;
}

*/
