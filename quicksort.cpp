//��������

/*
void quicksort(int *a, int left, int right)
{
	int t;
	if (left > right)
		return;
	int i, j;
	int i = left;
	int j = right;
	while (i != j)
	{
		//�ȴ��ұ߿�ʼ��С�ڻ�׼ֵ��
		while (a[j] >= a[left] && i < j)
			j--;
		//�ٴ���߿�ʼ���ڻ�׼ֵ��
		while (a[i] <= a[left] && i < j)
			i++;
		if (i < j)
		{
			
			//����
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}

	}
	//��׼ֵ��λ
	t = a[i];
	a[i] = a[left];
	a[left] = t;
	//�ݹ�
	quicksort(a,left, i - 1);
	quicksort(a,i + 1, right);
}

*/