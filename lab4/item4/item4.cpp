#include <iostream>
using namespace std;

class Student {
    private:
        string name;
        int age;
        int semester_grade;
    
    public:
        Student(); //default constructor
        Student(string name,int age, int semester_grade); 
        ~Student(); //destructor
        void getInfo();
};

//initializare
Student::Student(string n,int a, int g):
    name(n),
    age(a),
    semester_grade(g)
{
    cout<<"Constructor: Studentul "<< this->name <<" cu varsta de " << this->age <<" are media semestriala "<<this->semester_grade<<"\n";
}

Student::~Student(){
    cout<<"Destructor. \n";
}

void Student::getInfo(){
    cout<<"Informatii: Studentul "<< this->name <<" cu varsta de " << this->age <<" are media semestriala "<<this->semester_grade<<"\n";
}

int main(){

    Student ioana("Ioana",23,9);
    ioana.getInfo();

    return 0;
}