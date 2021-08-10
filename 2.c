#include <stdio.h>
#include <stdlib.h>

void _maopao(int arr[], int sz)
{
	//确定趟数
	int t = sz - 1;
	int flag = 1;
	int i = 0;
	for (i = 0; i < t; i++)
	{
		int j = 0;
		for (j = 0; j < t - i; j++) //每趟比较的次数
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}

}

int main()
{
	int arr[] = { 5, 6, 8, 9, 7, 1, 2, 3 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	_maopao(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}