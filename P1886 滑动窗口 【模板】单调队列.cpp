//#include <iostream>
//#include <deque>	
//using namespace std;
//
//int main()
//{
//	//���Ե�������
//	int n, k; cin >> n >> k;
//	int arr[1000005] = {0};//��¼����a��
//	for (int i = 1; i <= n; i++) cin >> arr[i];
//	deque <int> dq;//��¼�±�
//	for (int i = 1; i <= n; i++)
//	{
//		while (!dq.empty() && arr[dq.back()] > arr[i])//��i��λ��,��������������Ĳ���i
//			dq.pop_back();//�ڶ�β����С����
//		//��������ͷ ,ÿ�������������Ƚ�, ������ǰ�����С, ����ֱ�������ͷ�ľ�����С
//		//���Ϊ����ֱ�Ӳ���
//		dq.push_back(i);//�������Ԫ����Ϊ��ͷ, ��������С��������
//	//��������ֻ��i, ����ʣ�¼����������i
//		//�ж���ô�����, ��ͷ��λ���Ƿ��ڴ�����
//		if (i >= k)//�±�����Ҫ���ڴ���
//		{
//			while (!dq.empty() && dq.front() <= i - k)
//				dq.pop_front();//����������еĿ�ȵ���Ԫ�ص���Сλ��, �������С��С, ����������������Ҫȥͷ.
//				//���Ŀ�ͷ�������С��
//			cout << arr[dq.front()] << ' ';//����͵õ���ȫ������С
//		}
//	}
//	cout << endl;
//	while (!dq.empty()) dq.pop_front();//���
//	for (int i = 1; i <= n; i++)
//	{
//		while (!dq.empty() && arr[dq.back()] < arr[i])
//			dq.pop_back();
//		dq.push_back(i);
//		if (i >= k)
//		{
//			while (!dq.empty() && dq.front() <= i - k)
//				dq.pop_front();
//			cout << arr[dq.front()] << ' ';
//		}
//	}
//	return 0;
//}