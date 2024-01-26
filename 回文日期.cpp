//#include <iostream>
//#include <math.h>
//using namespace std;
//typedef long long ll;
//bool jud1(ll x)//回文数
//{//20200202
//    ll tmp, t, c = 0;
//    t = x / 10000;
//    for (ll i = 3; i >=0; i--)
//    {
//        tmp = x % 10;
//        c += tmp * pow(10,i);
//        x /= 10;
//    }
//    if (c == t)
//        return 1;
//    else return 0;
//}
//
//int jud2(ll x)//判断ababbaba
//{
//    //全部存入到数组中
//    int arr[8];
//    for (int i = 0; i < 8; i++)
//    {
//        arr[i] = x % 10;
//        x = x / 10;
//    }
//    if ((arr[1] == arr[3] && arr[3] == arr[5] && arr[5] == arr[7]) && (arr[0] == arr[2] && arr[2] == arr[4] && arr[4] == arr[6]))
//        return 1;
//    else return 0;
//}
//
//int jud4(int x)//判断闰年
//{
//    if (x % 100 != 0 && x % 4 == 0)
//        return 1;
//    else return 0;
//}
//
//int jud3(int year, int mon,int day)
//{
//    if (mon > 12)
//        return 0;
//    else if(day > 31)
//        return 0;
//    else
//    {
//        if (mon == 2)//是不是二月
//        {
//            if (day < 29)//是不是闰月
//            {
//                return 1;
//            }
//            else
//            {
//                if (jud4(year))
//                    return 1;
//                else return 0;
//            }
//        }
//        else {
//            if (mon == 1 && mon == 3 && mon == 5 && mon == 7 && mon == 8 && mon == 10 && mon == 12)//如果是闰月
//            {
//                if (day <= 31)
//                    return 1;
//                else return 0;
//            }
//            else //不是闰月
//            {
//                if (day <= 30)
//                    return 1;
//                else return 0;
//            }
//        }
//    }
//}
//
//int main()
//{
//    ll x; cin >> x;
//    x++;
//    for (ll i = x; i < 89991231; i++)
//    {//判断日期的合法性
//    int tmp = i % 10000;//得到月和日
//    int mon, day, year;
//    day = tmp % 100;
//    mon = tmp / 100;
//    year = i / 10000;
//    int n1=0, n2=0;//记录第一次打印的次数, 记录打印第二次的次数
//        if (jud3(year,mon,day))
//        {
//            //cout << "year: " << year << " mon: "<<mon << " day :" << day<<endl;
//            if (jud1(x))//回文的判断,在内部进行ababbaba型的判断
//            {
//                if (n1 == 0)
//                {
//                    cout << x << endl; 
//                    n1++;
//                }
//                if (n1 != 0 && n2 == 0)
//                {
//                    if (jud2(x))
//                    {
//                        cout << x << endl; 
//                        n2++;
//                    }
//                }
//            }
//        }
//    }
//        //所以的都是八位数, 所以拿后四位数和前四位数比较
//        //i是当前的日期 
//    return 0;
//}//0分