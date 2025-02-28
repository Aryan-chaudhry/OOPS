#include<iostream>
using namespace std;

class Mother{
    public:
    void Intro(){
        cout << "I am Mother" << endl;
    }
};

class Father{
    public:
    void Intro(){
        cout << "I am Father" << endl;
    }
};

class Son : public Mother, public Father{
    public:
    void myIntro(){
        cout << "I am child" << endl;
    }
};

int main(){
    Son s;
    s.myIntro();
    s.Mother::Intro();
    s.Father::Intro();
}