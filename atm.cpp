/*#include <iostream>
using namespace std;
int main(){
    int acc,pas;
    int arr[10][2]={{1111,0001},{2222,0002},{3333,0003},{4444,0004},{5555,0005},{6666,0006},{7777,0007},{8888,8800},{9999,9900},{1000,1010}};
    cout<<"Please enter your Account number ";
    cin>>acc;
    for (int i=0;i<10;i++){
        if(arr[i][0]==acc){
            cout<<"please enter your password"<<endl;
            cin>>pas;
            }
            for(int j=0;)
    }*/
#include <iostream>
using namespace std;

int main(){
    int details[5][2] = {{1000, 1234}, {1001, 2345}, {1002, 3456}, {1003, 4567}, {1004, 5678}};
    int user;
    cout << "Enter your account number: ";
    cin >> user;
    int pass;
    cout << "Enter your password: ";
    cin >> pass;
    for(int i = 0; i < 5; i++){
        if(user == details[i][0]){
            if(pass == details[i][1]){
                cout << "Account Successfully login!" << endl;
            }else{
                cout << "Account not there!";
            }
        }
    }
    int money[5][2] = {{1000, 0}, {1001, 0}, {1002, 0}, {1003, 0}, {1004, 0}};
}
