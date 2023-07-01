#include <iostream>

using namespace std;

class Friendly{
protected :
    int money;

public :
    void setMoney(int a){
    money = a;
    }

    void useMoney();
    friend void showMoney( Friendly paddy);
};

void Friendly::useMoney(){
money--;
}

void showMoney( Friendly paddy){
cout<< paddy.money;
}

int main(){
Friendly me;
me.setMoney(42);
me.useMoney();
me.useMoney();
me.useMoney();
me.useMoney();

showMoney( me);
}
