#include<iostream>
using namespace std;
class One{
 public:
 One(){
     cout<<"One";
 }
 ~One(){
     cout<<"One b";
 }
 
};
class Two:public One{
    public:
    Two(){
        cout<<"Two";
    }
    ~Two(){
        cout<<"Two b";
    }
};
int main(){
    One o;
    Two* ptr;
    ptr=&o;
 return 0;
}