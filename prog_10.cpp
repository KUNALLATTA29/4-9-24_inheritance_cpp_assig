#include<bits/stdc++.h>
using namespace std;

class Book {
    private:
        string title;
        string author;
    public:
        Book(string t, string au){
            title=t;
            author=au;
        }
        string send(){
            return title;
        }
    
};

class Ebook : public Book{
    public:
        Ebook(string one, string two):Book(one, two){};
        void getTitle(){
            cout<<send();
        }
};



int main() {

    Ebook obj("jungel-book", "mogli");
    obj.getTitle();
    return 0;
}