#include <iostream>
using namespace std;

class student
{
	private:
		char  Name[30];
		int   RollNo;
		int   SAPID;
		char  Branch;
	public:
		void getDetails(void);	 //member function to get student's details
		void putDetails(void);	//member function to print student's details
	
};

  void student::getDetails(void)  //member function definition, outside of the class
{
	cout << "Enter Name: " ;
	cin >> Name;
	cout << "Enter Roll number: ";
	cin >> RollNo;
	cout << "Enter SAPID: ";
	cin >> SAPID;
	cout << "Enter Branch: ";
	cin >> Branch;
}

void student::putDetails(void)   //member function definition, outside of the class
{
	cout << "Student details:\n";
	cout << "Name:"<< Name << ",Roll Number:" << RollNo << ",SAPID:" << SAPID << ",Branch:" << Branch;
}

int main()
{
	student std;		
	
	std.getDetails();
	std.putDetails();
	
	return 0;
}
