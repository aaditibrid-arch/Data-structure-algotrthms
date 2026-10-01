
#include<iostream>
using namespace std;
int main(){
    int nums[]={12,4,-90,-19,10};
    int size=5;
    int largest=INT8_MIN;
    for(int i=0;i<size;i++){
        largest=max(nums[i],largest);
    }
    cout<<"Largest="<<largest<<endl;
    return 0;
}