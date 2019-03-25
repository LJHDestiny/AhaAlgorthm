/*
#include<iostream>
using namespace std;
// 1-9的扑克牌，放到9个盒子，使▢▢▢+▢▢▢=▢▢▢,输出成立的情况数
int a[10];//盒子
int book[10];//记录放了那些数字
int total; //成立的情况数
void dfs(int step);
int main()
{

	total = 0;
	dfs(1);
	cout << total / 2;//因为有重复，所以要除2
	return 0;
}

void dfs(int step)
{
	if (step == 10)//9个盒子都放了
	{
		if (a[1] * 100 + a[2] * 10 + a[3] + a[4] * 100 + a[5] * 10 + a[6] == a[7] * 100 + a[8] * 10 + a[9])
		{
			total++;
			cout << a[1] << a[2] << a[3] << "+" << a[4] << a[5] << a[6] << "=" << a[7] << a[8] << a[9]<<endl;
		}
		
		return; //返回之前的一步（最近一次调用dfs函数的地方）
	}
	//
	for (int i = 1; i <= 9; i++)
	{
		if (book[i] == 0)//判断数字是否使用
		{
			a[step] = i; //i数字放入盒子
			book[i] = 1; //标记i已经放入
			dfs((step + 1)); //下一个盒子
			book[i] = 0;  //从下一个盒子返回后，要收回当前的i数字
		}


	}
	return;
}

*/