#include<iostream>
#include<vector>
#include<set>

#include<iterator>

using namespace std;

void setZeroes(vector<vector<int>>& matrix) {

        set<int>:: iterator rowIt , colIt;
        set<int> rows,cols;
        for(int i = 0 ; i < matrix.size() ; i++)
        {
            for(int j = 0 ; j < matrix[0].size() ; j++)
            {
                if(matrix[i][j] == 0){
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }

        // now iterate rows set and make those rows 0
        rowIt = rows.begin();
        for( ; rowIt != rows.end() ; rowIt++)
        {
            int alterRow = *rowIt;
            for(int j = 0 ; j < matrix[0].size() ; j++)
            {
                matrix[alterRow][j] = 0;
            }
        }
        
        // now iterate cols set and make those columns 0
        colIt = cols.begin();
        for( ; colIt != cols.end(); colIt++)
        {
            int altercol = *colIt;
            for(int j = 0 ; j < matrix.size() ; j++)
            {
                matrix[j][altercol] = 0;
            }
        }
    }

int main()
{
    vector<vector<int>> v = {{0,1,2,0},{3,1,5,2},{1,3,1,4}};

    // v[1] = {0};
    

    // cout << "hello"<< endl;
    // cout << v[1][3] << endl;
    // cout << "what "<< endl;

    setZeroes(v);

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            cout << v[i][j] << " " ;
        }
        cout << endl;
    }

    return 0;
}

