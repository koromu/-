//#include <iostream>
//#include <algorithm>
//#include <set>
//using namespace std;
//
////int main()
////{
////	int n, k; cin >> n >> k;
////	set<int> s1;
////	for (int i = 0; i < n; i++) 
////	{
////		int tmp; cin >> tmp;
////		s1.insert(tmp); 
////	}//����ȥ��
////	set<int>::iterator it = s1.begin();
////	for (int i = 1; i < k&&it!=s1.end(); i++)
////		it++;//it�ӵ�һ����ʼ, +1�õ��ڶ���,���Ծ����kС��Ԫ��k-1�� 
////	//0 - k����ҿ���k��
////	//1 - k����ҿ���k-1��
////	if (it == s1.end())
////		cout << "NO RESULT" << endl;
////	else
////		cout << *it;
////	return 0;
////}
//
////���к�������
//int main()
//{
//	int n, k,arr[10005]; cin >> n >> k;
//	for (int i = 0; i < n; i++)
//		cin >> arr[i];
//	//��������ȥ��
//	//���� sort()
//	sort(arr, arr + n);
//	//ȥ�� unique,��Ȼ�ǰ��ظ���Ԫ�طŵ�����������
//	int len = unique(arr, arr + n) - arr;//�������һ��֮���Ԫ�صĵ�ַ, �ټ�ȥ�����׵�ַ, �õ�αȥ�غ�ĳ���
//	if (len >= k)
//		cout << arr[k - 1];
//	else
//		cout << "NO RESULT";
//
//	return 0;
//}