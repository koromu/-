#include <iostream>
#include<algorithm>
#include <string>
using namespace std;

//int main()
//{
	//�Ƿ������������ƽ����
	//˫ָ��,�ֱ�ָ���׺�β, �ж�ƽ���ͺ�Ŀ�����Ĺ�ϵ, �������ƶ�βָ��, ��Сƽ������, С�����ƶ���ָ��, ����ƽ������

	//int n; cin >> n;
	//int arr[100001] = {0};
	//for (int i = 0; i < n; i++)
	//{
	//	int tmp;
	//	cin >> tmp;
	//	arr[i] = tmp;
	//}
	//int sum,c; cin >> sum;
	//sort(arr, arr + n);
	//for (int i = 0, j = n - 1; i < j;)
	//{
	//	c = (arr[i]*arr[i] + arr[j]*arr[j]);
	//	if (c > sum) j--;
	//	if (c < sum) i++;
	//	if (c == sum) 
	//	{
	//		cout << arr[i] << ' ' << arr[j] << endl;
	//		i++;
	//	}
	//}

	////�жϻ����ַ�
	//int n; cin >> n;
	//for (int m = 0; m < n; m++)
	//{
	//	string s; cin >> s;
	//	int i = 0, j;
	//	for (i = 0, j = s.size() - 1; i < j; i++, j--)
	//	{//�������ָ��ָ����ַ���ͬ�����ѭ��
	//		if (s[i] != s[j]) {
	//			cout << "no" << endl;
	//			break;
	//		}
	//	}//һ���ַ�����ѭ��
	//		if(s[i] == s[j])
	//			cout << "yes" << endl;
	//}

//	//Ѱ�������
//	int n,s; cin >> n;
//	int arr[100001] = {0};
//	for (int i = 0; i < n; i++)
//		cin >> arr[i];
//	cin >> s;//Ŀ���
//	int i = 0, j =0,now;
//	now = arr[0];
//	while (j<n)//i��jǰ��, ע��:������ָ�붼ָ�����ʱ�ͽ�����
//	{
//		//if (now < s) i++;
///*		if (now == s) 
//		{
//			cout << i << ' ' << j << endl;
//			i++;
//		}*/ //�ص������i++���������Ժϲ�
//		//�ϲ�
//		if (now >= s)
//		{
//			if (now == s)
//			{
//				cout << i << ' ' << j << endl;
//			}
//			now -= arr[i];//iҪ++��, Ҫ��ȥ���i
//			i++;//��������Ҫi++��
//			//i++����Ҫע��i��j��λ��
//			if (i > j) 
//			{
//				j++;//��i��jָ��һ���ط�
//				now = arr[i];//�ô�С��Ϊarr[i],ָ��ͬһ���ط�ֻ��һ���� 
//			}
//		}
//		if (now < s) { j++; now += arr[j]; }//
//	}

	//poj 3061
	// ��һ��n,��ʾn������
	// �ڶ���һ��N,һ��S,N��ʾԪ�ظ��� , S��ʾĿ�����
	//�ҵ����ڵ���S����С�ĳ���,�����
	//һ�����һ����
//	return 0;
//}

//int main()
//{
//	int n, N, S, ans, now, c, arr[100005], x, y;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		ans = 9999;
//		cin >> N >> S;
//		x = y = 0;
//		for (int j = 0; j < N; j++)
//			cin >> arr[j];//��ʼ������
//			c = arr[0];
//		while (y < N)
//		{
//			if (c <= S)
//			{
//				if (c == S) 
//				{ 
//					now = y - x+1; 
//					ans = min(ans, now);	
//				}
//				y++;
//				c += arr[y];
//			}
//			if (c > S)
//			{
//				now = y - x+1;
//				ans = min(ans, now);
//				c -= arr[x];
//				x++;//��ǰ�ƶ�
//				if (x > y) { y++; c = arr[x]; }//��ֹx > y
//			}
//		}
//		if (ans == 9999)
//			ans = 0;
//		cout << ans << endl;
//	}
//	return 0;
//}



