// 3) Write a CPP program to check whether two strings are same or not
// using overloading of == operator.

#include <iostream>
using namespace std;

class Str{
    string str;
    public:
    Str(string s){
        str = s;
    }
    bool operator==(Str s){
        return str == s.str;
    }
};

int main(){
    Str s1("Hello"), s2("Hello");
    if(s1 == s2){
        cout << "s1 and s2 are same." << endl;
    } else {
        cout << "s1 and s2 are not same." << endl;
    }
    return 0;
}
