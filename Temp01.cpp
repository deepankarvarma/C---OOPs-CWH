#include <iostream>
using namespace std;
template <class T>
class Vector{
    public:
    T *arr;
    int size;
    Vector(int a){
        size=a;
        arr=new T[size];//Rem
    }
    T dotProduct(Vector &v){
        T d=0;
        for(int i=0;i<size;i++){
            d+=this->arr[i]*v.arr[i];//Rem
        }
        return d;
    }
};
int main()
{
    Vector <int> Vec1(3);
    Vector <int> Vec2(3);
    Vec1.arr[0]=1;
    Vec1.arr[1]=2;
    Vec1.arr[2]=4;
    Vec2.arr[0]=3;
    Vec2.arr[1]=2;
    Vec2.arr[2]=0;
    int a=Vec1.dotProduct(Vec2);
    cout<<a<<endl;
    return 0;
}
