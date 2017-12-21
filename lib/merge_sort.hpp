#ifndef __ITA_MERGE_SORT_HPP__
#define __ITA_MERGE_SORT_HPP__

#include <iostream>

class MergeSort
{
public:
	MergeSort() : data{ 12, 6, 7, 10, 1, 5, 2, 7, 9, 4 }
	{
	}

	void merge(int a[], int left, int mid, int right, int temp[])
	{
		int i = left, j = mid + 1;
		int m = mid, n = right;
		int k = 0;

		while (i <= m && j <= n)
		{
			if (a[i] <= a[j])
				temp[k++] = a[i++];
			else
				temp[k++] = a[j++];
		}

		while (i <= m)
			temp[k++] = a[i++];

		while (j <= n)
			temp[k++] = a[j++];

		memcpy(a + left, temp, sizeof(int) * k);
	}

	void merge_sort(int a[], int left, int right, int temp[])
	{
		if (left < right)
		{
			int min = (right + left) / 2;
			merge_sort(a, left, min, temp);
			merge_sort(a, min + 1, right, temp);
			merge(a, left, min, right, temp);
		}
	}

	void display()
	{
		int length = sizeof(data) / sizeof(int);

		std::cout << "before sort data is : ";
		for (int i = 0; i < length; ++i)
		{
			std::cout << data[i] << ", ";
		}
		std::cout << std::endl;

		int * temp = new int[length];
		merge_sort(data, 0, length-1, temp);
		delete[] temp;
		temp = nullptr;

		std::cout << " after sort data is : ";
		for (int i = 0; i < length; ++i)
		{
			std::cout << data[i] << ", ";
		}
		std::cout << std::endl;
	}

private:
	int data[10];
};

#endif // __ITA_MERGE_SORT_HPP__