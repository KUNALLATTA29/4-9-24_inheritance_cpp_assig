#include<bits/stdc++.h>
using namespace std;

class Song {
private:
    string title;
    string artist;
    int duration;

public:
    Song(string n, string l, int d){
        title=n;
        artist=l;
        duration=d;
    }
    void check(const Song &obj1, const Song &obj2) {
        if (obj1.duration == obj2.duration) {
            cout<<"they are equal";
        }else if(obj1.duration > obj2.duration) {
            cout<<"first artist has long duration";
        }else{
            cout<<"second artist has long duration";
        }
    }
};



int main() {

    Song obj1("waah", "ar", 12);
    Song obj2("dis", "hony singh", 15);
    Song obj("null","null",0);
    

    obj.check(obj1,obj2);

    
    return 0;
}