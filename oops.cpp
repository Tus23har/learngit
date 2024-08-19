#include<iostream>
using namespace std;


class Hero{

    private:
    char level;

    public:
    int health;
    // Hero(int health,char level){
    //     this->health = health;
    //     this->level = level;
    // }

    // Hero(Hero &obj){
    //     this->level = obj.level;
    //     this->health = obj.health;

    //     cout << obj.level << " " << endl;
    // }

    void print(){
        cout << "Heath is : " << level;
    }

};

int main(){
    // Hero ramesh;
    // ramesh.health = 100;

    //To check if "this" is a pointer
    // Hero luffy(1,'A');
    // cout << "Address where luffy is stored : " << &luffy << endl;
    // Hero h1(luffy);
    // // cout << h1.level;


    Hero h2;
    cout << sizeof(h2);
    return 0;
}