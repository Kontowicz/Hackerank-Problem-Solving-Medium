#pragma once
#include <unordered_map>
#include <iostream>

namespace  _10
{
	int pairs(int k, std::vector<int> & arr) {
		std::unordered_map<long, int> pair;

		for (int b : arr)
		{
			if (pair.count(b + k))
				pair[b + k]++;
			else
				pair[b + k] = 1;
		}

		long cnt = 0;

		for (int a : arr)
		{
			if (pair.count(a))
				cnt += pair[a];
		}

		return cnt;
	}

	void run()
	{
		std::cout << "Pairs.\nEnter vector size:\n";
		int size = 0;
		std::vector<int> data;
		for(int i = 0; i < size; ++i)
		{
			int tmp = 0; 
			std::cin >> tmp;
			data.emplace_back(tmp);
		}

		std::cout << "\nEnter k:\n";
		int k = 0;
		std::cin >> k;
		std::cout << "Result: " << pairs(k, data) << "\n";
	}
}
