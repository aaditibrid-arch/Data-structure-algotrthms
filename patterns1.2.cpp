

#include<iostream>
using namespace std;
int main()
{
    int n,num;
    num=1;
    cout<<"Enter number\n";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
     for (int j = 0; j < n; j++)
     {
        cout<<num;
        num++;
     }
     cout<<endl<<" ";
     cin.get();
    }
    return 0;

}