#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char str[100],ch;
    cout<<"Enter the string: ";
    cin.getline(str,100);
    
    int length = strlen(str);
    
    cout<<"\nEnter the character you wanted to search: ";
    cin>>ch;
    int i,j;
    for (i=0;i<length;i++)
    {
        if (str[i]==ch)
        break;
    }   
    
    if (str[i]==ch)
    {
            cout<<ch<<" is present "<<endl;
            for (j=i+1;j<length;j++)
                cout<<str[j];
    }
    else
    cout<<ch<<" is not present";
   return 0;
}
