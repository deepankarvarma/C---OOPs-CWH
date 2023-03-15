#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    char c;
    //string s;
    ifstream in("sample60.txt");
     while(!in.eof()){
      //  There as multiple ways for displaying content of a file:-
      // 1.getline(in,s);  -> s is string 
      // You can write cout above or below both will have same output with spaces b/w the words.
      // 2.c=in.get();    -> c is char 
      // You can write cout above or below both will have same output with spaces b/w the words. 
      // 3.in.get(c);   -> c is char
      // if we write cout above this, it will have correct output with spaces b/w but if we write 
      //cout below it will print the last letter twice because when we write !in.eof() it sets the cursor at the 
      //staring point i.e. to the left of H and at last the cursor will be at the right of l hence it will again
      //print l
      // 4.in>>c;  -> c is char
      //if we write cout above the same it will have output without spaces
      //it we write cout below it the output will be same as above case but without spaces, i.e one extra l
      
    }
    
    in.close();
    return 0;
}