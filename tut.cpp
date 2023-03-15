#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string s="Aditya Singh Rathore";
    string s1;
    //ofstream out("IO.txt");
    //out<<s;
    ifstream in("IO.txt");
    getline(in,s1);
    cout<<s1<<endl;

    return 0;
}
