#include <iostream>

using namespace std;

const int N = 10;
//There's a chessboard of size n��n. mrooks are placed on it in such a way that :
//no two rooks occupy the same cell;
///no two rooks attack each other.
//Ҳ����˵, ��ʼʱ��һ�ֺϷ�����, ������Ҫ�����ƶ�һ������
//����ÿ�������������������ǡ�ý�һֻ���ƶ�����ͬ�ĸ����У��Ӷ�û����ֻ����Ȼ���๥�������ӡ "��"�����򣬴�ӡ "��"��
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
        }
        if (n == m) puts("NO");
        else 
            puts("YES");
    }
    return 0;
}