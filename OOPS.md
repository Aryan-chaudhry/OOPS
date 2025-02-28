# OOPS

## 1. Introduction to OOPS

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

### 5. Access Specifier
Access Specifier define the scope (visibility) of class data mamber and member Function 
These are of three type 
1. Public
2. Privater
3. Protected

##### Public

In public Access Specifier the data member and member function can easily access and used within the class or outside the class There is no ristriction on data member and member function of the class

##### Private 

In Private Access Specifier the data memer and member function are accessible only inside the class neither in derived classes nor outside

##### protected

In Protected Access Specifier the data member and member function are accessible only with in the class and in derived classes

### 6. Access Modifier

Access Modifier change or enhance how class member behave, They do not control visibility but instead modify functionality 
example friend class

Note : To Access private and protected the data member and member function outside the class we can use frined class

friend class declare inside the class but implement outside the class

```
#include<iostream>
using namespace std;

class Info{
    protected:
    string Atm_Card = "7410-8525-9638";

    friend class f;
};

class f{
    public:

    void showMe(Info &st){
        string cardNo = st.Atm_Card;
        cout << "Your Card No is Private, but you can access " << cardNo << endl;
    }
};

int main(){
    Info st;
    f fri;
    fri.showMe(st);
    
}
```

## 2. Our Main 4 pillars of OOPS

##### 1. Inheritance
##### 2. Abstraction
##### 3. Encapsulation
##### 4. PolyMorphism




