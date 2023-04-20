#include <cmath>
#include<iostream>
using namespace std;

int main() {
	double b,hra,da,a,pf;
    char c;
    cin>>b>>c;
    int basic=b;
	hra=basic*(1.0/5.0);
    da=(1.0/2.0)*b;
    pf=(11.0/100.0)*b;
    if(c==65)
        a=1700;
    else if(c==66)
        a=1500;
    else
        a=1300;
    double ts=b+hra+da+a-pf;
    cout<<round(ts)<<endl;
    cout<<b<<endl;
    cout<<hra<<endl;
    cout<<da<<endl;
    cout<<a<<endl;
    cout<<pf;
}
