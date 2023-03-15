#include<iostream>
#include<math.h>
using namespace std;
class Distwo{
    friend void distance(Distwo,Distwo);
    int x,y;
    public:
    Distwo(int a,int b){
    x=a;
    y=b;
    }
    
};
void distance(Distwo a1,Distwo a2){
        int distance;
        distance=sqrt((a1.x-a2.x)*(a1.x-a2.x)+(a1.y-a2.y)*(a1.y-a2.y));
        cout<<"Distance is "<<distance<<endl;
    }
int main(){
    Distwo y(1,0);
    Distwo x=Distwo(70,0);
    distance(x,y);
}