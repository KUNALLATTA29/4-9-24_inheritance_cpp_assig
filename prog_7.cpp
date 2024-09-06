#include<bits/stdc++.h>
using namespace std;

class Vehicle {
    private:
        int make;
        string model;

    public:
        Vehicle(int m, string b){
            make=m;
            model=b;
        }
        int getmake(){
            return make;
        }
        string getmodel(){
            return model;
        }
    
};

class Car : public Vehicle{
    public:
        Car(int m, string b):Vehicle(m,b){};
        void getDetails(){
            cout<<getmake()<<endl;
            cout<<getmodel()<<endl;
        }
};



int main() {

    Car obj(1978, "maruti");
    obj.getDetails();
    return 0;
}