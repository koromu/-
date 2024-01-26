#include <iostream>

using namespace std;

const int N = 10;
//There's a chessboard of size n×n. mrooks are placed on it in such a way that :
//no two rooks occupy the same cell;
///no two rooks attack each other.
//也就是说, 开始时是一种合法方案, 后面需要可以移动一个棋子
//对于每个测试用例，如果可以恰好将一只车移动到不同的格子中，从而没有两只车仍然互相攻击，则打印 "是"。否则，打印 "否"。
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