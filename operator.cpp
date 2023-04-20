#include <iostream>
using namespace std;
class complex{
    private:
    int real, image;
    public:
    complex(int r=0,int i=0){
        real=r;
        image=i;
    }
    complex operator +(complex const &obj){    //operator overloading
        complex res;
        res.real=real+obj.real;     //mathematical operator
        res.image=image+obj.image;
        return(res);
    }
    void print(){
        cout<<image<<real;
    }
};
int main(){
    complex c1(10,5),c2(2,4);
    complex c3=c1+c2;
    c3.print();
}
