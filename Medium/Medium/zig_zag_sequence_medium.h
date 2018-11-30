#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

namespace  _13
{
	void findZigZagSequence(std::vector < int > a, int n) {
		std::sort(a.begin(), a.end());
		long mi = (n + 1) / 2;
		std::sort(a.begin() + mi - 1, a.end(), std::greater<int>());

		for (int i : a)
			std::cout << i << " ";
		std::cout << "\n";
	}

	void run()
	{
		std::cout << "Zig zag sequence.\nEnter size:\n";
		int size = 0;
		std::cin >> size;
		std::vector<int> data;
		for(int i = 0; i < size; ++i)
		{
			int tmp = 0;
			std::cin >> tmp;
			data.emplace_back(tmp);
		}

		std::cout << "result:\n";
		findZigZagSequence(data, size);
		std::cout << "\n";
	}
}
