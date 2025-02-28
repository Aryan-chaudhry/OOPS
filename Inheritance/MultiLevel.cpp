#include<iostream>
using namespace std;

class GrandFather{
    public:

    void grandFatherIntro(){
        cout << "I am Grand Father" << endl; 
    }
};

class Father : public GrandFather{
    public:

    void fatherIntro(){
        cout << "I am Father" << endl;
    }
};

class Son : public Father{
    public:

    void sonIntro(){
        cout << "I am Son" << endl;
    }
};

int main(){
    Son s;
    s.grandFatherIntro();
    s.fatherIntro();
    s.sonIntro();

    return 0;
}