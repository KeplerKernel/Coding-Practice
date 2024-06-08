//Templates Example; + Operator overloading

#include<iostream>

using namespace std;

template <typename T>

T square (T x)
{
    return x*x;
    
}

template <typename T>
class Example
{
    
    T arr[100];
    int size;
public:
    Example():size(0) {};
    void push(T x) {arr[size] = x; size++; }
    
    T get(int i) const {return arr[i];}
    int getSize() const {return size;}
    void print() const {for (int i = 0; i < size ; i++){cout <<arr[i]<<endl;}}

};

template <typename T>
Example<T> operator*(const Example<T> &rhs1,const Example<T> &rhs2){
    Example<T> ret;
    for(int i = 0; i <rhs1.getSize(); i++){
        ret.push(rhs1.get(i)*rhs2.get(i));
    }
    return ret;
}

int main()
{
    Example<int> ex;
    ex.push(2);
    ex.push(12);
    ex.push(22);
    ex = square(ex);
    ex.print();
    return 0;
}