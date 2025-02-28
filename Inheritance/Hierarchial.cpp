#include<iostream>
using namespace std;

class Animal{
    public:

    void Intro(){
        cout << " I am Animal " << endl;
    }
};

class Dog : public Animal{
    public: 

    void MyIntro(){
        cout << "I am a Dog" << endl;
    }
};

class Cat : public Animal{
    public:

    void MyIntro(){
        cout << "I am a Cat" << endl;
    }
};

int main(){
    Dog d;
    Cat c;
    d.MyIntro();
    c.Intro();

}