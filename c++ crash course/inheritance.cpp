#include<iostream>
using namespace std;
class Chef{
    public:
    void makeChicken()
    {
        cout<<"The chef makes chicken"<<endl;

    }
    void makeSalad()
    {
        cout<<"The chef makes salad ";

    }
    void makeSpecialDish()
    {
        cout<<"The chef makes bbq ribs"<<endl;
    }
};
class ItalianChef:public Chef{
    public:
void makePasta()
{
    cout<<"The chef makes pasta"<<endl;
}
void makeSpecialDish()
    {
        cout<<"The chef makes  mutton"<<endl;
    }


};
int main()
{
    Chef chef;
    chef.makeChicken();
    
    ItalianChef italianchef;
    italianchef.makeChicken();
    italianchef.makePasta();
    italianchef.makeSpecialDish();




    return 0;
}