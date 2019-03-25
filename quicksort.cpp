//快速排序

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
		//先从右边开始找小于基准值的
		while (a[j] >= a[left] && i < j)
			j--;
		//再从左边开始大于基准值的
		while (a[i] <= a[left] && i < j)
			i++;
		if (i < j)
		{
			
			//交换
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}

	}
	//基准值归位
	t = a[i];
	a[i] = a[left];
	a[left] = t;
	//递归
	quicksort(a,left, i - 1);
	quicksort(a,i + 1, right);
}

*/