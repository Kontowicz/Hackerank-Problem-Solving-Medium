#pragma once
#include <string>
#include <vector>
#include <iterator>

namespace _5
{
	std::string gridSearch(std::vector<std::string> grid, std::vector<std::string> pattern) 
	{		
		for (int i = 0; i <= grid.size() - pattern.size(); i++)
			for (int j = 0; j <= grid[0].size() - pattern[0].length(); j++)
			{
				int p = 0, k = i;
				while (grid[k].substr(j, pattern[0].size()) == pattern[p])
				{
					if (k - i + 1 == pattern.size())
						return "YES";

					k++, p++;
				}
			}

		return "NO";
	}

	void run()
	{
		std::cout << "The grid search.\nEnter grid and patterns size:\n";
		int grid_size, patterns_size;
		std::vector<std::string> grid;
		std::vector<std::string> pattern;
		std::string tmp;
		for (int i = 0; i < grid_size; ++i)
		{
			std::cin >> tmp;
			grid.push_back(tmp);
		}
			
		for (int i = 0; i < patterns_size; ++i)
		{
			std::cin >> tmp;
			pattern.push_back(tmp);
		}

		std::cout << "\nResult:";
		std::cout << gridSearch(grid, pattern);
	}
}
