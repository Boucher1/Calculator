#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	int a, b, c, d, x, y, n, p=1;
	cout << "please enter how many calculations do you want:" << endl;
	cin >> n;
	srand((unsigned)time(NULL));
	for (x = 1; x <= n; x++)
	{
		p = 1;
		a = rand() % 100 + 1;
		b = rand() % 100 + 1;
		c = rand() % 100 + 1;
		d = rand() % 100 + 1;
		while (p)
		{
			y = rand() % 10 + 1;
			switch (y)
			{
			case 1:
				if (a + b + c + d < 0)
					break;
				else
				{
					cout << a << "+" << b << "+" << c << "+" << d << "=" << endl;
					p = 0;
				}
				break;
			case 2:
				if (a + b - c < 0)
					break;
				else
				{
					cout << a << "+" << b << "-" << c << "=" << endl;
					p = 0;
				}
				break;
			case 3:
				if ((a + b / c) != (a + (double)b / (double)c))
					break;
				else
				{
					cout << a << "+" << b << "/" << c << "=" << endl;
					p = 0;
				}
				break;
			case 4:
				if (a + b - c - d < 0)
					continue;
				else
				{
					cout << a << "+" << b << "-" << c << "-" << d << "=" << endl;
					p = 0;
				}
				break;
			case 5:
				if ((a * b / c )!= (a * (double)b / (double)c))
					break;
				else
				{
					cout << a << "*" << b << "/" << c << "=" << endl;
					p = 0;
				}
				break;
			case 6:
				if ((a / d + c - b) != ((double)a / (double)d + c - d)||(a / d + c - b) < 0)
					break;
				else
				{
					cout << a << "/" << d << "+" << c << "-" << b << "=" << endl;
					p = 0;
				}
				break;
			case 7:
				if (a - d + c < 0)
					break;
				else
				{
					cout << a << "-" << d << "+" << c << "=" << endl;
					p = 0;
				}
				break;
			case 8:
				if ((d*a*c / b) != ((double)d*a*c / (double)b))
					break;
				else
				{
					cout << d << "*" << a << "*" << c << "/" << b << "=" << endl;
					p = 0;
				}
				break;
			case 9:
				if (b - a - c < 0)
					break;
				else
				{
					cout << b << "-" << a << "-" << c << "=" << endl;
					p = 0;
				}
				break;
			case 10:
				if (a*d + b * c < 0)
					break;
				else
				{
					cout << a << "*" << d << "+" << b << "*" << c << "=" << endl;
					p = 0;
				}
			default:
				break;
			}
		}

	}
	return 0;
}