#include <bits/stdc++.h>
using namespace std;

class FixedDeposit
{
    int PrincipalAmount, Years;
    float RateOfInterest, ReturnValue;

public:
    FixedDeposit() {}
    FixedDeposit(int p, int y, float r = 0.12);
    FixedDeposit(int p, int y, int r);
    void display();
};
FixedDeposit::FixedDeposit(int p, int y, float r)
{
    PrincipalAmount = p;
    Years = y;
    RateOfInterest = r;
    ReturnValue = PrincipalAmount;
    for (int i = 1; i <= Years; i++)
    {
        ReturnValue = ReturnValue * (1.0 + RateOfInterest);
    }
}
FixedDeposit::FixedDeposit(int p, int y, int r)
{
    PrincipalAmount = p;
    Years = y;
    ReturnValue = PrincipalAmount;
    for (int i = 1; i <= Years; i++)
    {
        ReturnValue = ReturnValue * (1.0 + float(r) / 100);
    }
}
void FixedDeposit::display()
{
    cout << "Principal Amount : " << PrincipalAmount << endl;
    cout << "Years : " << Years << endl;
    cout << "Rate Of Interest : " << RateOfInterest << endl;
    cout << "Return Value : " << ReturnValue << endl;
}
int main()
{
    FixedDeposit fd1, fd2, fd3;
    int p, y, r;
    float R; // for percent form
    cout << "Enter Principal amount,period,interest Rate(in percent)" << endl;
    cin >> p >> y >> r;
    fd1 = FixedDeposit(p, y, r);
    cout << "Enter Principal amount,period,interest Rate(decimal form)" << endl;
    cin >> p >> y >> r;
    fd2 = FixedDeposit(p, y, r);
    cout << "Enter Principal amount,period" << endl;
    cin >> p >> y;
    fd3 = FixedDeposit(p, y);
    cout << "Deposit1:";
    fd1.display();
    cout << "Deposit2:";
    fd2.display();
    cout << "Deposit3:";
    fd3.display();

    return 0;
}
