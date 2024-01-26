#include <iostream>
#include <set>
using namespace std;
//能否从两个数组中各选择k/2个元素, 包含1 ~ k的全部元素
//
//6 5 6
//2 3 8 5 6 5 -> 2 3 5 6 8
//1 3 4 10 5  -> 1 3 4 5 10
int main()
{
	int t; cin >> t;
	while (t--)
	{
		set<int> a, b, c;
		int n, m, k;
		cin >> n >> m >> k;

		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;//如果大于k的数就不读入了, 所以明明读进去了值为k的数都读进去了, 如果还不能给让大小等于k, 那么说明, 中间缺少了数
			if (x <= k) a.insert(x), c.insert(x);
		}

		for (int i = 0; i < m; i++) {
			int x;
			cin >> x;
			if (x <= k) b.insert(x), c.insert(x);
		}
		//c中要是至少有k个元素, 假设a中是b中全都没有的元素, 并且刚刚好k/2个, 那么另外的肯定来自b
		//但如果a有k个元素, 全都是不重复的, b中全是a中重复的元素, n == k,  m == k / 2 , 这个时候, 就可以在a中不选b中重复的, 全选b中没有的, 也刚刚好是k / 2个元素
		cout << (a.size() >= (k >> 1) && b.size() >= (k >> 1) && c.size() == k ? "YES\n" : "NO\n");
	}
}
