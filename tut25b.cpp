#include<iostream>
using namespace std;
class Complex{
int a,b;
public:
void setData(int v1,int v2){
    a=v1;
    b=v2;
    }
    void sum(Complex c1,Complex c2){
        a=c1.a+c2.a;
        b=c1.b+c2.b;
    }
    void print(void){
        cout<<"The complex number is "<<a<<"+i"<<b<<endl;
    }
};
int main(){
    Complex c1,c2,c3;
    int a,b;
    cout<<"Enter first complex number";
    cin>>a>>b;
    c1.setData(a,b);
    cout<<"Enter second complex number";
    cin>>a>>b;
    c2.setData(a,b);
    c3.sum(c1,c2);
    c3.print();
    return 0;
}