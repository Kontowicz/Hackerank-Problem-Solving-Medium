#pragma once
#include <cmath>
#include <intrin.h>  
#include <iostream>

namespace _11
{
	long theGreatXor(long x) {
		//return (pow(2, (sizeof(x) * 8) - __builtin_clzll(x)) - x - 1); This you should use in hackerrank web page, otherwise you get an compillation error.
		return (pow(2, (sizeof(x) * 8) - __lzcnt(x)) - x - 1); // This with vs
	}

	void run()
	{
		std::cout << "The great xor.\n Enter value:";
		long val;
		std::cin >> val;
		std::cout << theGreatXor(val) << "\n";
	}
}
