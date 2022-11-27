
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

    cout << "Enter speed v = " << endl;
    cin >> v;
    cout << "Enter angle alpha = " << endl;
    cin >> alpha;
    alpha = alpha*pi/180;
    T=2*v*sin(alpha)/g;
    cout << "Enter time t = " <<  endl;
    cin >> t;
    cout << "*** Coordinates body *** " << endl;
    x=v*t*cos(alpha);
    y=v*t*sin(alpha)-g*t*t/2;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
