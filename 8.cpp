#include<iostream>
using namespace std;
class media
{
    protected:
        char title[20];
        char publication[20];
    public:
        virtual void read()
        {
            cout<<"Enter title: ";
            cin>>title;
            cout<<"Enter publication: ";
            cin>>publication;
        }
        virtual void show()
        {
            cout<<"\nTitle: "<<title<<endl;
            cout<<"\nPublications: "<<publication<<endl;
        }
};

class books:public media
{
    public:
    int pages;
    void read()
    {
        cout<<"\nEnter the number of pages:";
        cin>>pages;
    }
    void show()
    {
        cout<<"\nBook has pages: "<<pages<<endl;
    }
};
class tape:public media
{
    public:
    int time;
    char tape_name[20];
    void read()
    {
        cout<<"\nEnter the name of tape:"<<endl;
        cin>>tape_name;
        cout<<"\nEnter the time in the tape"<<endl;
        cin>>time;       
    }
    void show()
    {
        cout<<"\nThe name of tape is: "<<tape_name<<endl;
        cout<<"\nTime in the tape is: "<<time;
        
    }
}; 

int main()
{
    int x;
    cout<<"Enter the number of books and tapes:";
    cin>>x;
    for(int i=0;i<x;i++)
    {
        media *m;
        m->media::read();
        m->media::show();
        books b;
        m=&b;
        m->read();
        m->show();
        tape a;
        m=&a;
        m->read();
        m->show();
       
        }
    return 0;
}