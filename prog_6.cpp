#include<bits/stdc++.h>
using namespace std;

class Animal {
    private:
        string species;

    public:
        Animal(string s){
            species=s;
        }
        string printspe(){
            return species;
        }
    
};

class Dog : public Animal{
    public:
        Dog(string s):Animal(s){};
        void getSpecies(){
            cout<<printspe();
        }
};



int main() {

    Dog obj("cat");
    obj.getSpecies();
    return 0;
}