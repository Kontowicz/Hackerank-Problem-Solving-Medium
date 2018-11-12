#pragma once

namespace _5
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
}