#include<iostream>
#include<string>
using namespace std;

class String
{
    public:
    
    void operations(string s1,string s2)
    {
        string s3;
        s3=s1;
        cout<<"The contents of s3 are: "<<s3;
        if(s2.find("Univ")==0)
        {
            cout<<"\nSubstring found ";
        } 
        
        if(s1.size()>s2.size())
        {
            cout<<"\nString s1 has more characters than s2";
        }

        else
        {
            cout<<"\nString s2 has more characters than s1";
        }
    }
};

int main()
{
    String s;
    s.operations("Amity","University");
    return 0;
}
