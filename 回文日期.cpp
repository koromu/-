//#include <iostream>
//#include <math.h>
//using namespace std;
//typedef long long ll;
//bool jud1(ll x)//������
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
//int jud2(ll x)//�ж�ababbaba
//{
//    //ȫ�����뵽������
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
//int jud4(int x)//�ж�����
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
//        if (mon == 2)//�ǲ��Ƕ���
//        {
//            if (day < 29)//�ǲ�������
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
//            if (mon == 1 && mon == 3 && mon == 5 && mon == 7 && mon == 8 && mon == 10 && mon == 12)//���������
//            {
//                if (day <= 31)
//                    return 1;
//                else return 0;
//            }
//            else //��������
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
//    {//�ж����ڵĺϷ���
//    int tmp = i % 10000;//�õ��º���
//    int mon, day, year;
//    day = tmp % 100;
//    mon = tmp / 100;
//    year = i / 10000;
//    int n1=0, n2=0;//��¼��һ�δ�ӡ�Ĵ���, ��¼��ӡ�ڶ��εĴ���
//        if (jud3(year,mon,day))
//        {
//            //cout << "year: " << year << " mon: "<<mon << " day :" << day<<endl;
//            if (jud1(x))//���ĵ��ж�,���ڲ�����ababbaba�͵��ж�
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
//        //���ԵĶ��ǰ�λ��, �����ú���λ����ǰ��λ���Ƚ�
//        //i�ǵ�ǰ������ 
//    return 0;
//}//0��