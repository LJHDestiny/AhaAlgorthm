//堆排序实现，这里是最大堆
/*
#include<iostream>
using namespace std;
int heap[101];//存放堆的数组
int n;//储存堆的大小

//交换函数，交换堆中的两个数
void swap(int i, int j)
{
	int temp;
	temp = heap[i];
	heap[i] = heap[j];
	heap[j] = temp;
}

//堆向下调整函数
void siftdown(int i)
{
	int t;//记录最大的节点
	int flag=0;//记录是否需要再向下调整
	//当i结点有儿子并且有需要继续调整就继续向下调整
	while (2 * i <= n && flag == 0)
	{
		//先判断左儿子
		if (heap[i] < heap[2 * i])
			t = 2*i;
		else
			t = i;
		//判断右儿子
		if(2*i+1<=n)
		if (heap[t] < heap[2 * i + 1])
			t = 2 * i + 1;
		if (t != i)//最大节点不是当前节点
		{
			swap(t, i);
			i = t;//从t节点再开始调整
		}
		else
		{
			//这里代表没有调整，无需调整
			flag = 1;
		}
	}
}

//建立堆函数
void creat()
{
	for (int i = n / 2; i >= 1; i--)
		siftdown(i);
}
//向上调整
void siftup(int i)
{
	int flag = 0;//用来标记是否需要向上调整
	if (i == 1) return;//堆顶了，不用调整
	while (i != 1 && flag == 0)
	{
		//判断父节点是否更小
		if (heap[i] < heap[i / 2])
		{
			swap(i, i / 2);
		}
		else
		{
			flag = 1;//不需要调整了
		}
		i = i / 2;//更新编号i为父节点的编号，以便下一次继续向上调整
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
	//这里用14的数,99,5,36,7,22,17,46,12,2,19,25,28,1,92
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
	//建堆
	creat();
	//堆排序
	heapsort();

	for (int i = 1; i <= num; i++)//这里不能用n,因为n在heapsort()里已经减为1
	{
		cout << heap[i];
	}

	
}

*/