//#include <vector>
//#include <string>
//#include <algorithm>
//#include <iostream>
//#include <cstdio>
//#include <queue>
//
//using namespace std;
//
//int main()
//{
//	vector<int> a(10, -1);//��С����Ϊ10, ȫ����ʼ��Ϊ-1
//	a.size();//ʱ�临�Ӷ���O(1)
//	a.empty();
//	//���е�clear()����
//
//	//vector�бȽϵĹ���(���ֵ���)
//	
//
//	//pair��firstΪ��һ�ؼ�ֵ, secondΪ�ڶ��ؼ���(Ҳ��һ���ֵ���
//	
//	pair<int, string> p;
//	p = make_pair(10, "666");//���캯��
//	//���԰���Ҫ����Ķ�������first��, ����Ҫ����ĸ�����Ϣ����second
//	
//
//	//string
//	//length()��size()һ��,�����ַ�������
//	//size(), empty(), clear(), 
//	string a1 = "abc", b = "def";
//
//	a1 += b;//����ֱ�Ӽ�
//	a1 += 'c';
//	cout << a1 << endl;
//	cout << a1.substr(1, 2) << endl;//��1��ʼ, ������2
//	cout << a1.substr(1) << endl;//��1��ʼ, �����
//	cout << a1.substr(1, 10) << endl;//��1��ʼ, ������10, �����˷�Χ. ��������һ��Ϊֹ
//
//	printf("%s\n", a1.c_str());//c_str()���Է����ַ�����ʼ��ַ
//
//
//	//queue
//	//push() ��β����, pop() ��ͷ����, front()ȡ����ͷԪ��, back()ȡ������Ԫ��
//	//û��clear(), �������� 
//
//	//�� ���ȶ���  -> Ĭ���Ǵ����
//	priority_queue<int> heap;//Ĭ�Ϲ���
//	priority_queue<int, vector<int>, greater<int >> heap;//�����С���ѵĲ���
//
//	//��εõ�С������?
//	// heap.push(-x);//�൱��С����, ȡ����ʱ��ȫ��ȡ����
//	
//	//û��claer()
//
//	//deque���ٶȺ���
//	//ǰ��, β��, ǰɾ, βɾ��,
//	//�������������, �����ٶ���vector�ĺü���
//
//}