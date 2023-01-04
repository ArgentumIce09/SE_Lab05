
/* +++++ Education program +++++ */
#include <iostream>
#include <cmath>
using namespace std;

const double g = 9.8;
const double pi = 3.141;
double v, alpha, T; // velocity, angle, time
double t, x, y; // Moment time, coordinates body

int main()
{
    system("chcp 1251>nul");
    cout << "������� ��������  v = " << endl;
    cin >> v;
    cout << "������� ���� ����� = " << endl;
    cin >> alpha;
    alpha = alpha*pi/180;
    T=2*v*sin(alpha)/g; // ����������
    cout << "������� ����� t = " <<  endl;
    cin >> t;

    cout << "*** ���������� ���� *** " << endl;
    x=v*t*cos(alpha);
    y=v*t*sin(alpha)-g*t*t/2;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "����� ������ ���� = " << T << endl;

	int a,b,c;
	cout << "������� ��� ������������� �����" << endl;
	cin >> a >> b;

	c = a / b;
	cout << "a / b = " << c << endl;

    return 0;
}
