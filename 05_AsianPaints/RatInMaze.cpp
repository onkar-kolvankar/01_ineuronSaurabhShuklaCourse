#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;


void displayMatrix(vector<vector<int>> &matrix);
void findPathLen(vector<vector<int>> &maze , vector<vector<bool>> &visitedArr ,int currentRow, int currentCol , int tempPathLen,vector<int> &pathLengths );
bool isMoveValid(vector<vector<int>> &maze , vector<vector<bool>> &visitedArr ,int checkRow, int checkCol);

int main()
{
    int maze_size;
    int tempPathLen = 0 ;

    vector<int> pathLengths;

    cout << "Enter the size of maze:";
    cin >> maze_size;

    vector<vector <int>> maze;
    maze.resize(maze_size,vector<int>(maze_size,0));

    vector<vector <bool>> visitedArr;
    visitedArr.resize(maze_size,vector<bool>(maze_size,false));

    // take user input.
    for(int row = 0 ; row < maze_size ; row++){

        for(int col = 0 ; col < maze_size ; col++ )
        {
            cout << "Enter the " << row << "," << col << " th element" << endl;
            cin >> maze[row][col];
        }

    }

    // display the matrix.
    displayMatrix(maze);

    // find the path
    findPathLen(maze,visitedArr,0,0,tempPathLen,pathLengths);

    // print paths
    cout << "No of vect paths = " << pathLengths.size() << endl;

    for(int i = 0 ; i < pathLengths.size() ; i++)
    {
        cout << pathLengths[i] << " ";
    }

    cout << endl << "Min path lenght = " << *min_element(pathLengths.begin(),pathLengths.end());

    return 0;
}

void findPathLen(vector<vector<int>> &maze , vector<vector<bool>> &visitedArr ,int currentRow, int currentCol , int tempPathLen,vector<int> &pathLengths )
{
    // 
    if(maze[currentRow][currentCol] == 2)
    {
        // means we achieved the destination of 2. So we append the current path length to vector pathLengths
        tempPathLen++;
        pathLengths.push_back(tempPathLen);
        return;
    }

    // TODO - check if you need to check the 0,0 element is 1 as it can't be 0

    // check the Up down , left , right moves
    if(isMoveValid(maze,visitedArr,currentRow-1,currentCol))
    {
        tempPathLen++;
        visitedArr[currentRow][currentCol] = true;  // we make current cell visited
        findPathLen(maze,visitedArr,currentRow-1,currentCol,tempPathLen,pathLengths);
        tempPathLen--;
        visitedArr[currentRow][currentCol] = false; 
    }
    // down
    if(isMoveValid(maze,visitedArr,currentRow+1,currentCol))
    {
        tempPathLen++;
        visitedArr[currentRow][currentCol] = true;  // we make current cell visited
        findPathLen(maze,visitedArr,currentRow+1,currentCol,tempPathLen,pathLengths);
        tempPathLen--;
        visitedArr[currentRow][currentCol] = false; 
    }

    // left
    if(isMoveValid(maze,visitedArr,currentRow,currentCol-1))
    {
        tempPathLen++;
        visitedArr[currentRow][currentCol] = true;  // we make current cell visited
        findPathLen(maze,visitedArr,currentRow,currentCol-1,tempPathLen,pathLengths);
        tempPathLen--;
        visitedArr[currentRow][currentCol] = false; 
    }

    // right
    if(isMoveValid(maze,visitedArr,currentRow,currentCol+1))
    {
        tempPathLen++;
        visitedArr[currentRow][currentCol] = true;  // we make current cell visited
        findPathLen(maze,visitedArr,currentRow,currentCol+1,tempPathLen,pathLengths);
        tempPathLen--;
        visitedArr[currentRow][currentCol] = false; 
    }

}

bool isMoveValid(vector<vector<int>> &maze , vector<vector<bool>> &visitedArr ,int checkRow, int checkCol)
{
    if( checkRow >= 0 && checkRow < maze.size() && checkCol >= 0 && checkCol < maze.size() 
        && visitedArr[checkRow][checkCol] == false && (maze[checkRow][checkCol] == 1 || maze[checkRow][checkCol] == 2))
    {
        return true;
    }
    return false;

}

void displayMatrix(vector<vector<int>> &matrix){
     // display the matrix.
    for(int row = 0 ; row < matrix.size() ; row++){

        for(int col = 0 ; col < matrix.size() ; col++ )
        {
            cout << matrix[row][col] << " "; 
        }
        cout << endl;

    }
}



