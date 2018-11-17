#pragma once
#include <string>
#include <algorithm>

namespace _2
{
	std::string encryption(std::string s) {
		std::string::iterator end_pos = std::remove(s.begin(), s.end(), ' ');
		s.erase(end_pos, s.end());
		int str_len_down = floor(sqrt(s.length()));
		int str_len_up = ceil(sqrt(s.length()));

		std::string to_return = "";
		if (str_len_down * str_len_up < s.length())
			str_len_down = str_len_up;

		for (int i = 0; i < str_len_up; i++)
		{
			for (int j = i; j < s.length(); j += str_len_up)
			{
				to_return += s[j];
			}
			to_return += " ";
		}
		return to_return;
	}

	void run()
	{
		std::cout << "Encyption.\n";
		std::cout << "Enter string:\n";
		std::string data;
		std::cin >> data;
		std::cout << encryption(data);
	}
}
