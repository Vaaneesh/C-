#include<iostream>
using namespace std;
int main()
{
    int max=0;
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"enter value ";
        cin>>arr[i];
    }
    for(int j=0;j<5;j++){
        if(max<=arr[j]){
            max=arr[j];
        }
    }
    cout<<"MAX VALUE= "<<max;
}