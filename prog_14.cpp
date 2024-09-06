#include<bits/stdc++.h>
using namespace std;

class Computer {
    private:
        string brand;
    public:
        Computer(string one){
            brand=one;
        }
        string send(){
            return brand;
        }
    
};

class Laptop : public Computer{
    public:
        Laptop(string one):Computer(one){};
        void getBrand(){
            cout<<send();
        }
};



int main() {

    Laptop obj("hp");
    obj.getBrand();
    return 0;
}