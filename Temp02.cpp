#include <iostream>
using namespace std;
template <class T1,class T2>
class MyClass{
    public:
    T1 data1; T2 data2;
    MyClass(T1 a,T2 b){
        data1=a; data2=b;
    }
    void display(void){
        cout<<data1<<"\t"<<data2<<endl;
    }

};
int main(){
    MyClass <int,float> a(12,9.89);
    MyClass <int,char> b(55,'A');
    MyClass <char,float> c('n',79.26);
    a.display();
    b.display();
    c.display();

    return 0;
}