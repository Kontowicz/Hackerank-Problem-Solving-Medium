#pragma once
#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>

namespace _7
{
	std::string organizingContainers(std::vector<std::vector<int>> container) 
	{
		std::vector<int> vertical;
		std::vector<int> horizontal;

		for (int i = 0; i < container.size(); ++i)
		{
			horizontal.push_back(std::accumulate(container[i].begin(), container[i].end(), 0));
			int sum = 0;
			for (int j = 0; j < container[i].size(); ++j)
			{
				sum += container[j][i];
			}
			vertical.push_back(sum);
		}
		std::sort(vertical.begin(), vertical.end());
		std::sort(horizontal.begin(), horizontal.end());
		if (vertical == horizontal)
			return "Possible";

		return "Impossible";
	}

	void run()
	{
		std::cout << "Organizing containers of balls.\nEnter container size:\n";
		int size = 0;
		std::cin >> size;
		std::cout << "\nEnter container:\n";
		std::vector<std::vector<int>> con;
		int tmp; 
		for(int i = 0; i < size; ++i)
		{
			std::vector<int> row;
			for(int j = 0; j < size; ++j)
			{
				std::cin >> tmp;
				row.push_back(tmp);
			}
			con.push_back(row);
		}
		std::cout << "\nResult: " << organizingContainers(con);
	}
}
