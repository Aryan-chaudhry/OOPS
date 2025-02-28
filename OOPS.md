# OOPS

### 1. Class

class is a userdefined datatype which hold its own data members and member function which can be accessed and used by creating an instance of a class.

### 2. Object

Object is an instance of class. When we create an class no memory is allocated but when we create an instance of class a memory is allocated

Example 

```
#include<iostream>
using namespace std;

class Animal{
    public:

    void intro(){
        cout << "Hi i am Animal" << endl;
    }
};

int main(){
    Animal st;
    st.intro();
}

```

### 3. Constructor

A constructor is a member funtion of a class having no retun type and have a same name as a class which is used to initialize an object of a class 

In c++ a constructor call automatically when we create an object (default Constructor)

There are three type of constructor
1. Default Constructor (it is a member function having No Parameter)
2. Parametrized Constructor (it is a member function having Parameter)
3. Copy Constructor (it is a member function that initialize an object using using another object of same class)

Note: Compiler generate two type of constructor by itself

1. Default Construtor
2. Copy Constructor

But if any Constructor is created by user than default constructor will not created by compiler

```
#include<iostream>
using namespace std;

class Animal{
    public:

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
```

### 4. Destructor

Destructor is a member function have no return type and don't take any argument and have same name as a class which is used to destruct or delete the object.

```
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
```
