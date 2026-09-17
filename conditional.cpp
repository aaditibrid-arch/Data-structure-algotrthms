
#include<iostream>
using namespace std;
int main()
{//use of condtional statement
    char ch;
    cout<<"Enter charecters\n";
    cin>>ch;
    if (ch >='a' && ch<='z')
    {
       cout<<"Lowercase\n";
    }
    else {
    cout<<"Uppercase\n";
   }
   //ternary statement
   int n=-45;
   cout<<(n>=0?"postive":"negative")<<endl;
   return 0;
}
