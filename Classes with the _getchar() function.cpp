#include <iostream>
#include<conio.h>

using namespace std;

class tollbooth{
private :
    unsigned int total;
    double amount;

public:
    tollbooth(){
    total = 0;
    amount = 0;
    }
    void payingCar(){
    total++;
    amount += 0.50;
    }
    void nopayCar(){
    total++;
    }

    void display() const
    {
        cout << "The total cars are :"<<total<<endl;
        cout << "The total amount is :"<<amount<<endl;
    }

};

int main()
{

    tollbooth booth;
    char key;

    cout << "Press 'P' for paying car, 'N' for non-paying car, or 'Esc' to exit." <<endl;

    do {
        key = _getch();
        if (key == 'P' || key == 'p'){
            booth.payingCar();
            cout<<"Paying Car Included\n";}
        else if (key == 'N' || key == 'n'){
            booth.nopayCar();
            cout<<"No paying Car Included\n";}
    } while (key != 27); // ASCII value for Esc key

    booth.display();

    return 0;
}
