//������������������������бߵ�Ȩֵ��ͬ�����
//������ת����������BFS
/*
#include<iostream>
using namespace std;

struct note
{
	int city;//����
	int step;//ת������
};

int main()
{
	int n = 5;//n��Ŀ�ĵ�
	int flag = 0;//�Ƿ�Ŀ�ĵ�
	note queue[10] ;
	int book[10] = { 0 };//��¼�����Ƿ��ڶ�����
	int e[10][10] = { 0 };//�ڽӾ��󣬱����б߶���1
	//��ʼ������
	for(int i=1;i<=5;i++)
		for (int j = 1; j <= 5; j++)
		{
			if (i == j)
				e[i][j] = 0;
			else
				e[i][j] = -1;
		}
	e[1][2] = 1;
	e[2][1] = 1;
	e[1][3] = 1;
	e[3][1] = 1;
	e[2][3] = 1;
	e[3][2] = 1;
	e[2][4] = 1;
	e[4][2] = 1;
	e[3][4] = 1;
	e[4][3] = 1;
	e[3][5] = 1;
	e[5][3] = 1;
	e[4][5] = 1;
	e[5][4] = 1;
	//����������ͼ������˫���
	int head = 1, tail = 1;
	queue[head].city = 1;
	queue[head].step = 0;
	book[1] = 1;
	tail++;
	while (head < tail)
	{
	    int cur = queue[head].city;
			for (int j = 1; j <= 5; j++)
			{
				if ((e[cur][j] != -1) && (book[j] == 0))
				{
					queue[tail].city = j;
					queue[tail].step = queue[head].step + 1;
					book[j] = 1;
					tail++;
					if (j == n)
					{
						flag = 1;
						break;
					}
				}
				
			}
			if (flag == 1)
				break;

		head++;

	}
	for (int i = 1; i <= tail-1; i++)
	{
		cout << queue[i].city << " " << queue[i].step<<endl;
	}
	cout << queue[tail - 1].step;//tailǰһ����Ĳ���Ҫ���
	return 0;


}
*/