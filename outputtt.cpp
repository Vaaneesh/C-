#include<iostream>
using namespace std;

class PiggyBank {
    public:
    int A1(int n, int m) {
        int a = n + m + 50;
        return a;
    }
};

int main()
{ 
int n,m,d;
PiggyBank D;       //To initialize amount of Rs. 50
    cin>>n>>m;
        if (n == 50 || n == 100 || n == 200 || n == 500 || n == 2000)
        {
            cout << D.A1(n, m);	//For notes in piggy Bank
        }
        else
        { 
            cout<<"Invalid Note"<<endl;
            n = 0;
            cout << D.A1(n, m);
        }        
}