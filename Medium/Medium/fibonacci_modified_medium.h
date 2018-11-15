#pragma once

namespace _6
{
	int fibonacciModified(int t1, int t2, int n) {
		int to_return = 0;
		for (int i = 2; i < n; ++i)
		{
			to_return = t1 + (t2*t2);
			t1 = t2;
			t2 = to_return;
		}
		return to_return;
	}

	void run()
	{
		std::cout << "Fibonacci modified.\nEnter t1, t2, n:\n";
		int t1, t2, n;
		std::cin >> t1 >> t2 >> n;
		std::cout << "Result: " << fibonacciModified(t1, t2, n);
	}
}