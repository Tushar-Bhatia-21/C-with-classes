#include<iostream>
using namespace std;
class DistF;
class DistM
{
	public:
		int meter,centimeter;
		void function()
		{
			cout<<"enter meter and centimeter:"<<endl;
			cin>>meter>>centimeter;
		}
		friend void sum(DistM,DistF);
};
class DistF
{
	public:
		int feet,inches;
		void function()
		{
			cout<<"enter feet and inches:"<<endl;
			cin>>feet>>inches;
		}
		friend void sum(DistM,DistF);
};
void sum(DistM d1,DistF d2)
{
	int a,b,n,con,me,ce,fe,in;
	a=d2.inches*2.54;
	b=d2.feet*0.30;
	n=d1.meter*100;
	con=((d1.centimeter*n)+(a+b));
	me=con/100;
	ce=con%100;
	cout<<"Metres is:"<<me<<" Centimeteres is:"<<ce<<endl;
	fe=me/0.30;
	in=ce/2.54;
	cout<<"Feets is:"<<fe<<" inches is:"<<in<<endl;
}
int main()
{
	DistM d1;
	DistF d2;
	d1.function();
	d2.function();
	sum(d1,d2);
	return 0;
}