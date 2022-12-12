#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    
    fstream file;
    file.open("test.txt");
    file<<str;
    
    
    int count=0;
    string str_1;
    string word;
        cout<<"\nEnter any word which u want to count: ";
        getline(cin,word);
    
        getline(file,str_1);
        
    stringstream ss(str);
    while(ss>>str)
    {
        if(str==word)
        {
          count++;
        }
            
        }
 
    cout<<"\nOccurence="<<count<<"\n";
        file.close();
        
   ifstream myfile("test.txt",ios::binary);
   myfile.seekg(0,ios::end);
   int file_size=myfile.tellg();     
   cout<<"Size of the file is: "<<file_size<<" bytes";
}