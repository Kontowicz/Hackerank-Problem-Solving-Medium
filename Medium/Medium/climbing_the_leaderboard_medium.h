#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

namespace _3
{
	std::vector<int> climbingLeaderboard(std::vector<int> scores, std::vector<int> alice) 
	{
		std::vector<int> to_return;
		scores.erase(std::unique(scores.begin(), scores.end()), scores.end());
		int score_cnt = scores.size() - 1;
		int end = 0;
		for (int i = 0; i < alice.size(); ++i)
		{
			for (int j = score_cnt; j >= 0; --j)
			{
				if (scores[j] > alice[i])
				{
					to_return.push_back(j + 2);
					score_cnt = j;
					end = i;
					break;
				}
			}
		}

		while (end < alice.size() - 1)
		{
			to_return.push_back(1);
			++end;
		}
		return to_return;
	}

	void run()
	{
		std::cout << "Climbing the leaderboard.\nEnter score and alice size:\n";
		int score_size, alice_size;
		std::cin >> score_size >> alice_size;
		std::vector<int> score;
		std::vector<int> alice;
		int tmp;
		std::cout << "Enter score:\n";
		for (int i = 0; i < score_size; ++i)
		{
			std::cin >> tmp;
			score.push_back(tmp);
		}
		std::cout << "Enter alice score:\n";
		for (int i = 0; i < alice_size; ++i)
		{
			std::cin >> tmp;
			alice.push_back(tmp);
		}

		std::cout << "\nResult:";
		std::vector<int> result = climbingLeaderboard(score, alice);
		
		for (int i : result)
			std::cout << i << " ";

		std::cout << "\n";
	}
}
