#include <iostream>
using namespace std;
int main(){
    for (int i=1;i<=5;i++){
        if (i<=3){

        
        for(int j=1;j<=i;j++){
            cout<<" "<<j;
            }
        for(int k=i-1;k>=1;k--){
            cout<<" "<<k<<" ";
        }
        cout<<endl;
        }
    }
}

