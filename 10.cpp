#include <iostream>
#include <cstdlib>
using namespace std;
 
#define SIZE 100
 
template <class X>
class stack
{
    X *arr;
    int top;
    int capacity;
 
    public:
    stack(int size = SIZE);         
 
    void push(X);
    X pop();
    X peek();
 
    int size();
    bool isEmpty();
    bool isFull();
 
    
    ~stack() {
        delete[] arr;
    }
};
 

template <class X>
stack<X>::stack(int size)
{
    arr = new X[size];
    capacity = size;
    top = -1;
}
 

template <class X>
void stack<X>::push(X x)
{
    if (isFull())
    {
        cout << "Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
 
    cout << "\nInserting " << x << endl;
    arr[++top] = x;
}
 

template <class X>
X stack<X>::pop()
{
    
    if (isEmpty())
    {
        cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
 
    cout << "Removing "<< endl;
 
    
    return arr[top--];
}
 

template <class X>
X stack<X>::peek()
{
    if (!isEmpty()) 
    {
        for(int i=top;i>=0;--i)
        {
            cout<<"\n"<<arr[i]<<endl;
        
        }
    }
    return 0;
} 

template <class X>
int stack<X>::size() 
{
    return top + 1;
}
 
template <class X>
bool stack<X>::isEmpty() 
{
    return top == -1;     
}
 
template <class X>
bool stack<X>::isFull()
{
    return top == capacity - 1;    
}
 
int main()
{
    stack<string> pt(2);
    string a;
    int x;
    while(1)
    {
        cout<<"\nPress 1. for Push\nPress 2. for Pop\nPress 3. for Peek\nPress 4. To exit";
        cout<<"\nEnter the option: ";
        cin>>x;
        switch(x)
        {
            case 1:
            {
                cout<<"Enter element: ";
                cin>>a;
                pt.push(a);
                break;
            } 

            case 2:
            {
                cout<<"Element Popped\n";
                pt.pop();
                break;
            }

            case 3:
            {
                
                if (pt.isEmpty()) 
                {
                    cout << "The stack is empty\n";
                }
                else 
                    {
                    cout << "\nThe stack is not empty\n";
                    pt.peek();
                    }
            break;
            }
            case 4:
            {
                exit(0);
                break;
            }
            }  
        }
    return 0;
    }
