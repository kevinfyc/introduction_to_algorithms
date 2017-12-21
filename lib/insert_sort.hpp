#ifndef __ITA_INSERT_SORT_HPP__
#define __ITA_INSERT_SORT_HPP__

#include <iostream>

class InsertSort
{
public:
	InsertSort() : data{ 12, 6, 7, 10, 1, 5, 2, 7, 9, 4 }
	{
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

		for (int i = 1; i < length; ++i)
		{
			int current = data[i];

			int j = i;
			for (; j > 0 && data[j - 1] > current; j--)
			{
				data[j] = data[j - 1];
			}
			data[j] = current;
		}
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

#endif // __ITA_INSERT_SORT_HPP__