//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//using namespace std;
//
////���������Ǹ���ɶ?
////���ж�αȽ�
//int main()
//{
//	int count = 0; //��¼ɾ����Ԫ��
//	int N; cin >> N; // ��¼����
//	vector<char> v1(N);	//������������һ���ַ���
//	for (int i = 0; i < N; i++)
//	{
//		//char temp;
//		//cin >> temp;
//		//v1.push_back(temp);
//		cin >> v1[i];
//	}//����������,���ֲ��ò�����β, �����ö�̬��
//
//	auto it_h = v1.begin();//�õ���β�ĵ�����
//	auto it_e = v1.end();//�õ���β�ĵ�����
//	it_e--;//ע��end()��������λ��
//	while (v1.size() >= 2 && *(it_h) == *(it_e))//ֻ�����黹������Ԫ��ʱ,��Ҫ�ж�
//	{
//		v1.erase(it_h);//��պ�
//		count += 2;
//		v1.pop_back();
//		if (v1.empty())
//			break;
//		it_h = v1.begin();
//		it_e = v1.end();//Ϊ�¸�ѭ��׼��������
//		it_e--;
//	}//��β,�����
//	auto it1 = v1.begin();
//	auto it3 = v1.end();
//	--it3;
//	while (it1 != it3)
//	{
//		//1��2�� 2��3�� 3��4�� -> 4����3��
//		//1��2�� 2��3�� 3��(4�� 4��5�� -> 5����4��, ѭ����С-1��
//		auto it2 = it1 + 1;
//		auto it4 = v1.end();
//		while (it2 != v1.end())
//		{
//			while (*it1 == *it2)
//			{
//				it2 = v1.erase(it2);
//				it1 = v1.erase(it1);//�ѵ�һ���͵ڶ���ɾ��
//				//�����ֱͬ��ɾ��
//				//ע��: ɾ��֮��,ʧЧ�� 
//				//it1 = v1.begin();
//				count += 2;
//			}//��������ֱ����һ��
//			it1++;
//		}
//	}//��һֱѭ��û��, ֱ��ĩβ�˳�
//	cout << count;
//
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int count = 0;
//	int N; cin >> N;
//	vector<char> v1(N);
//	for (int i = 0; i < N; i++)
//	{
//		cin >> v1[i];
//	}
//
//	auto it_h = v1.begin();
//	auto it_e = v1.end();
//	it_e--;
//	while (!v1.empty() && *(it_h) == *(it_e))
//	{
//		v1.erase(it_h);
//		count += 2;
//		v1.pop_back();
//		if (v1.empty())
//			break;
//		it_h = v1.begin();
//		it_e = v1.end();
//		it_e--;
//	}
//
//	auto it1 = v1.begin();
//	auto it3 = v1.end();
//	--it3;
//	while (it1 != it3)
//	{
//		auto it2 = it1 + 1;
//		while (it2 != v1.end())
//		{
//			if (*it1 == *it2)
//			{
//				it2 = v1.erase(it2);
//				it1 = v1.erase(it1);
//				count += 2;
//			}
//			else
//			{
//				it1++;
//				it2++;
//			}
//		}
//	}
//
//
//
//	cout << count;
//
//	return 0;
//}
//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//using namespace std;
//
////���������Ǹ���ɶ?
////���ж�αȽ�
//int main()
//{
//	int count = 0; //��¼ɾ����Ԫ��
//	int N; cin >> N; // ��¼����
//	vector<char> v1;	//������������һ���ַ���
//	for (int i = 0; i < N; i++)
//	{
//		char temp;
//		cin >> temp;
//		v1.push_back(temp);
//	}//����������,���ֲ��ò�����β, �����ö�̬��
//
//	auto it_h = v1.begin();//�õ���β�ĵ�����
//	auto it_e = v1.end();//�õ���β�ĵ�����
//	it_e--;//ע��end()��������λ��
//	while (*(it_h) == *(it_e) && it_h != it_e)//�������������ָ��ͬһ��λ��, ���ܽ���ѭ��
//	{
//		v1.erase(it_h);//��պ�
//		it_e = v1.end();//���¸�ֵ,��ע��end()��������λ��
//		it_e--;
//		count += 2;
//		v1.erase(it_e);
//		it_h = v1.begin();
//		it_e = v1.end();//Ϊ�¸�ѭ��׼��������
//		it_e--;
//	}//��β,�����
//	auto it1 = v1.begin();
//	while (it1 != --(v1.end()))
//	{
//		//1��2�� 2��3�� 3��4�� -> 4����3��
//		//1��2�� 2��3�� 3��(4�� 4��5�� -> 5����4��, ѭ����С-1��
//		while (*it1 == *(++it1))
//		{
//			it1 = v1.erase(it1);
//			it1 = v1.erase(it1);//�ѵ�һ���͵ڶ���ɾ��
//			//�����ֱͬ��ɾ��
//			//ע��: ɾ��֮��,ʧЧ�� 
//			//it1 = v1.begin();
//			count += 2;
//		}//��������ֱ����һ��
//		it1++;
//	}//��һֱѭ��û��, ֱ��ĩβ�˳�/
//	cout << count;
//
//
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//using namespace std;
//
////���������Ǹ���ɶ?
////���ж�αȽ�
//int main()
//{
//	int count = 0; //��¼ɾ����Ԫ��
//	int N; cin >> N; // ��¼����
//	vector<char> v1(N);	//������������һ���ַ���
//	for (int i = 0; i < N; i++)
//	{
//		//char temp;
//		//cin >> temp;
//		//v1.push_back(temp);
//		cin >> v1[i];
//	}//����������,���ֲ��ò�����β, �����ö�̬��
//
//	auto it_h = v1.begin();//�õ���β�ĵ�����
//	auto it_e = v1.end();//�õ���β�ĵ�����
//	it_e--;//ע��end()��������λ��
//	while (v1.size() >= 2 && *(it_h) == *(it_e) && it_h != it_e)//�������������ָ��ͬһ��λ��, ���ܽ���ѭ��
//	{
//		v1.erase(it_h);//��պ�
//		count += 2;
//		v1.pop_back();
//		if (v1.empty())
//			break;
//		it_h = v1.begin();
//		it_e = v1.end();//Ϊ�¸�ѭ��׼��������
//		it_e--;
//	}//��β,�����
//	auto it1 = v1.begin();
//	while (it1 != --(v1.end()))
//	{
//		auto it2 = it1 + 1;
//		while (*it1 == *it2 && it2 != v1.end())
//		{
//			it1 = v1.erase(it1);//�ѵ�һ���͵ڶ���ɾ��, it1ɾ����ָ��it2��λ����
//			it1 = v1.erase(it1);
//			//�����ֱͬ��ɾ��
//			//ע��: ɾ��֮��,ʧЧ�� 
//			//it1 = v1.begin();
//			count += 2;
//			if (it1 ==v1.end())
//			{
//				cout << count;
//				return 0;
//			}
//			it2 = it1;
//			it2++;
//		}//��������ֱ����һ��
//		it1++;
//	}//��һֱѭ��û��, ֱ��ĩβ�˳�/
//	cout << count;
//
//
//	return 0;
//}//���°�+1, �ѽ��Խ������


