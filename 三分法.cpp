//#include <iostream>
//
//using namespace std;
//
//double f(double x,int arr[])
//{
//	double s = 0;
//	s = x * x * arr[0] + x * arr[1] + arr[2];
//	return s;
//}
//
//
//int main()
//{
//	int T; cin >> T;
//	double last;
//	while (T--)
//	{
//		int n; cin >> n;
//		//for (int i = 0; i < n; i++)
//		//{
//		//	//����ϵ��
//		//	for (int a = 0; a < 3; a++)
//		//		cin >> arr[a];
//		//	//��¼�������Ľ��
//		//	double ans = 0.000000;
//		//	//����ö��
//		//	double mid1, mid2, l =0.00000, r = 1000.000000;
//		//	//���ȷֵ�
//		//	//mid1 = (l + (r - l) / 3);
//		//	//mid2 = (r - (r - l);
//		//	for(int m=0;m<100;m++)
//		//	{
//		//		//���ȷּ��
//		//		double k = (r - l) / 3.00000;
//		//		mid1 = l + k;
//		//		mid2 = l + 2 * k;
//		//		//����ֵ
//		//		if (f(mid2, arr) > f(mid1, arr)) r=mid2;
//		//		else l=mid1;
//		//	}
//		//	double tmp = l;
//		//	ans = max(ans, tmp);
//		//	last = ans;
//		//}
//
//		while (n--) {
//			int arr[3];
//			for (int i = 0; i < 3; i++) {
//				cin >> arr[i];
//			}
//			double l = 0.0, r = 1000.0;
//			for (int i = 0; i < 100; i++) {
//				double mid1 = l + (r - l) / 3;
//				double mid2 = r - (r - l) / 3;
//				if (f(mid2, arr) > f(mid1, arr))
//					r = mid2;
//				else
//					l = mid1;
//			}
//			double tmp = l;
//			last = max(last, tmp);
//		}
//		printf("%.4lf\n", last);
//	}
//	return 0;
//}

//#include <iostream>
//#include <stdio.h>
//#include <cmath>
//
//using namespace std;
//double des = 1e-11;
//double f(double x, int a, int b, int c) {
//	double s = a * x * x + b * x + c;
//	return s;
//}
//
//double findMinValue(int n) {
//    double last = 0.0000; // ��ʼ��Ϊһ���ϴ��ֵ
//    while (n--) {
//        int a, b, c;
//        cin >> a >> b >> c;
//
//        if (a == 0 && b == 0) { // ���κ����˻��ɳ�������
//            double minValue = c;
//            last = min(last, minValue);
//            continue;
//        }
//
//        if (a == 0) { // ���κ����˻���һ�κ���
//            if (b > 0)
//                last = min(last, f(0, a, b, c)); // ��������˵�ȡ����Сֵ
//            else
//                last = min(last, f(1000, a, b, c)); // �������Ҷ˵�ȡ����Сֵ
//            continue;
//        }
//
//        double l = 0.0, r = 1000.0;
//        while (r-l > des) {
//            double mid1 = l + (r - l) / 3;
//            double mid2 = r - (r - l) / 3;
//            if (f(mid2, a, b, c) > f(mid1, a, b, c))
//                r = mid2;
//            else
//                l = mid1;
//        }
//
//        //double tmp = min( f(l, a, b, c), f(0, a, b, c), f(1000, a, b, c) );
//        double tmp = f(l, a, b, c);//�ж϶˵�ֵ
//
//        last = max(last, tmp);//��һ�ε���last,�ڶ��ε���tmp.ÿ��ȡ��С��,����ڶ��αȵ�һ��С, �ڶ��ξͱ��last��
//    }
//    return last;//��������last
//}
//
//int main() {
//	int T;
//	cin >> T;
//	while (T--) {
//		int n;
//		cin >> n;
//		double minValue = findMinValue(n);
//		printf("%.4lf\n", minValue);
//	}
//	return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int n, a[5], b[5], c[5];
//inline double f(double x, int i) { return x * x * a[i] + x * b[i] + c[i]; }
//
//inline double check(double x) {
//	double ans = f(x, 1);
//	int i, j, k;
//	for (i = 2; i <= n; i++)
//		ans = max(ans, f(x, i));
//	return ans;
//}
//inline void work() {
//	cin >> n;
//	int i, j, k;
//	for (i = 1; i <= n; i++)cin >> a[i] >> b[i] >> c[i];
//	double l = 0, r = 1000, emp = 1e-11, mid1, mid2;
//	while (r - l > emp) {
//		mid1 = l + (r - l) / 3.0;
//		mid2 = r - (r - l) / 3.0;
//		if (check(mid1) > check(mid2))l = mid1;
//		else r = mid2;
//	}
//	printf("%.4lf\n", check(l));
//}
//int main() {
//	int t;
//	std::ios::sync_with_stdio(false);
//	cin >> t;
//	while (t--)work();
//}