#include <iostream>
using namespace std;
inline int cube(int c)
{
    return c*c*c;
}
int main()
{
    int a;
    cout<<"Enter the number for cube:";
    cin>>a;
    cout << "The cube of a number is:" << cube(a) << "\n";
    return 0;
}