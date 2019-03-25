/*
迷宫
0 0 1 0
0 0 0 0
0 0 1 0
0 1 0 0
0 0 0 1
1代表障碍，0代表可以通过
输出(0,0)到(p,q)的步数
*/
//广度优先解决
/*
#include<iostream>
using namespace std;

struct note
{
	int x;//横坐标
	int y;//纵坐标
	int step;//步数
};

int main()
{
	bool flag = 0;
	note queue[100];//队列实现广度优先算法
	int head = 1, tail = 1;//实现队列,tail指向队尾后面的一个指针
	int a[10][10];//地图
	int book[10][10] = { 0 };//要初始化记录点是否到达过
	int n = 5, m = 4;//行和列数
	int p = 4, q = 3;//终点
	int next[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };//分别向四个方向走
	for (int i = 1; i <= n; i++) //初始化地图
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
	//初始化地图
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
			int nextstep = queue[head].step+1;//注意这里要+1 不能用++不然queue[head].step也会自增
			
			if (nextx<1 || nextx>n || nexty<1 || nexty>m)//超过地图则continue，跳过这次循环
				continue;
			
			if ((book[nextx][nexty] == 0) && (a[nextx][nexty] == 0))//判断是否有障碍或走过了
			{
				queue[tail].x = nextx;
				queue[tail].y = nexty;
				queue[tail].step = nextstep;//将新的点放入队列
				book[nextx][nexty] = 1;//标记已经走过
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
	cout << queue[tail - 1].step;//输出tail前一个即终点的步数
	return 0;
}

*/
