//������ʵ�֣�����������
/*
#include<iostream>
using namespace std;
int heap[101];//��Ŷѵ�����
int n;//����ѵĴ�С

//�����������������е�������
void swap(int i, int j)
{
	int temp;
	temp = heap[i];
	heap[i] = heap[j];
	heap[j] = temp;
}

//�����µ�������
void siftdown(int i)
{
	int t;//��¼���Ľڵ�
	int flag=0;//��¼�Ƿ���Ҫ�����µ���
	//��i����ж��Ӳ�������Ҫ���������ͼ������µ���
	while (2 * i <= n && flag == 0)
	{
		//���ж������
		if (heap[i] < heap[2 * i])
			t = 2*i;
		else
			t = i;
		//�ж��Ҷ���
		if(2*i+1<=n)
		if (heap[t] < heap[2 * i + 1])
			t = 2 * i + 1;
		if (t != i)//���ڵ㲻�ǵ�ǰ�ڵ�
		{
			swap(t, i);
			i = t;//��t�ڵ��ٿ�ʼ����
		}
		else
		{
			//�������û�е������������
			flag = 1;
		}
	}
}

//�����Ѻ���
void creat()
{
	for (int i = n / 2; i >= 1; i--)
		siftdown(i);
}
//���ϵ���
void siftup(int i)
{
	int flag = 0;//��������Ƿ���Ҫ���ϵ���
	if (i == 1) return;//�Ѷ��ˣ����õ���
	while (i != 1 && flag == 0)
	{
		//�жϸ��ڵ��Ƿ��С
		if (heap[i] < heap[i / 2])
		{
			swap(i, i / 2);
		}
		else
		{
			flag = 1;//����Ҫ������
		}
		i = i / 2;//���±��iΪ���ڵ�ı�ţ��Ա���һ�μ������ϵ���
	}

}
void heapsort()
{
	while (n > 1)
	{
		swap(1, n);
		n--;
		siftdown(1);
	}
}
int main()
{
	int num = 14;
	//������14����,99,5,36,7,22,17,46,12,2,19,25,28,1,92
	n = 14;
	heap[1] = 99;
	heap[2] = 5;
	heap[3] = 36;
	heap[4] = 7;
	heap[5] = 22;
	heap[6] = 17;
	heap[7] = 46;
	heap[8] = 12;
	heap[9] = 2;
	heap[10] = 19;
	heap[11] = 25;
	heap[12] = 28;
	heap[13] = 1; 
	heap[14] = 92;
	//����
	creat();
	//������
	heapsort();

	for (int i = 1; i <= num; i++)//���ﲻ����n,��Ϊn��heapsort()���Ѿ���Ϊ1
	{
		cout << heap[i];
	}

	
}

*/