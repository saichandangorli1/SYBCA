// Write a CPP program to overload pre - decrement and post - decrement operator

#include <iostream>
using namespace std;

class Num{
    int num;
    public:
    Num(int n){
        num = n;
    }
    Num operator--(){ // Pre-decrement
        --num;
        return *this;
    }
    Num operator--(int){ // Post-decrement
        Num temp = *this;
        num--;
        return temp;
    }
    void display(){
        cout << "Current value: " << num << endl;
    }
};

int main(){
    Num n(10);
    n.display();
    --n; // Pre-decrement
    n.display();
    n--; // Post-decrement
    n.display();
    return 0;
}