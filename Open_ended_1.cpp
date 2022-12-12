#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;

int count(char s[200], char str[200])
{
    int count=0;
    int strLen=strlen(s);
    int wordlen=strlen(str);
    int j;

    for(int i=0;i<=strLen;i++)
    {
        for(j=0;j<wordlen;j++)
        {
            if(s[i+j]!=str[j]);
            {
                break;
            }
        }
        if(j==wordlen)
        {
            count++;
        }
    }
    return count;

}

int main()
{
    //code inputs a string in a file
    string a;
    cout<<"Enter the string: ";
    cin>>a;
    
    fstream file;
    file.open("test.txt");
    if(!file)
    {
        cout<<"Unable to open the file";
        exit(1);
    }
    
    file<<a;
    char b[200];
    file>>b;
    cout<<b<<endl;
    
    char c[200];
    cout<<"\nEnter the word to be found in the string: ";
    cin>>c;

    cout<<"\nThe occurences of the word is: "<<count(b,c);

    file.close();

    /*string tp;
    fstream file;
    file.open("text.txt");
    while(getline(file,tp))
    {
        
    }
 */
   
   ifstream myfile("test.txt",ios::binary);
   myfile.seekg(0,ios::end);
   int file_size=myfile.tellg();     
   cout<<"Size of the file is: "<<file_size<<" bytes";

}