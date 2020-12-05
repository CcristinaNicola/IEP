#include <iostream>
using namespace std;

class Student {
    private:
        string name;
    
    public:
        Student();
        Student(string name);
        Student(const Student &s);
        Student& operator=(const Student &s);
        ~Student();
        void swap(Student& s);
        void getInfo();
};


Student::Student(string name): name(name)
{
    cout<<"Constructor--Studentul are numele:" << this->name <<endl; 
}

//item 12 prin copy constructor
Student::Student(const Student &s) : name(s.name){}

// //item 12 prin copy assignment
// Student& Student :: operator=(const Student& s)
// {
//     cout<<"Assignment operator is called"<<endl;
//     name = s.name;

//     return *this;
// }      

//item 11
Student& Student::operator=(const Student& s)
{
    Student temp(s);
    swap(temp);
    cout<<"Assignment operator is called"<<endl;

    return *this; //item 10
}

void Student::swap(Student& s)
{
    string temp = name;
    name = s.name;
}

void Student::getInfo()
{
    cout<<"\n Studentul are numele "<<this->name;
    cout<<"\n";
}

//destructor
Student::~Student(){}

int main(){

    Student student1("Ioana"), student2("Stefan"),student3("Vasile");
    
    student2 = student1; // copy assigment
    student2.operator = (student1); // copy assingment

    Student student4(student3); // copy constr
    Student student5 = student3; // copy constr
  
    student1.getInfo();
    student2.getInfo();
    student3.getInfo();
    student4.getInfo();
    
    return 0;
}