#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int getPossibilities( string &trees);

// error - 
// Orchard.cpp In function int getPossibilities std string Orchard.cpp 41 23 warning comparison 
// of integer expressions of different signedness int and std __cxx11 basic_string char size_type 
// aka long unsigned int -Wsign-compare 41 | for int i = 0 i trees.length - 2 i++ | ^ Orchard.cpp 
// 47 31 warning comparison of integer expressions of different signedness int and 
// std __cxx11 basic_string char size_type aka long unsigned int 
// -Wsign-compare 47 | for int j = i + 1 j trees.length - 1 j++ | ^ Orchard.cpp 60 39 warning 
// comparison of integer expressions of different signedness int and 
// std __cxx11 basic_string char size_type aka long unsigned int -Wsign-compare 60 | for int k = j + 1 k trees.length k++ | ^

int main(){
    // string asok_str = "MLLM";
    // string anand_str = "LMLL";
    string asok_str,anand_str;
    fflush(stdin);
    getline(cin , asok_str);
    fflush(stdin);
    getline(cin,anand_str);

    int posibilities_asok = 0 , posibilities_anand = 0;

    posibilities_asok = getPossibilities(asok_str);
    posibilities_anand = getPossibilities(anand_str);

    if(posibilities_asok == -1 || posibilities_anand == -1)
        cout << "Invalid input" << endl;
    else if(posibilities_asok > posibilities_anand)
        cout << "Asok" << endl;
    else if(posibilities_asok < posibilities_anand)
        cout << "Anand" << endl;
    else
        cout << "Draw" << endl;

    // cout << endl << "asok = " << getPossibilities(asok_str) << endl;
    // cout << endl << "anand = " << getPossibilities(anand_str) << endl;

    return 0;
}

int getPossibilities( string &trees){
    int pos = 0;
    for(int i = 0 ; i < trees.length() - 2 ; i++){
        if(trees[i] != 'M' && trees[i] != 'L'){
            // cout << "Invalid input" << endl;
            return -1;
        }

        for(int j = i + 1 ; j < trees.length() - 1 ; j++ ){
            // adjacent chars are not same
            if(trees[j] != 'M' && trees[j] != 'L'){
                // cout << "Invalid input" << endl;
                return -1;
            }

            if(trees[j] == trees[i]){
                continue;
            }
            else{
                // now we need to find the 3rd tree i.e same char as that of 1st tree

                for(int k = j + 1 ; k < trees.length() ; k++)
                {
                    if(trees[k] != 'M' && trees[k] != 'L'){
                        // cout << "Invalid input" << endl;
                        return -1;
                    }


                    if(trees[k] == trees[j]){
                        continue;
                    }
                    else{
                        pos++;
                    }
                }

            }
        }

    }
    return pos;
}