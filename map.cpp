//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//#include <map>
//
//using namespace std;
//
//
////map<T1, T2> mapTT; ����������Ǽ�ֵ������, ����python���ֵ�, Ĭ�Ϲ�����<��������, ֵ������>
//
//
//class Student
//{
//public:
//	int id;
//	string name;
//
//	Student()
//	{
//
//	}
//
//	//�������캯��
//	Student(int id,string name)
//	{
//		this->id = id;
//		this->name = name;
//	}
//
//	// ��������������
//	friend ostream &operator << (ostream &out, Student &t)
//	{
//		out << t.name;
//		return out;
//	}
//};
//
////int main()
////{
////
////	//�������һ��ѧ������
////	map<int, Student> Stu1;
////}
//
////mapԪ�صĲ��� ���ַ�ʽ , ����͸�ֵ
//
//int main()
//{
//	//����һ��map
//	map<int, string> mStu;
//
//	//1. ʹ��pair����insert����
//	//mStu.insert(pair(3,"nihao"))//����, ��pair�ĳ�ʼ����,��Ҫ��־����
//	pair<int, string> p(3, "nihao");
//	mStu.insert(p);
//	mStu.insert(pair<int, string>(6, "good"));
//
//	//2. ͨ��value_type�ķ�ʽ�������mStu.insert(map<������, ֵ����>::value_type(��, ֵ));
//	mStu.insert(map<int, string>::value_type(5, "hello"));//ֱ�ӳ�ʼ��value����ֵ
//	//3. �ȹ���value_type, �ٴ���
//	map<int, string>::value_type v(7,"���");
//	mStu.insert(v);
//	//��Щ�������������Ĳ�����UTF-8�ĸ�ʽ
//
//	//4. ͨ������ķ�ʽ����ֵ��map����[������] = ֵ; -> �൱�������Ž��������� , �ص����и���
//	mStu[2] = "world";
//	//���㺬�� -> ��. ����(ԭmap�в�����)  �� .�޸�(ԭmap�д���ʱ�޸�)
//	//�޸ĵ�ԭ����� ��ɾ�������
//	//��Ҫ�е�ɾ��ԭ���ݵĺ��
//
//	//����ʹ��insert����Ľ������
//	mStu.insert(pair<int, string>(6, "bad"));//�˴���bad����ʧ��, ���ᱻ����
//	mStu[6] = "bad";//�˴���6��ֵ���ǳ���bad
//
//	//mStu[6] ��ֹ���Բ���, �޸�Ԫ��, ������������Ϊ��ֵ, �ҵ���Ӧ��ֵ
//	//����: ���ݼ��ҵ�ֵ
//	string stu_name = mStu[10]; // ��������в����ڼ�λ�õļ�ֵ��, �����Զ�����һ����Ϊ10�ļ�ֵ�� , ֵĬ��ֵΪ ' '
//	cout << stu_name << endl; // ��ӡ�����Ǹ��� 
//
//
//	//����pair����
//	//while (1)
//	//{
//	//	int key;
//	//	string value;
//	//	//Ȼ���ٽ��մ��������ݵ�key��value , �����Ļ���ѭ��,����,����
//	//	pair<int, string> p (key, value);
//	//}
//
//	map<int, Student> Stu1;
//
//	//1
//	Student s1(1, "nihao");
//	Stu1.insert ( pair < int, Student > (s1.id , s1 ) );//�����pair �еĲ�������, ��Ҫ��map�Ĳ���������ͬ
//
//	//2,value_type���в���
//	Student s2(2, "good");
//	Stu1.insert(map<int, Student>::value_type(s2.id, s2));//ֱ��ʹ�ò���Ҫȡ����, ֱ�Ӵ���(). ����ǰ�治��Ҫȡ����
//	//�ڴ���ĵڶ��������в�������, ����һ��ѧ������, ��һ��������id
//
//	//��ʱStu1�е��Ѿ�������Ԫ��,Ԫ�ؼ�����ͼ
//
//	//�����ַ�ʽ�����ص�!!
//	//3,������ʽ, �ǳ�����, ���Ǵ���Ч�ʵ�����
//
//	Student s3(3, "hello");
//	Stu1[s3.id] = s3;
//
//
//
//
//	//���Ԫ��
//	//find()
//
//	//map�ĵ��� -> ����
//	//����map����������, ���Ե�����ָ�����ʵ�Ǹ�pair, ����Ҫʹ��pair���н���
//	//mapҲ���Զ�����
//	for (auto it = mStu.begin();it != mStu.end(); it++)
//	{
//		auto p = *it;
//		int key = p.first;
//		string value = p.second;
//
//		cout << key << ':' << value << endl;
//	}
//	for (auto it = Stu1.begin(); it != Stu1.end(); it++)
//	{
//		pair<int, Student> p = *it;
//		int key = p.first;
//		Student student = p.second; // ����Ҫ��Ҫ���ص��ڷ��������
//
//		//���� = ����, ǳ����(
//		cout << key << ':' << student.name << endl;//���ֱ�����һ������, �ͻᱨ��, ������Student����������������(������������������)
//		//cout << key << ':' << student << endl;//����������Ľ��
//
//	}
//
//
//	cout << "------" << endl;
//	//���map�����ļ���Ӧ��ֵ
//	//1. []
//
//	//2. find() �ɹ����ض�Ӧ�ĵ�����, ʧ�ܷ���end()�ķ���ֵ
//	map<int, string>::iterator it6 = mStu.find(11);//����ѧ��Ϊ3 ��Ӧ��ѧ������
//	map<int, string>::iterator it7 = mStu.find(6);//����ѧ��Ϊ3 ��Ӧ��ѧ������
//	if (it6 == mStu.end())
//	{
//		cout << "not_find" << endl;
//		perror("find:");
//	}
//	else
//	{
//		cout << (*it6).second << endl;
//	}
//	if (it7 != mStu.end())
//	{
//		cout << (*it7).second << endl;
//	}
//	else
//	{
//		cout << "not_find" << endl;
//	}
//
//	//3.ʹ��at()����, �����ֵ�Բ����ھͻ��õ�����ָ��map����ĩβ.
//	//string stu_name2 = mStu.at(20); // ֱ�ӱ����쳣,ֹͣ����
//
//	//cout << "at(3) : " << stu_name2 << endl;
//	return 0;
//}
//
//
//#include <iostream>
//#include <map>
//using namespace std;
////
//int main()
//{
//	map<int, string> mStu;
//	//���� 1-6
//	mStu.emplace(1, "good");
//
//	pair<int, string> p1(2, "bad");
//	mStu.insert(p1);
//	mStu.insert(pair<int, string>(3, "python"));
//
//	mStu[4] = "hello";
//
//	map<int, string>::value_type v1(5, "c");
//	mStu.insert(v1);
//	mStu.insert(map<int, string>::value_type(6, "people"));
//
//	//����1-6
//	 map<int, string>::iterator it1 = mStu.find(1);//ע�ⷵ�ص��ǵ�����,������ָ�����pair,piar�д�ŵ���һ��keyһ��value(Ҫô�����ú���'.', Ҫôֱ���õ�����->)
//	 string name2 = mStu.at(2);//atֻ���ز鵽����Ӧ��ֵ
//	 int n = mStu.count(3);//���ش��ڼ�Ϊ3�Ķ�����, ��map�п�����Ϊ�����ڵĺ���, ��mlutimap�в��Ҵ��ڵø���
//	 map<int, string>::iterator it2 = mStu.lower_bound(4);//��һ�����ڵ��ڵĵ�����, �����򷵻�ָ��4�ĵ�����
//	 map<int, string>::iterator it3 = mStu.upper_bound(5);//��һ�����ڵĵ�����, �������򷵻�ָ��6�ĵ�����
//	 pair<map<int, string>::iterator, map<int, string>::iterator> p = mStu.equal_range(6);//���ص�pair�д�ŵ�������������, beg��end, ����pair<>�������е�����������map�ĵ�����
//	 //�ɵ���,�˴����ص�ֵ6��6�����Ԫ�صĵ�����
//	 
//	 //string name3 = mStu.at(7);//�������򱨴�
//	 //perror("at");
//
//	 cout << "find(1):" << "second : " << it1->second << "first : " <<it1->first<< endl;//first�Ǽ�, seconds��ֵ
//	 cout << "at(2): :" << name2 << endl;
//	 cout << "count(3) : " << n << endl;
//	 cout << "lower_bound: " << it2->second <<"first : " << it2->first << endl;//������Կ�����������ָ���λ������
//	 cout << "upper_bound: " << it3->second << "first : " <<it3->first<< endl;
//	 cout << "euqle_range: first:" << p.first->first << " second:" << (--p.second)->second << endl;//equal_range ��������ֵ��һ�� pair �������е� first �� second ��Ա���ǵ��������ֱ�ָ����ƥ�����Χ����ʼλ�úͽ���λ��
//	 //��second��ǰ��һλ,ָ���beg��ͬ��λ��
//	 if (p.second != mStu.end()) {
//		 cout << "euqle_range: first:" << p.first->first << " second:" << (p.second--)->second << endl;
//	 }
//	 else {
//		 cout << "key not found" << endl;//��ʱ��ʾ����仰
//	 }
//
//	 map<int, string> m1;
//	 m1.insert(map<int,string>::value_type (0, "nan"));
//	 mStu.swap(m1);//ͨ�����ӿ���, ��ʱm1��СΪ6��Ԫ��, mStu��СΪһ��Ԫ��, �������
//
//
//
//	 return 0;
//}