/*
#include<iostream>
using namespace std;
// ���1-9��ȫ���У����õ�DFS���������������
int a[10];//����
int book[10];//��¼������Щ����
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
		//���һ�����У�1-n��
		for (int i = 1; i <= n; i++)
			cout << a[i];
		cout << endl;
		return; //����֮ǰ��һ�������һ�ε���dfs�����ĵط���
	}
	//
	for (int i = 1; i <= n; i++)
	{
		if (book[i] == 0)//�ж������Ƿ�ʹ��
		{
			a[step] = i; //i���ַ������
			book[i] = 1; //���i�Ѿ�����
			dfs((step + 1)); //��һ������
			book[i] = 0;  //����һ�����ӷ��غ�Ҫ�ջص�ǰ��i����
		}
		
		
	}
	return;
}

*/