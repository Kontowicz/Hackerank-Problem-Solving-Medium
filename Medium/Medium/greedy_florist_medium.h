#pragma once
#include <iterator>
#include <vector>
#include <algorithm>
#include <iostream>

namespace _12
{
	int getMinimumCost(int k, std::vector<int> c) {
		std::sort(c.begin(), c.end(), std::greater<int>());

		int cost = 0;

		for (auto it = c.begin(); it < c.end(); ++it)
		{
			cost += (*it)*(static_cast<int>(std::distance(c.begin(), it) / k) + 1);
		}

		return cost;
	}

	void _run()
	{
		std::cout << "Greedy florist.\nEnter k then vector size.\n";
		int k = 0, size = 0;
		std::cin >> k >> size;
		std::vector<int> data;
		for(int i = 0; i < size; ++i)
		{
			int tmp = 0;
			std::cin >> tmp;
			data.push_back(tmp);
		}

		std::cout << "Reslt: " << getMinimumCost(k, data) << std::endl;
	}
}
