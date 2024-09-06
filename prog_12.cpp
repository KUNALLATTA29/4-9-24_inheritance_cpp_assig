#include<bits/stdc++.h>
using namespace std;

class Product {
    private:
        int productid;
        int price;
    public:
        Product(int one, int two){
            productid=one;
            price=two;
        }
        int send(){
            return price;
        }
    
};

class Electronics : public Product{
    public:
        Electronics(int one, int two):Product(one, two){};
        void getPrice(){
            cout<<send();
        }
};



int main() {

    Electronics obj(1,2000);
    obj.getPrice();
    return 0;
}