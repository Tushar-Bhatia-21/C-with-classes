#include <iostream>
using namespace std;
class Numbers
{
	private:
		int a=5;
	public:
    int b=10;
	void printNumbers(void);
	friend void print(Numbers);
};
void print(Numbers a)
{
	cout<<"Private a= "<<a.a;
}
void Numbers::printNumbers(void)
{
	int a=11;
    cout<<"a= "<<a<<",b= "<<b<<endl;
}

int main()
{
	
	Numbers num,a;
	num.printNumbers();
	num.print();
	
	return 0;	
}