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
���������󣬾��Ǵӣ�6��8����ʼ���й����������������չ���ĵ����0��������
*/
/*
#include<iostream>
using namespace std;
struct note {
	int x;
	int y;
};

int main()
{
	int next[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };//�ֱ����ĸ�������
	note queue[200];
	int head=1, tail=1;
	int sum = 0;//��¼�����Ŀ
	int a[11][11] = { {0,0,0,0,0,0,0,0,0,0,0},
		{0,1,1,1,0,0,0,0,0,1,1 },{0,1,0,1,0,1,1,1,0,1,1 },
		{0,1,0,1,0,1,1,1,1,0,1 },{0,1,1,0,0,0,1,1,1,0,0 },
		{0,0,0,0,0,0,0,1,1,1,0 },{0,0,1,1,1,0,1,1,1,1,0 },
		{0,0,1,1,1,1,1,1,1,1,0 },{0,0,0,1,1,1,1,1,1,0,0 },
		{0,0,0,0,1,1,1,1,0,1,1 },{0,0,0,0,0,0,0,0,0,1,0 },
	};
	int book[11][11] = { 0 };
	int nextx, nexty;
	int startx, starty;
	cout << "������ʼ����x,y";
	cin >> startx >> starty;
	head = 1;
	tail = 1;
	queue[head].x = startx;
	queue[head].y = starty;
	tail++;
	sum = 1;
	book[startx][starty] = 1;
	while (head < tail)
	{
		for (int i = 0; i < 4; i++)
		{
			nextx = queue[head].x + next[i][0];
			nexty = queue[head].y + next[i][1];
			if (nextx < 1 || nextx>10 || nexty < 1 || nexty>10)
				continue;
			if ((a[nextx][nexty] == 1) && (book[nextx][nexty] == 0))
			{
				queue[tail].x = nextx;
				queue[tail].y = nexty;
				book[nextx][nexty] = 1;
				tail++;
				sum++;

			}
		}
		head++;
	}
	cout << sum;

}

*/