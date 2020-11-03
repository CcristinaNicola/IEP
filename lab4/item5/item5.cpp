#include <iostream>

class Student {
    private:
        const char* name;  
        int age;
        int semester_grade;

    public:
        Student();   //constructor
        ~Student();  //destructor
};

Student::Student():
    name("ION"),
    age(22),
    semester_grade(8)
    {
        std::cout<<"Constructor : Studentul "<< this->name << " cu varsta de " << this->age <<" de ani are media semestriala " << this-> semester_grade<<"."<<"\n";
    }

Student::~Student()
    {
        std::cout<<"Acesta e un destructor!"<<"\n";
    }   

int main()
{
    Student student1;
    std::cout<<"Student.  ";


return 0;
}