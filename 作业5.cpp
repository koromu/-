//#include <iostream>
//
//using namespace std;
//
//const int N = 10010;
//
//int strcmp(char* p1, char* p2)
//{
//	for (int i = 0, j = 0; p1[i] != '\0' && p2[j] != '\0'; i++, j++)
//	{
//		if (p1[i] == p2[j])continue;
//		else return p1[i] - p2[j];
//	}
//	return 0;
//}
//
//int main()
//{
//	char a[N], b[N];
//	cin >> a >> b;
//	int ans = strcmp(a, b);
//	cout << ans;
//	return 0;
//}
//#include <iostream>
//
//using namespace std;
//
//char a[100010];
//
//bool jud(char* a)
//{
//    for (int i = 0, j = strlen(a)-1; i < j; i++, j--)
//    {
//        if (a[i] == a[j])continue;
//        else return false;
//    }
//    return true;
//}
//
//int main()
//{
//    cin >> a;
//    if (jud(a)) puts("yes");
//    else puts("no");
//
//    return 0;
//}