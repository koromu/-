#include <iostream>
#include <set>
using namespace std;
//�ܷ�����������и�ѡ��k/2��Ԫ��, ����1 ~ k��ȫ��Ԫ��
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
			cin >> x;//�������k�����Ͳ�������, ������������ȥ��ֵΪk����������ȥ��, ��������ܸ��ô�С����k, ��ô˵��, �м�ȱ������
			if (x <= k) a.insert(x), c.insert(x);
		}

		for (int i = 0; i < m; i++) {
			int x;
			cin >> x;
			if (x <= k) b.insert(x), c.insert(x);
		}
		//c��Ҫ��������k��Ԫ��, ����a����b��ȫ��û�е�Ԫ��, ���Ҹոպ�k/2��, ��ô����Ŀ϶�����b
		//�����a��k��Ԫ��, ȫ���ǲ��ظ���, b��ȫ��a���ظ���Ԫ��, n == k,  m == k / 2 , ���ʱ��, �Ϳ�����a�в�ѡb���ظ���, ȫѡb��û�е�, Ҳ�ոպ���k / 2��Ԫ��
		cout << (a.size() >= (k >> 1) && b.size() >= (k >> 1) && c.size() == k ? "YES\n" : "NO\n");
	}
}
