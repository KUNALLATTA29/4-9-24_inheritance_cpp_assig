#include<bits/stdc++.h>
using namespace std;

class Student {
    private:
        int studentid;
        char grade;
    public:
        Student(int one, char two){
            studentid=one;
            grade=two;
        }
        char send(){
            return grade;
        }
    
};

class GraduateStudent : public Student{
    public:
        GraduateStudent(int one, char two):Student(one,two){};
        void getGrade(){
            cout<<send();
        }
};



int main() {

    GraduateStudent obj(1,'A');
    obj.getGrade();
    return 0;
}