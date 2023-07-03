#include <iostream>

using namespace std;

class employee{
protected:
    string name;
    unsigned long int number;
public :
    void setInfo(){
 cout<<"What is the surname: \n";       cin>>name;
 cout<<"What is the number: \n";       cin>>number;
    }
    void getInfo() const {
    cout<<"\nName: "<< name <<endl;
    cout<<"\nNumber: "<< number <<endl;
    }
};

class manager : public employee
{
protected:
    string title;
    double club_dues;

public:
    void setInfo(){
    employee::setInfo();
    cout<<"What is the Title: \n";       cin>>title;
    cout<<"Amount of club dues: \n";       cin>>club_dues;
    }

     void getInfo() const {
    employee::getInfo();
    cout<<"\nTitle: "<< title <<endl;
    cout<<"\nClub Dues: "<< club_dues <<endl;
    }
};

class scientist : public employee
{
 protected :
     int publis;

 public:
    void setInfo(){
    employee::setInfo();
    cout<<"What is the number of Publications: \n";       cin>>publis;
    }
     void getInfo() const {
    employee::getInfo();
    cout<<"\nPublications: "<< publis <<endl;
     }
};

class laborer : public employee
{
public :
    void setInfo(){
    employee::setInfo();
    }
    void getInfo(){
    employee::getInfo();
    }
};

int main()
{
manager m1;
scientist s1;
laborer l1;
m1.setInfo();
s1.setInfo();
l1.setInfo();
m1.getInfo();
s1.getInfo();
l1.getInfo();
    return 0;
}
