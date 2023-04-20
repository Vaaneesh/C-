#include <iostream>
using namespace std;
int main()
{
    int a=0;
    int arr[5];
     for(int i=0;i<5;i++){
        cout<<"enter value ";
        cin>>arr[i];
    }
    for(int i=0;i<=4;i++){
        for(int j=i+1;j<=4;j++){
            if(arr[i]>arr[j]){
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
    }
    }
    for(int i=0;i<=4;i++){
    cout<<arr[i]<<endl;
    }return 0;
}