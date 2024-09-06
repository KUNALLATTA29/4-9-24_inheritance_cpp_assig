#include<bits/stdc++.h>
using namespace std;

class House {
    private:
        string address;
    public:
        House(string one){
            address=one;
        }
        string send(){
            return address;
        }
    
};

class Apartment : public House{
    public:
        Apartment(string one):House(one){};
        void getAddress(){
            cout<<send();
        }
};



int main() {

    Apartment obj("bikaner");
    obj.getAddress();
    return 0;
}