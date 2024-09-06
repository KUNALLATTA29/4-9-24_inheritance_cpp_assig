#include<bits/stdc++.h>
using namespace std;

class Shape {
    private:
        string color;
    public:
        Shape(string t){
            color=t;
        }
        string send(){
            return color;
        }
    
};

class Circle : public Shape{
    public:
        Circle(string one):Shape(one){};
        void getColor(){
            cout<<send();
        }
};



int main() {

    Circle obj("red");
    obj.getColor();
    return 0;
}