//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//using namespace std;
//
////���������Ǹ���ɶ?
////���ж�αȽ�
//int main()
//{
//	int count = 0; //��¼ɾ����Ԫ��
//	int N; cin >> N; // ��¼����
//	vector<char> v1(N);	//������������һ���ַ���
//	for (int i = 0; i < N; i++)
//	{
//		//char temp;
//		//cin >> temp;
//		//v1.push_back(temp);
//		cin >> v1[i];
//	}//����������,���ֲ��ò�����β, �����ö�̬��
//
//	auto it_h = v1.begin();//�õ���β�ĵ�����
//	auto it_e = v1.end();//�õ���β�ĵ�����
//	it_e--;//ע��end()��������λ��
//	
//	
//
//	while (v1.size() >= 2 && *(it_h) == *(it_e) && it_h != it_e)//�������������ָ��ͬһ��λ��, ���ܽ���ѭ��
//	{
//		v1.erase(it_h);//��պ�
//		count += 2;
//		v1.pop_back();
//		if (v1.empty())
//			break;
//		it_h = v1.begin();
//		it_e = v1.end();//Ϊ�¸�ѭ��׼��������
//		it_e--;
//	}//��β,�����
//	auto it1 = v1.begin();
//	while (it1 != --(v1.end()))
//	{
//		//1��2�� 2��3�� 3��4�� -> 4����3��
//		//1��2�� 2��3�� 3��(4�� 4��5�� -> 5����4��, ѭ����С-1��
//		auto it2 = it1 + 1;
//		while (*it1 == *it2 && it2 != v1.end())
//		{
//			it2 = v1.erase(it2);
//			it1 = v1.erase(it1);//�ѵ�һ���͵ڶ���ɾ��
//			cin >> *it1 >> *it2;
//			//�����ֱͬ��ɾ��
//			//ע��: ɾ��֮��,ʧЧ�� 
//			//it1 = v1.begin();
//			count += 2;
//		}//��������ֱ����һ��
//		it1++;
//	}//��һֱѭ��û��, ֱ��ĩβ�˳�/
//	cout << count;
//
//
//	return 0;
//}//���°�

