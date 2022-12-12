#include<iostream>
using namespace std;
class Student
{protected:
int rollno;
public:
char name[20]="Student";
 void putName(void)
 
 {
    cout<<"Name:"<<name;
 }
void getRoll(int a)
 { 
    rollno=a;
 }
void putRoll(void)
 {
    cout<<"\nRoll No:"<< rollno; 
 } 
};
class Exam : public Student
{
    protected:
    float sub_1,sub_2,sub_3;
    float sub_4,sub_5,sub_6;
    public:
void getMarks(float a,float b,float c,float d,float e,float f)
{
    sub_1=a;
    sub_2=b;
    sub_3=c;
    sub_4=d;
    sub_5=e;
    sub_6=f;
}
void putMarks(void)
{
    cout<<"\nMarks gained:"<<endl;
    cout<<"Subject 1:"<<sub_1<<"\nSubject 2:"<<sub_2<<"\nSubject 3:"<<sub_3<<"\nSubject 4:"<<sub_4<<"\nSubject 5:"<<sub_5<<"\nSubject 6:"<<sub_6;
}
};
class Result: public Exam
{
    float total;
    public: 
    void display()
{
    total= sub_1+sub_2+sub_3+sub_4+sub_5+sub_6; 
    putName();
    putRoll();
    putMarks();
    cout<<"\nTotal score is:"<<total<<endl;
}
};
int main()
{
    Result r;
    r.getRoll(1);
    r.getMarks(80,90,70,54,12,98);
    r.display();
    return 0;
}
