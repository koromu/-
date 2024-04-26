//#include<iostream>
//#include <queue>
//using namespace std;
//
//typedef pair<int, int> PII;
//
//char map[2][100010];
//pair<int, pair<int, int>> q[500010];
//bool flag;
//int n, k;
//// void dfs(int x, int y, int h)
//// {
////     if(flag) return ;
////     // cout << x  << " " << y  << " " << h << endl;
////     if(y >= n - 1) 
////     {
////         flag = true;
////         return ;
////     }
////     else {
////         if(map[(x + 1) % 2][y + k] != 'X' && y + k >= h + 1) 
////         {
////             dfs((x + 1) % 2, y + k, h + 1);
////         }
////         if(map[x][y + 1] != 'X' && y + 1 >= h + 1) {
////             dfs(x, y + 1, h + 1);
////         }
////         if(map[x][y - 1] != 'X' && y - 1 >= h + 1) {
////             dfs(x, y - 1, h + 1);
////         }
////     }
////     return;
//// }
//
//void bfs(int x, int y, int h)
//{
//    int tt = 0, hh = 0;
//    q[0] = { x, { y , h} };
//    // queue<pair<int, pair<int, int>>> q;
//    // q.push({x, { y , h}});
//
//    while (hh <= tt)
//    {
//        // auto u = q.front();  q.pop();
//        auto u = q[hh++];
//        x = u.first, y = u.second.first, h = u.second.second;
//        if (y >= n - 1)
//        {
//            flag = true;
//            return;
//        }
//        if (map[(x + 1) % 2][y + k] != 'X' && y + k >= h + 1)
//        {
//            // q.push({(x + 1) % 2,{ y + k, h + 1 }});
//            q[++tt] = { (x + 1) % 2,{ y + k, h + 1 } };
//        }
//        if (map[x][y + 1] != 'X' && y + 1 >= h + 1) {
//            {
//                // q.push({x, {y + 1, h + 1}});
//                q[++tt] = { x, {y + 1, h + 1} };
//            }
//        }
//        if (map[x][y - 1] != 'X' && y - 1 >= h + 1) {
//            // q.push({x, {y - 1, h + 1}});
//            q[++tt] = { x, {y - 1, h + 1} };
//        }
//    }
//}
//
//int main()
//{
//    cin >> n >> k;
//    for (int i = 0; i < 2; i++)
//        cin >> map[i];
//    // dfs(0, 0, 0);
//    bfs(0, 0, 0);
//    if (flag) puts("YES");
//    else puts("NO");
//    return 0;
//}