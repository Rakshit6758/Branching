#include <iostream>
using namespace std;

class Test
{
    private:
        int data1;
        float data2;

    public:
       
       void insertIntegerData(int d) //member function1
       {
          data1 = d;
          cout << "Number: " << data1;
        }

       float insertFloatData()    //member function2
       {
           cout << "\nEnter data: "; // enter data
           cin >> data2;
           return data2; //return
        }
};

 int main()
 {
      Test o1, o2;
      float secondDataOfObject2; 

      o1.insertIntegerData(12);
      secondDataOfObject2 = o2.insertFloatData();

      cout << "You entered " << secondDataOfObject2; // prints you entered
      return 0;
 }
