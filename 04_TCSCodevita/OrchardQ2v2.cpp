#include<iostream>
#include<string>
#include<cstdio>

// error - Presentatino error and time - 2sec
// SOL - remove any endl or spaces from the output .
// error - TLE = 7sec


using namespace std;

int getPossibilities( string &trees);

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
        cout << "Invalid input";
    else if(posibilities_asok > posibilities_anand)
        cout << "Asok";
    else if(posibilities_asok < posibilities_anand)
        cout << "Anand";
    else
        cout << "Draw";

    // cout << endl << "asok = " << getPossibilities(asok_str) << endl;
    // cout << endl << "anand = " << getPossibilities(anand_str) << endl;

    return 0;
}

int getPossibilities( string &trees){
    int pos = 0;
    for(size_t i = 0 ; i < trees.length() - 2 ; i++){
        if(trees[i] != 'M' && trees[i] != 'L'){
            // cout << "Invalid input" << endl;
            return -1;
        }

        for(size_t j = i + 1 ; j < trees.length() - 1 ; j++ ){
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

                for(size_t k = j + 1 ; k < trees.length() ; k++)
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