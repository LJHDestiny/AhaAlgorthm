/*
#include<iostream>
using namespace std;
// 输出1-9的全排列，利用的DFS（深度优先搜索）
int a[10];//盒子
int book[10];//记录放了那些数字
int n;
void dfs(int step);
int main()
{
	
	cin >> n;
	dfs(1);
	
	return 0;
}

void dfs(int step)
{
	if (step == (n + 1))
	{
		//输出一种排列（1-n）
		for (int i = 1; i <= n; i++)
			cout << a[i];
		cout << endl;
		return; //返回之前的一步（最近一次调用dfs函数的地方）
	}
	//
	for (int i = 1; i <= n; i++)
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