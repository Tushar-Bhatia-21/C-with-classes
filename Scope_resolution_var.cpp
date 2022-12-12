#include<iostream>
using namespace std;
int a=10;
int main()
{
    int a=1;
    cout<<"The value of local a is:"<<a<<endl;
    cout<<"The value of global a is:"<<::a<<endl;
    return 0; 
}