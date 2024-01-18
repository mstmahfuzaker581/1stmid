#include <bits/stdc++.h>
using namespace std;

class person
{
    string name;
    int age;

public:
    void getdata(void);
    void display(void);
};
void person ::getdata(void)
{
    cin >> name;
    cin >> age;
}
void person ::display(void)
{
    cout << "Name: " << name<<endl;
    cout << "Age: " << age;
}

int main()
{
    person p;
    p.getdata();
    p.display();
    return 0;
}