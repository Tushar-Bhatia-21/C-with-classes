#include<iostream>
#include<string>
using namespace std;

class Bank
{
    public:
    int Account_num=0;
    float balance_amount=0;
    float temp=0;
    string name;
    
    /*Bank()
    {
        Account_num=0;
        balance_amount=0;
        temp=0;
    }
    */
    string input()
    {
        cout<<"Enter the name of the person: ";
        getline(cin,name);
        return name;
    }
    float deposit()
    {
        cout<<"\nEnter the amount to be deposited: ";
        cin>>temp;
        balance_amount=balance_amount+temp;
        cout<<"\nThe balance amount is: "<<balance_amount;
        return balance_amount;
    }
    float withdraw()
    {
        cout<<"\nEnter the amount to be deleted: ";
        cin>>temp;
        if(temp>balance_amount)
        {
            cout<<"\nNot enough Balance amount";
        }
        else
        {
            balance_amount=balance_amount-temp;
            cout<<"\nThe balance amount is: "<<balance_amount;
        
        }
        return balance_amount;
    }
};

class Current:public Bank
{
    public:
    void display()
    {
        cout<<"\nThe name of the person is: ";
        cout<<name;
        cout<<"\nThe current amount in bank account is: ";
        cout<<balance_amount;
    }
};

class Savings:public Bank,public Current
{
    public:
    //We are considering the saving interest to be 3% P.a
    int rate;
    int t;
    Savings()
    {
        rate=3;
        t=0;
    }
    
    void savings()
    {
        cout<<"\nEnter the time: ";
        cin>>t;
        float savings=Current::balance_amount*rate*t;
        cout<<"\nSavings are: ";
        cout<<savings;
    }
    
};

int main()
{
    Bank a;
    Current b;
    Savings c;
    int x=0;
    b.input();
    while(1)
    {
        cout<<"\nPress 1. To deposit\nPress 2. TO withdraw\nPress 3. To display current amount\nPress 4. To calculate Savings\nPress 5. To exit\n";
        cin>>x;
    
        switch(x)
        {
            case 1:
            {
                b.deposit();
                break;
            }
            case 2:
            {
                b.withdraw();
                break;
            }
            case 3:
            {
                b.display();
                break;
            }
            case 4:
            {
                c.savings();
                break;
            }
            case 5:
            {
                exit(0);
                break;
            }
        default:
        {
            cout<<"Please enter from the given choices only: ";
            break;
            
        }
        }
    }
}