#include<bits/stdc++.h>
using namespace std;

class Camera {
private:
    string brand;
    string resolution;
    int price;

public:
    Camera(string n, string l, int d){
        brand=n;
        resolution=l;
        price=d;
    }
    void add_access(int a) {
        price+=a;
    }
    void display(){
        cout<<price;
    }
};



int main() {

    Camera obj("sony", "1080p",2500);
    obj.add_access(5000);
    obj.display();

    
    return 0;
}