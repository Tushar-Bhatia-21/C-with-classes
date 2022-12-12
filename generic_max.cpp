#include<iostream>

using namespace std;

void max(int a,char b[30], float c)
{
    int temp;
    if(sizeof(b)>a&&sizeof(b)>c)
    {
        cout<<"2nd Argument is greater";
    }
    else if(a>c)
    {
        cout<<"1st Argument is largest";
    }
    else
    {
        cout<<"3rd argument is largest";
    }
};

int main()
{
    int a;
    char b[30];
    float c;
    cout<<"\nEnter the first argument";
    cin>>a;
    cout<<"\nEnter the second argument";
    cin>>b;
    cout<<"\nEnter the third argument";
    cin>>c;
    max(a,b,c);
    return 0;
}