#include <iostream>

#include "test.h"

#include "insert_sort.hpp"
#include "merge_sort.hpp"

int main()
{
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "-- test bgn" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	Test t;
	t.display();
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "-- test end" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;

	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "-- insert sort bgn" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	InsertSort is;
	is.display();
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "-- insert sort end" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;

	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "-- merge sort bgn" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	MergeSort ms;
	ms.display();
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "-- merge sort end" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;

	system("pause");
	return 0;
}