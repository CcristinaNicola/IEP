#include <iostream>
#include <memory> 

using namespace std;

//Item 13
class A { 
public: 
    void show_auto() 
    { 
        cout << "A::show_auto" << endl; 
    } 

    void show_shared() 
    { 
        cout << "A::show_shared" << endl; 
    } 

}; 

//Item 14
class Mutex {
    public:
        Mutex();            //constructor
        ~Mutex();           //destructor
 
        void lock(Mutex *pm);
        void unlock(Mutex *pm);
};

Mutex::Mutex(){
    cout<<"Constructor Mutex called\n";
}

Mutex::~Mutex(){
    cout<<"Destructor Mutex called\n";
}

void Mutex::lock(Mutex *pm){
    cout<<" locked\n";
}

void Mutex::unlock(Mutex *pm){
    cout<<" unlocked\n";
}

class Lock: public Mutex{
    private: 
        Mutex *mutexPtr;

    public:
        explicit Lock(Mutex *pm): mutexPtr(pm){
            lock(mutexPtr);
        }
        ~Lock() {
            unlock(mutexPtr);    //la destructor de da unlock automat
        }
};

class B{
    public:
        B();
        ~B();
        void print(int n, char c);
    private:
        Mutex m;
};

B::B(){
        cout<<"Constructor B called\n";
    }

B::~B() {
        cout<<"Destructor B called\n";
    }

void B::print(int n,char c){
    
        for(int i=1;i<=n;i++){
            Lock ml(&m);
            cout<<c<<"\n";
        }
        cout<<"\n";
    }

class Lock_Uncopyable {
   protected: 
       Lock_Uncopyable() {
           cout<<"Constructor Lock_Uncopyable. \n";
       } 
       ~Lock_Uncopyable() {
           cout<<"Destructor Lock_Uncopyable. \n";
       } 
   private:  // fiind private nu pot fi copiate de compilator 
       Lock_Uncopyable(const Lock_Uncopyable&); 
       Lock_Uncopyable& operator = (const Lock_Uncopyable&);
};    


int main() 
{ 
    // ///////////////////////////auto-ptr///////////////////////////////////////////////////////////////////////////

    auto_ptr<A> p1(new A);         // p1 is an auto_ptr of type A 
    p1->show_auto(); 
  
    cout <<"Memory of p1: "<<p1.get() << endl;           // returns the memory address of p1 
    
    auto_ptr<A> p2(p1);            // copy constructor called, this makes p1 empty. 
    p2->show_auto(); 
  
    cout <<"Memory of p1: "<<p1.get() << endl;           // p1 is empty now 
  
    cout <<"Memory of p2: "<<p2.get() << endl;           // p1 gets copied in p2 

  
    // ////////////////////////shared-ptr/////////////////////////////////////////////////////////////////////////
    cout<<"\n";

    shared_ptr<A> p3(new A); 
    p3->show_shared(); 

    cout <<"Memory of p3: "<<p3.get() << endl; 
    
    shared_ptr<A> p4(p3); 
    p4->show_shared(); 

    cout <<"Memory of p3: " << p3.get() << endl; 
    cout <<"Memory of p4: "<< p4.get() << endl; 
  
    // Returns the number of shared_ptr objects 
    // referring to the same managed object. 
    cout <<"Number of shared_ptr objects referring to the same managed object for p3: " <<p3.use_count() << endl; 
    cout <<"Number of shared_ptr objects referring to the same managed object for p4: "<< p4.use_count() << endl; 
  
    // Relinquishes ownership of p3 on the object 
    // and pointer becomes NULL 
    p3.reset(); 
    cout <<"Memory of p3: " << p3.get() << endl; 
    cout <<"Number of shared_ptr objects referring to the same managed object for p4: "<< p4.use_count() << endl; 
    cout <<"Memory of p4: " << p4.get() << endl; 

    //////////////////////////mutex/////////////////////////////////////////////////////////////////////////
    cout<<"\n";

    B b1,b2;
    b1.print(2,'a');
    b2.print(2,'b');

    cout<<"Preventing copying\n";
    // Lock_Uncopyable copy1,copy2;
    // b1=b2;

    return 0; 
} 
