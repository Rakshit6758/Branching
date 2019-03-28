#include <iostream>
using namespace std;
class car
{
  private:
    int car_number;
    char car_model[10];
    char car_company[20];
    char car_name[20];
    int car_doors;
  public:
    void getdata(); //function declaration
    void showdata();
};
// function definition
void car::getdata()
 {
   cout<<"Enter car number: "; cin>>car_number;
   cout<<"Enter car model: "; cin>>car_model;
   cout<<"Enter car company: "; cin>>car_company;
   cout<<"Enter car name: "; cin>>car_name;
   cout<<"Enter car doors: "; cin>>car_doors;
 }
void car::showdata()
 {
   cout<<"Car number is "<<car_number;
   cout<<"\nCar model is "<<car_model;
   cout<<"\nCar company is "<<car_company;
   cout<<"\nCar name is "<<car_name;
   cout<<"\nCar doors are "<<car_doors;
 }
// main function starts
int main()
 {
    car c1;
    c1.getdata();
    c1.showdata();
    return 0;
 }

