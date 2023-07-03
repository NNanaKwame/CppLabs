#include <iostream>

using namespace std;

class publication
{
protected :
    string title;
    float price;

public:
    void getData()
    {
        cout<<"Input the Title : ";            cin>>title;
        cout<<"Input the Price : ";            cin>>price;
    }

    void putData()
    {
        cout<<"Title : "<<title<<endl;
        cout<<"Price : $"<<price<<endl;
    }
};

class book : public publication
{
protected:
    int pgCount;

public:
    void getData()
    {
        publication::getData();
         cout<<"Input the Number of Pages : ";            cin>>pgCount;
    }
    void putData()
    {
        cout<<"\n\n*************************************************************************************\n\n";
        publication::putData();
        cout<<"Number of Pages : "<<pgCount<<endl;
        cout<<"\n\n*************************************************************************************\n\n";
    }
};

class tape : public publication
{
protected:
    float playTime;

public:
    void getData()
    {
        publication::getData();
         cout<<"Input the Play Time : ";            cin>>playTime;
    }
    void putData()
    {
        cout<<"\n\n*************************************************************************************\n\n";
        publication::putData();
        cout<<"Play Time: "<<playTime<<"mins"<<endl;
        cout<<"\n\n*************************************************************************************\n\n";
    }
};

int main()
{
        cout<<"\n\n*************************************************************************************\n\n";
book b1;
tape t1;
b1.getData();
b1.putData();
t1.getData();
t1.putData();

    return 0;
}
