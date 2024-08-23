#include<iostream>
using namespace std;

class Teacher{
private:
double salary;


public:
string name;
string city;

//here we have created two constructor(default and parameteised) but calling one parameterised cons so this concep is called constructor overloading.
// name same but parameter diff -> constructor overloading
Teacher(){      // default constructor 
    cout<<"defauly cons calling";
}
Teacher(string name, string city, double salary){       // parameterised constructor 
this->salary= salary;  // this is used to define object properties if we'll not use this keyword then conpiler will confuse which variable value is fun arguement or class member 
this->name = name;
this->city = city;
}

Teacher(Teacher &obj){  // custom copy constructor 
this->name = obj.name;
this->city = obj.name;
this->salary = obj.salary;
}

void printvalue(){
    cout<<"name:-"<<name<<endl;
    cout<<"sakary:-"<<salary;
}
};

int main()
{
    Teacher T("sam","bhopal",23000);
    //T.printvalue();

    // Teacher T1(T);  // default copy constriuctor 
    // T.printvalue();

    Teacher T1(T);  // custom copy constriuctor  - when we'll not create custom constructor that time by default copy cons will call.
    T.printvalue();
    return 0;
}