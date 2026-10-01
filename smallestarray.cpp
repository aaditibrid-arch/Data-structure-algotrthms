
#include<iostream>
using namespace std;
int main(){
    int nums[]={12,4,-90,-19,10};
    int size=5;
    int smallest=INT8_MAX;
    for(int i=0;i<size;i++){
        if(nums[i]<smallest){
            smallest=nums[i];
        }
    }
    cout<<"smallest="<<smallest<<endl;
}