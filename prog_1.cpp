#include<bits/stdc++.h>
using namespace std;

class Furniture {
private:
    string furnitureType;
    string material;
    int price;

public:
    Furniture(string Type, string mat, int p){
        furnitureType=Type;
        material=mat;
        price=p;
    }
    void comparePrices(const Furniture &f1, const Furniture &f2) {
        if (f1.price > f2.price) {
            cout<<f1.furnitureType<<" is expensive."<< endl;
        }else if (f1.price < f2.price) {
            cout<<f2.furnitureType<<" is expensive."<< endl;
        }else {
            cout<<"Both have same price." << endl;
        }
    }
};



int main() {

    Furniture chair("Chair", "Wood", 150);
    Furniture table("Table", "Metal", 200);
    Furniture obj("null","null",0);
    

    obj.comparePrices(chair, table);

    
    return 0;
}