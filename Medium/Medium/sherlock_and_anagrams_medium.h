#pragma once
#include <string>
#include <algorithm>
#include <iostream>
#include <unordered_map>

namespace _9
{
	int sherlockAndAnagrams(std::string s) {

		std::unordered_map<std::string, int> freq;

		for (int n = 1; n < s.size(); n++) {
			for (int j = 0; j < s.size() - n + 1; j++) {
				std::string w = s.substr(j, n);
				std::sort(w.begin(), w.end());
				freq[w]++;
			}
		}

		int to_return = 0;
		for (auto it : freq) {
			if (it.second >= 2) {
				to_return += it.second * (it.second - 1) / 2;
			}
		}
		return to_return;
	}

	void run()
	{
		std::cout << "Sherlock and anagrams.\nEnter string:\n";
		std::string tmp;
		std::cin >> tmp;
		std::cout << sherlockAndAnagrams(tmp);
	}
}
