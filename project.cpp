#include <iostream>
using namespace std;
int main(){
    double speed,distance,traffic;
    cout<<"Enter speed of your vehicle in km/hr ";
    cin>>speed;
    cout<<endl;
    cout<<"Enter the traffic ratio ";
    cin>>traffic;
    cout<<"Press 1 to enter the distance in meters & 2 to enter the distance in km ";
    int n;
    cin>>n;
    cout<<"Enter distance \n";
    if(n==1){
        cin>>distance;
        distance=distance*0.001;
    }
    else{
        cin>>distance;
    }

    if(traffic>=100){
        cout<<"Traffic light will remain green for 150 sec";
    }
    else
    cout<<"Traffic light will remain green for 75 sec";


}