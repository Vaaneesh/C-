#include <iostream>
using namespace std;
int main(){
    for (int i=5;i>=1;i--){
        for(int j=5;j>i;j--){
            cout<<"0";
        }
        for(int k=1;k<=i;k++){
            cout<< k;
        }
        
        cout<<endl;
    }
}