// Find the intersection of two sorted lists of integers.
// Input:
// Your program should read lines of text from standard input. Each line will contain two comma separated lists of integers 
// in ascending order, one pair of lists per line. The lists are separated by a semicolon.
// Output:
// For each pair of input lists, print to standard output their sorted intersection in ascending order, comma 
// separated, one intersection per line.
// ex: 1,2,3,4;3,4,5,6
// op: 3,4
#include<iostream>

#include<string>
#include<sstream>
#include<vector>
#include<iterator>

using namespace std;

int main(){

    string line;
    vector<int> v1;
    vector<int > v2;
    vector<int > intersectionVec;
    
    vector<int> :: iterator i1;
    vector<int> :: iterator i2;
    while (getline(cin, line)) {
        cout << line << endl;
        intersectionVec.clear();
        v1.clear();
        v2.clear();
        

        // PART 1 - SEPARATE THE strings based on characters and store in vectors.

        // first we need to separate the strings 
        stringstream SStream(line);
        

        string tempStrVec;
        string tempStrNum;
        int strCount = 1;
        while(getline(SStream,tempStrVec,';'))
        {
            stringstream SNumStream(tempStrVec);
            while(getline(SNumStream,tempStrNum,','))
            {
                int num = stoi(tempStrNum,nullptr,10);
                if(strCount == 1){  // insert nums in 1st vector
                    v1.push_back(num);
                }
                else if(strCount == 2){
                    v2.push_back(num);
                }
            }

            // here we will increament the strCount , -> to figure that 1st str of numbers is done
            // Now next time we go in while loop for nums we will insert those nos in 2nd vector
            strCount++;
        }

        // // vector 1 and vector 2
        // cout << "Vector 1 - " << endl;
        // for(int i = 0 ; i < v1.size() ; i++)
        //     cout << v1[i] << endl;
        
        // cout << "Vector 2 - " << endl;
        // for(int i = 0 ; i < v2.size() ; i++)
        //     cout << v2[i] << endl;

        // PART 2 - find the common elements.
        // 
        i1 = v1.begin();
        i2 = v2.begin();

        while(i1 <= v1.end() && i2 <= v2.end() )
        {
            if(*i1 == *i2){
                intersectionVec.push_back(*i1);
                i1++;
                i2++;
            }
            else if(*i1 > *i2){
                i2++;
            }
            else{
                i1++;
            }
        }


        // checking if there are any common elements.
        if(intersectionVec.size()){
            cout << "Common Elements - toatl elmts = " << intersectionVec.size() << endl;
            for(int i = 0 ; i < intersectionVec.size() ; i++)
                cout << intersectionVec[i] << " ";

            cout << endl;
        }
        else{
            cout << "There is nothing common in the input arrays." << endl;
        }
        
    }

    return 0;
}