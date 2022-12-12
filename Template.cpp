#include<iostream>
using namespace std;

template <class T>
void sort(T arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                T temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main()
{
    int arr[5];
    char a[3];
    cout<<"\nEnter the integer elements: ";
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }

        cout<<"Enter the char elements: ";
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    sort(arr,3);
    cout<<"After sorting they are :"<<endl;
	for (int i = 0; i < 3; i++)
	{
		cout<<arr[i]<<", ";
	}

    cout<<"After sorting they are :"<<endl;
	for (int i = 0; i < 3; i++)
	{
		cout<<a[i]<<", ";
	}
    sort(a,3);
return 0;

}