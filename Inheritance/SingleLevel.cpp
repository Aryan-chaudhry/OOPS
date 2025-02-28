#include<iostream>
using namespace std;

class Animal{
    public:

    void Info(){
        cout << "i am an Aniaml" << endl;
    }
};

class dog : public Animal{
    public:

    void myInfo(){
        cout << "I am  a Dog" << endl;
    }
};

int main(){
    dog d;
    d.myInfo();
    d.Info();
}