#include <iostream>
using namespace std;
template < class A=int , class B=float , class C=char>
class Aditya{
    public:
    A a; B b; C c;
    Aditya(A a,B b,C c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void Display(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
    }
};
int main()
{
    Aditya <> Adi1(10,25.7,'m');
    Adi1.Display();  
    cout<<endl;
    Aditya <float,int ,char> Adi2(1.301,25,'p');
    Adi2.Display();  

    return 0;
}