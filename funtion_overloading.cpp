#include <iostream>
using namespace std;
int area(int side)
{
    return (side * side);
}

int area(int x, int y)
{
    return (x * y);
}

float area(float r)
{
    return (3.1416 * r * r);
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << "Square=" << area(a) << endl;
    cout << "Rectangle=" << area(a, b) << endl;
    cout << "Circle=" << area(c) << endl;

    return 0;
}
