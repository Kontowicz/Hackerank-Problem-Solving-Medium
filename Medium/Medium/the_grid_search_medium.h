#pragma once
#include <string>
#include <vector>

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
}
