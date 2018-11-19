#pragma once
#include <algorithm>
#include <vector>
#include <iostream>

namespace _8
{
	std::string isValid(std::string s) {
		std::vector<int> occurences(25, 0);

		for (char ch : s)
			++occurences[ch - 97];

		std::sort(occurences.begin(), occurences.end());

		occurences.erase(std::remove(occurences.begin(), occurences.end(), 0), occurences.end());

		int min = *occurences.begin();
		int cnt = 0;
		bool first = true;
		if (occurences[0] != occurences[1])
			occurences.erase(occurences.begin());

		if (std::count(std::begin(occurences), std::end(occurences), *occurences.begin()) == occurences.size())
		{
			return "YES";
		}

		for (auto it = occurences.begin(); it != occurences.end(); ++it)
		{
			*it -= min;
			if (*it == 0)
			{
				continue;
			}
			else
			{
				if (!first || *it - 1 != 0)
				{
					++cnt;
				}
				first = false;

			}
		}

		if (cnt >= 1)
			return "NO";

		return "YES";
	}

	void run()
	{
		std::cout << "Sherlock and valid string. \nEnter string to test:";
		std::string data;
		std::cin >> data;
		std::cout << isValid(data);
		std::cout << "\n";
	}
}
