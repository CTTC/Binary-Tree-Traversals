#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::ios_base;
using std::cin;
using std::cout;

class TreeOrders
{
	int n;
	vector<int> key;
	vector<int> left;
	vector<int> right;

public:
	void read()
	{
		cin >> n;
		key.resize(n);
		left.resize(n);
		right.resize(n);
		for (int i = 0; i < n; i++)
		{
			cin >> key[i] >> left[i] >> right[i];
		}
	}

	void in_order_traversal(int i, vector<int> &result)
	{
		if (left[i] == -1 && right[i] == -1)
		{
			result.push_back(key[i]);
		}
		else
		{
			if (left[i] != -1)
			{
				in_order_traversal(left[i], result);
			}
			result.push_back(key[i]);
			if (right[i] != -1)
			{
				in_order_traversal(right[i], result);
			}
		}
	}

	vector<int> in_order()
	{
		vector<int> result;
		int root = 0;
		in_order_traversal(root, result);
		return result;
	}

	void pre_order_traversal(int i, vector<int> &result)
	{
		if (left[i] == -1 && right[i] == -1)
		{
			result.push_back(key[i]);
		}
		else
		{
			result.push_back(key[i]);
			if (left[i] != -1)
			{
				pre_order_traversal(left[i], result);
			}
			if (right[i] != -1)
			{
				pre_order_traversal(right[i], result);
			}
		}
	}

	vector<int> pre_order()
	{
		vector<int> result;
		int root = 0;
		pre_order_traversal(root, result);
		return result;
	}

	void post_order_traversal(int i, vector<int> &result)
	{
		if (left[i] == -1 && right[i] == -1)
		{
			result.push_back(key[i]);
		}
		else
		{
			if (left[i] != -1)
			{
				post_order_traversal(left[i], result);
			}
			if (right[i] != -1)
			{
				post_order_traversal(right[i], result);
			}
			result.push_back(key[i]);
		}
	}
	vector<int> post_order()
	{
		vector<int> result;
		int root = 0;
		post_order_traversal(root, result);
		return result;
	}
};

void print(vector<int> a)
{
	for (size_t i = 0; i < a.size(); i++)
	{
		if (i > 0)
		{
			cout << ' ';
		}
		cout << a[i];
	}
	cout << '\n';
}

int main()
{
	ios_base::sync_with_stdio(0);
	TreeOrders t;
	t.read();
	print(t.in_order());
	print(t.pre_order());
	print(t.post_order());
	return 0;
}
