#pragma once
#include <string>

namespace _4
{
	std::string next_permutatuon(std::string tmp)
	{
		auto i = tmp.end()-1;
		while (i != tmp.begin() && *(i - 1) >= *i)
			--i;

		if(i == tmp.begin())
			return  tmp;

		auto j = tmp.end()-1;
		while(*j <= *(i-1))
			--j;

		std::iter_swap((i-1), j);
		j = tmp.end()-1;

		while( i < j)
		{
			std::iter_swap(i,j);
			++i;
			--j;
		}
		return tmp;
	}


	std::string biggerIsGreater(std::string w)
	{
		std::string test = next_permutatuon(w);
		if (test != w)
			return test;

		return "no answer";
	}

	void run()
	{
		std::cout << "Bigger is greater.\n";
		std::cout << "Enter string:\n";
		std::string data; 
		std::cin >> data;
		std::cout << biggerIsGreater(data);
	}
}
