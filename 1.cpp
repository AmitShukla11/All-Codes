
#include <bits/stdc++.h>
using namespace std;

vector<int> use(10);

struct node
{
	char c;
	int v;
};

int check(node* nodeArr, const int count, string s1,
							string s2, string s3)
{
	int val1 = 0, val2 = 0, val3 = 0, m = 1, j, i;

	for (i = s1.length() - 1; i >= 0; i--)
	{
		char ch = s1[i];
		for (j = 0; j < count; j++)
			if (nodeArr[j].c == ch)
				break;

		val1 += m * nodeArr[j].v;
		m *= 10;
	}
	m = 1;

	for (i = s2.length() - 1; i >= 0; i--)
	{
		char ch = s2[i];
		for (j = 0; j < count; j++)
			if (nodeArr[j].c == ch)
				break;

		val2 += m * nodeArr[j].v;
		m *= 10;
	}
	m = 1;

	for (i = s3.length() - 1; i >= 0; i--)
	{
		char ch = s3[i];
		for (j = 0; j < count; j++)
			if (nodeArr[j].c == ch)
				break;

		val3 += m * nodeArr[j].v;
		m *= 10;
	}

	if (val3 == (val1 + val2))
		return 1;

	return 0;
}

bool permutation(const int count, node* nodeArr, int n,
				string s1, string s2, string s3)
{

	if (n == count - 1)
	{

		for (int i = 0; i < 10; i++)
		{

			if (use[i] == 0)
			{

				nodeArr[n].v = i;

				if (check(nodeArr, count, s1, s2, s3) == 1)
				{
					cout << "\nSolution found: ";
					for (int j = 0; j < count; j++)
						cout << " " << nodeArr[j].c << " = "
							<< nodeArr[j].v;
					return true;
				}
			}
		}
		return false;
	}

	for (int i = 0; i < 10; i++)
	{

		if (use[i] == 0)
		{

			nodeArr[n].v = i;

			use[i] = 1;

			if (permutation(count, nodeArr, n + 1, s1, s2, s3))
				return true;

			use[i] = 0;
		}
	}
	return false;
}