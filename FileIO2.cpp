#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ofstream out;
    out.open("IO.txt");
    out<<"Aditya Singh Rathore\n";
    out<<"Computer Engg.\n";
    out<<"COE17 ";
    out.close();
    ifstream in;
    in.open("IO.txt");
    string h;
    while(in.eof()==0){
        getline(in,h);
        cout<<h<<endl;
    }
    in.close();
    return 0;

}