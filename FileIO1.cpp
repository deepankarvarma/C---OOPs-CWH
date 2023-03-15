#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string s;
    ofstream out("IO.txt");
    cout<<"Enter Something bruhh\n";
    getline(cin,s);
    out<<"My Name is : "<<s<<endl;
    out.close();
    string h;
    ifstream in("IO.txt");
    getline(in,h);
    cout<<h<<endl;
    in.close();
    return 0;
}