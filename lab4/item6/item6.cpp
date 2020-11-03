#include <iostream>
using namespace  std;

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

Student(const Student&); // declarations only
Student& operator=(const Student&);
};

class Student_Uncopyable {
    protected: 
        Student_Uncopyable() {
            cout<<"Constructor. \n";
        } 
        ~Student_Uncopyable() {
            cout<<"Destructor. \n";
        } 
    private:
        Student_Uncopyable(const Student_Uncopyable&); 
        Student_Uncopyable& operator=(const Student_Uncopyable&);
};

int main(){
    cout<<"Preventing copying\n";
}