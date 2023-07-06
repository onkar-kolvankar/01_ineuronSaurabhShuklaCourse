// Define a class Bill and define its member function get() to take detail of customer ,
// calculateBill() function to calculate electricity bill using below tariff :
// Upto 100 unit RS. 1.20 per unit
// From 100 to 200 unit RS. 2 per unit
// Above 200 units RS. 3 per unit

#include<iostream>
using namespace std;

class Bill{
    char name[30];
    float units , finalbill = 0;

    public:
        void get()
        {
            char n[30];
            cout << "Enter your name :";
            cin.getline(name,30);
            //strcpy(name,n);
            cout << "Enter the number of units consumed :";
            cin >> units;
        }

        float getUnits()
        {
            return units;
        }
        void getName()
        {
            cout << name;
        }
        void calculateBill()
        {
            if(units > 200)
            {
                finalbill += ((units - 200) * 3) + (100 * 2) + (100 * 1.2);
            }
            else if(units > 100 )
            {
                finalbill += ((units - 100) * 2) + (100 * 1.2);
            }
            else {
                finalbill += units * 1.2;
            }
        }

        float getBill()
        {
            return finalbill;
        }


};

int main()
{
    Bill b1;
    b1.get();
    b1.calculateBill();
    cout <<"Hi " ;
    b1.getName();
    cout << " Your bill for " << b1.getUnits() << " units of electricity is " << b1.getBill() << " /-";

    return 0;
}