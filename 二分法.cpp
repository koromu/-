//#include <iostream>
//#include <algorithm>
//using namespace std;
//const long long n = 100005;
////��������ţ
//int main()
//{
//	/*
//	int a = -2, b = -3;
//	int c = (a + b) / 2;
//	cout << c;
//	*/
//
//	int N, C, arr[n] = { 0 }, ans = 0; cin >> N >> C;
//	//N��ţ��ĸ���, C��ţ������
//	for (int i = 0; i < N; i++)
//		cin >> arr[i];
//	sort(arr, arr + N);//����������
//	//�ö��ַ�ö��������С�����Ƕ���
//	//��Ҫ��ţ����ܷ�ţ
//	int left = 0, right = arr[N-1]-arr[0], mid;//������������mid,��������
//	while (left < right)
//	{
//		mid = (left + right+1) >> 1;
//		//��Ҫ�ж��Ƿ���ţ����+n��mid��
//			//һ��ţ��ֻ����һͷţ
//			//˫ָ����һ����ţ��ţ��,�в��ܷ�ţ
//		int peng = 0 ,c = 1;//c��ʾ��������ܷŵ�ţ������,��һͷ��ţֱ�ӷŽ�ȥ�˵�һ��λ��,�����ǱȽϾ���
//		for (int j = 1; j < N; j++)
//		{
//			if (arr[j] - arr[peng] >= mid)//��һ��arr[]-arr[]ֱ�Ӿ���һ������,���������Ҫ��mid��,Ҫ��Ȼmid�ͻ��Խ���ţ��
//			{
//				c++;//����һͷţ
//				peng = j;//pengָ�ľ�����һͷţ��ţ��
//				//��ʱ�򲻻�����ж�,��ô��һ��ָ���λ�ñ䶯,ǰһ��ָ��λ�ò���,������ľ�����֮����һ��ţ�������
//			}
//		}
//		if (c >=C) {left = mid + 1;ans = mid;}//�㹻С,����mid
//			else right = mid;//̫����,��Сmid
//	}
//	cout << ans;
//	return 0;
//}