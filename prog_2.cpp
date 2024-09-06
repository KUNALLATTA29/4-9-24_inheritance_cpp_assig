#include<bits/stdc++.h>
using namespace std;

class Festival {
private:
    string festivalName;
    string location;
    int date;

public:
    Festival(string n, string l, int d){
        festivalName=n;
        location=l;
        date=d;
    }
    void check(const Festival &obj1, const Festival &obj2) {
        if (obj1.date == obj2.date) {
            cout<<"yes";
        }else {
            cout<<"no";
        }
    }
};



int main() {

    Festival obj1("holi", "bikaner", 12);
    Festival obj2("diwali", "jaipur", 10);
    Festival obj("null","null",0);
    

    obj.check(obj1,obj2);

    
    return 0;
}