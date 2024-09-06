#include<bits/stdc++.h>
using namespace std;

class Person {
    private:
        string name;

    public:
        Person(string b){
            name=b;
        }
        string geting(){
            return name;
        }
    
};

class Student : public Person{
    public:
        Student(string b):Person(b){};
        void getName(){
            cout<<geting();
        }
};



int main() {

    Student obj("kunal");
    obj.getName();
    return 0;
}