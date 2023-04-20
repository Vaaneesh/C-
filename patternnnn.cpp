#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
 	int n,k=1;
    cin>>n;
    int q=(n/2)+1;
    for(int i=1;i<=n;i++){
        if(i<=(n/2)+1){

        for(int a=1;a<=(n/2)+1-i;a++){
            cout<<" ";
        }
        for(int j=i;j<=k;j++){
            cout<<"*";
        }
        k+=2;
        cout<<endl;
    }
        /*for(int a=q;a<=i;a++){
            cout<<" ";
        }
        for(int j=i;j>=q;j--){
            cout<<"*";
        }
        cout<<endl;
    */}
}


