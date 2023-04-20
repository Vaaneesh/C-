#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n,a;
    cin>>n;
    int j,k;
     j=k=1;
    while(j<=n or k<=n){
        a=3*k+2;
        if(a%4!=0){
            cout<<a<<endl;
            j++;
        }
        k++;
    }
}

