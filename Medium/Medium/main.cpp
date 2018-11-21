#include "include_medium.h"

void print()
{
	std::vector<std::string> name;
	name.emplace_back("Extra long factorials");
	name.emplace_back("Pairs");
	name.emplace_back("Encryption");
	name.emplace_back("Climbing the leaderboard");
	name.emplace_back("Bigger is greater");
	name.emplace_back("The grid search");
	name.emplace_back("Fibonacci modified");
	name.emplace_back("Organizing containers of balls");
	name.emplace_back("Sherlock and valid string");
	name.emplace_back("Sherlock and anagrams");
	int max_len = name[0].length();
	for (auto it = name.begin(); it != name.end(); ++it)
	{
		if(max_len < (*it).length())
			max_len = (*it).length();
	}
	std::cout.width(max_len + std::to_string(name.size()).length());
	std::cout << "Medium:" << std::endl;
	int cnt(1);
	for (int i = 0; i < name.size(); ++i)
	{
		std::cout.width(max_len + std::to_string(name.size()).length());
		std::cout<< std::left << cnt++;
		std::cout.width(max_len + 2);
		std::cout.fill('-');
		std::cout << std::internal << name[i] << std::endl;
	}
}



int main()
{
	int n(0);
	do
	{
		print();
		std::cin>>n;
		std::cin.ignore();
		switch(n)
		{
			case 1: _1::run(); break;
			case 2: _2::run(); break;
			case 3: _3::run(); break;
			case 4: _4::run(); break;
			case 5: _5::run(); break;
			case 6: _6::run(); break;
			case 7: _7::run(); break;
			case 8: _8::run(); break;
			case 9: _9::run(); break;
			case 10: _10::run(); break;
			case 0: break;
		}
	} while(n > 0);
}
