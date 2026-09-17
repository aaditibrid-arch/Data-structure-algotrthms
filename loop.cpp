
#include<iostream>
using namespace std;
int main(){
    cout<<"Loops\n1]while loop\n";
    int count=1;
    while(count<=5){
        cout<<count;
        count++;
        cout<<endl;

    }
    cout<<"3]for loop\n";
    int n=10;
    for (int i=1; i <=10; i++)
    {
        cout<<i;
        cout<<endl;
    }
    cout<<"\n practice questions\n sum to n numbers...";
    int sum,i,no;
    cout<<"\n Enter number";
    cin>>no;
    sum=0;
    for(i=1;i<=n;i++){
        sum=sum+i;
        i++;
    }
    cout<<"sum of numbers="<<sum;
    cout<<"Sum of all odd number=\n";
    int noo,s,j;
    noo=10;
    s=0;
    for(j=0;j<=noo;j++){
        if(j%2 !=0){
            s+=j;
        }
    }
    cout<<"sum of odd no=\n"<<s;
    cout<<endl;
    return 0;
}