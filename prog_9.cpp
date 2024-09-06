#include<bits/stdc++.h>
using namespace std;

class Employee {
    private:
        int id;
        int salary;

    public:
        Employee(int i, int s){
            id=i;
            salary=s;
        }
        int getsal(){
            return salary;
        }
    
};

class Manager : public Employee{
    public:
        Manager(int i, int s):Employee(i,s){};
        void getSalary(){
            cout<<getsal();
        }
};



int main() {

    Manager obj(1, 25000);
    obj.getSalary();
    return 0;
}