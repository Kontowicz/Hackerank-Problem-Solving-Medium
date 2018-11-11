#pragma once
#include <algorithm>
#include <vector>
#include <iostream>

namespace  _1
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
}
