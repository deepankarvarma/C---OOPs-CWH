#include<iostream>
using namespace std;
class Student{
    protected:
    int rn;
    public:
    void set_rn(int a);
    void get_rn();
};
void Student::set_rn(int a){
    rn=a;
}
void Student::get_rn(){
    cout<<"Roll Number is "<<rn<<endl;
}
int main(){
    Student s;
    int rn;
    cout<<"Enter the roll number of the student"<<endl;
    cin>>rn;
    s.set_rn(rn);
    s.get_rn();
    return 0;
}