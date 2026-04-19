// Write a CPP program to overload binary * operator using friend
// function.

#include <iostream>
using namespace std;

class Num{
    int num;
    public:
    Num(int n){
        num = n;
    }
    friend Num operator*(Num a, Num b){
        return Num(a.num * b.num);
    }
    void display(){
        cout << "Result: " << num << endl;
    }
};

int main(){
    Num n1(5), n2(10);
    Num result = n1 * n2;
    result.display();
    return 0;
}
