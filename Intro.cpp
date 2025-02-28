#include<iostream>
using namespace std;

class Animal{
    public: // Access Specifier

    int myage;
    string MyName;

    Animal(){ // default Constructor
        int age = 10;
        string Name = "Snake";
        cout << "Defualt Constructor" << endl;
        cout << "I am " << Name << " having age : " << age << endl;
    }

    Animal(int age, string Name){ // parametrized Constructor
        myage = age;
        MyName = Name;
        cout << "Parametrized Constructor" << endl;
        cout << "I am " << MyName << " having age : " << myage << endl;
    }

    Animal(const Animal &st){ // copy constructor
        myage = st.myage;
        MyName = st.MyName;
        cout << "Copy Constructor" << endl;
        cout << "I am " << MyName << " having age : " << myage << endl;
    }

    ~Animal(){ // destructor
        cout << "Distructor Executed" << endl;
    }

    void intro(){
        cout << "Hi i am Animal" << endl;
    }
};

int main(){
    // Animal st; // object
    // Animal st(); // default Constructor  ** imp comment but still running why? because when we create an object default constructor call automatically
    Animal st(20, "Tortoise"); // parametrized constructor
    Animal st1 = st;
    st.intro();
}
