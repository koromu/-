#include <iostream> 

using namespace std;

int main()
{
	//��ά����???
	int w, x, h; cin >> w >> x >> h;
	int c = w * x * h;
	int n; cin >> n;
	int arr[21][21][21] = { {{0}} };//�и��˾ͱ�1
	int x1, y1, z1, x2, y2, z2; 
	for (; n > 0; n--)
	{
		cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
		for (int i = x1; i <= x2; i++)
		{
			for (int j = y1; j <= y2; j++)
			{
				for (int m = z1; m <= z2; m++)
				{
					if (arr[i][j][m] != 1)
					{
						arr[i][j][m] = 1;
						c--;
					}
				}
			}
		}
	}
	cout << c;

	return 0;
}