//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//using namespace std;
//
////���������Ǹ���ɶ?
////���ж�αȽ�
//int main()
//{
//	int count = 0; //��¼ɾ����Ԫ��
//	int N; cin >> N; // ��¼����
//	vector<char> v1(N);	//������������һ���ַ���
//	for (int i = 0; i < N; i++)
//	{
//		//char temp;
//		//cin >> temp;
//		//v1.push_back(temp);
//		cin >> v1[i];
//	}//����������,���ֲ��ò�����β, �����ö�̬��
//	int i1 = 0;
//	int i2 = 0;
//	vector<char>::iterator it1;
//	while(1)
//	{
//			auto it_h = v1.begin();//�õ���β�ĵ�����
//			auto it_e = v1.end();//�õ���β�ĵ�����
//			it_e--;//ע��end()��������λ��
//
//			if (v1.size() >= 2 && *(it_h) == *(it_e) && it_h != it_e)//�������������ָ��ͬһ��λ��, ���ܽ���ѭ��
//			{
//				v1.erase(it_h);//��պ�
//				count += 2;
//				v1.pop_back();
//				if (v1.empty())
//					break;
//				it_h = v1.begin();
//				it_e = v1.end();//Ϊ�¸�ѭ��׼��������
//				it_e--;
//				i1++;
//			}//��β,�����
//			vector <char>::iterator it3;
//			if(i1 != 0)
//			{
//				it1 = v1.begin();
//				i1 = 0;
//			}
//
//				//auto it1 = v1.begin();
//				auto it4 = it1;
//				if (i2 != 0)
//				{
//					it4++;
//					it1 = it4;
//					i2 = 0;
//				}
//				auto it2 = it1 + 1; 
//				it3 = it2;
//				if (*it1 == *it2 && it2 != v1.end())
//				{
//					it1 = v1.erase(it1);//�ѵ�һ���͵ڶ���ɾ��, it1ɾ����ָ��it2��λ����
//					it1 = v1.erase(it1);
//					it4 = it1;
//					//�����ֱͬ��ɾ��
//					//ע��: ɾ��֮��,ʧЧ�� 
//					//it1 = v1.begin();
//					count += 2;
//					//if (it1 == v1.end())
//					//{
//					//	cout << count;
//					//	return 0;
//					//}
//					it2 = it1;
//					it2++;
//					i2++;
//				}//��������ֱ����һ��
//				it1++;
//			//��һֱѭ��û��, ֱ��ĩβ�˳�/
//			if(it1 != --(v1.end())&& *it1 != *it3 && it3 == v1.end())
//			{
//				cout << count;
//				return 0;
//			}
//	}
//	cout << count;
//	return 0;
//}//���°�+2

//int check1(char a[])
//{//�ж���β
//	char beg = a[0],end = a[sizeof(a) - 1];
//	if (beg == end)
//		return 1;
//	else return 0;
//}
//
//
//int check2(char a[])
//{//�ж�����
//	
//}
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int c = 0, n; cin >> n;
//	char arr[10005];
//	for (int i = 0; i < n; i++)
//		cin >> arr[i];
//	int i=0, j =n-1;//ָ��arr�ı߽�
//	while (j < sizeof(arr))
//	{
//		if (check1(arr))
//		{
//			i++;
//			j--;
//			c += 2;
//		}
//	}
//
//
//
//	return 0;
//}