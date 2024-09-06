#include<bits/stdc++.h>
using namespace std;

class Event {
private:
    string eventname;
    string venue;
    int date;

public:
    Event(string e, string v, int d){
        eventname=e;
        venue=v;
        date=d;
    }
    void check(const Event &obj1, const Event &obj2) {
        if(obj1.venue==obj2.venue){
            cout<<"yes";
        }else{
            cout<<"no";
        }
    }
};



int main() {

    Event obj1("shaadi", "babuhouse", 14);
    Event obj2("shaadi", "lalutent", 15);
    Event obj("null","null",23);
    
    obj.check(obj1,obj2);
    
    return 0;
}