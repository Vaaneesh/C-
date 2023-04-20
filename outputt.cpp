#include<iostream>
using namespace std;

int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n,a,s;
    s=0;
    cout<<"length";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>a;
        arr[i]=a;
    }
    for(int j=0;j<n;j++){
        s+=arr[j];
    }
    cout<<s;
}


