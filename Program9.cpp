#include <iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "This is class A" << endl;
    }
};

class B : public A {
public:
    void displayB() {
        cout << "This is class B, derived from class A" << endl;
    }
};

class C : public A {
public:
    void displayC() {
        cout << "This is class C, derived from class A" << endl;
    }
};

class D : public A {
public:
    void displayD() {
        cout << "This is class D, derived from class A" << endl;
    }
};

class E : public B {
public:
    void displayE() {
        cout << "This is class E, derived from class B (which in turn is derived from class A)" << endl;
    }
};

int main() {
  
    A objA;
    B objB;
    C objC;
    D objD;
    E objE;
  
    cout << "Calling display functions for each class:" << endl;
    
    objA.displayA();   
    objB.displayA();   
    objB.displayB();   
    
    objC.displayA();   
    objC.displayC();   
    
    objD.displayA();   
    objD.displayD();   
    
    objE.displayA();   
    objE.displayB(); 
    objE.displayE();  

    return 0;
}
