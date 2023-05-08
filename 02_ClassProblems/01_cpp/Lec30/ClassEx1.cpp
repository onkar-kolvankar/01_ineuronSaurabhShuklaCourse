#include<iostream>
using namespace std;

class ComplexNumber{

    float realPart,imgPartCoeff;
    
    public :
        void setRealImgCoeff(float a,float b){
            realPart = a;
            imgPartCoeff = b;
        }

        void displayComplexNo(){
            printf("%.2f + (%.2f)i",realPart,imgPartCoeff);
        }

        void displayComplexNo(ComplexNumber c2,ComplexNumber c3){
            cout<< realPart << " + " << imgPartCoeff << "i" << endl;
            cout<< c2.realPart << " + " << c2.imgPartCoeff << "i" << endl;
            cout<< c3.realPart << " + " << c3.imgPartCoeff << "i" << endl;
        }

        void add(ComplexNumber c2){
            cout << "Total = " << realPart + c2.realPart << " + " << imgPartCoeff + c2.imgPartCoeff << " i" << endl;
        }

};

class Time{

    int hours , minute , seconds;

    public:
        void setTime(int a , int b , int c)
        {
            hours = a;
            minute = b;
            seconds = c;
        }

        void displayTime()
        {
            cout<<"TIME = "<<hours<<" : "<<minute<<" : "<<seconds;
        }

        

};

int main(){

    // float a , b;
    // cout << "Enter the real and img part coeff.";
    // cin >> a >> b;

    // ComplexNumber c1;
    // c1.setRealImgCoeff(a,b);

    // c1.displayComplexNo();

    // cout << "Enter the hours , minutes , seconds :";
    // int a , b , c;
    // cin >> a >> b >> c;

    // Time t1;
    // t1.setTime(a,b,c);
    // t1.displayTime();

    // Now let's make display() which can display 3 complex numbers by calling it once.
    // Ex: display(c1,c2,c3)
    // NOTE - CONCEPT - however we need to call display() by making complex object -
    // like - c1.display(c2,c3);
    // here IMPLICIT - by default 
    // EXPLICIT - you need to specify it.
    // so c1 is passed in display() implicitily and c2,c3 are passed in display() explicitily
    // TBR - in c lang for n parameters you need to pass n parameters in the function.
    //     - in c++ lang for n parameters you need to pass n-1 parameters in the function.

    ComplexNumber c1,c2,c3;
    c1.setRealImgCoeff(32,1);
    c2.setRealImgCoeff(2,1);
    c3.setRealImgCoeff(5,10);

    c1.displayComplexNo(c2,c3);

    c1.add(c2);

    return 0;
}