// Define a class StaticCount and create a static variable. Increment this variable in a
// function and call this 3 times and display the result

#include<iostream>
using namespace std;



class StaticCount{
    static int v1;

    public:
        static int v2;

        static int getStaticV1()
        {
            return v1;
        }

        static void increamentV()
        {
            v1 = v1  + 1;
            v2 += 2;

        }
        
};

int StaticCount :: v1 ;
int StaticCount :: v2 ;

int main()
{
    StaticCount :: increamentV();
    StaticCount :: increamentV();
    StaticCount :: increamentV();

    cout << "v1 = " << StaticCount :: getStaticV1() << " v2 = " << StaticCount :: v2;

    return 0;
}