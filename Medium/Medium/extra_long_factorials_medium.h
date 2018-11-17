#pragma once
#include <algorithm>
#include <vector>
#include <iostream>

namespace _1
{
	std::vector<int> muptiply_big(std::vector<int> mul, int m)
	{
		std::vector<int> to_return;
		int carry = 0;
		for (auto it = mul.rbegin(); it != mul.rend(); ++it)
		{
			int result = *it*m + carry;
			to_return.push_back(result % 10);
			carry = result / 10;
		}
		while (carry)
		{
			to_return.push_back(carry % 10);
			carry /= 10;
		}
		std::reverse(to_return.begin(), to_return.end());
		return  to_return;
	}

	void run()
	{
		std::cout << "Extra long factorials.\nEnter m and mul size:\n";
		int m, mul_size;
		std::cin >> m >> mul_size;
		std::vector<int> mul;

		int tmp;
		std::cout << "Enter mul:\n";
		for (int i = 0; i < mul_size; ++i)
		{
			std::cin >> tmp;
			mul.push_back(tmp);
		}

		std::cout << "\nResult:";
		std::vector<int> result = muptiply_big(mul, m);

		for (int i : result)
			std::cout << i << " ";

		std::cout << "\n";
	}
}
