#include <iostream>
#include <vector>

using namespace std;

int bubbleSortAsc(vector<int>);
int bubbleSortDes(vector<int>);

int main()
{
    // taking input
    int N;
    cin >> N;

    vector<int> arr;
    int temp;

    for(int i = 0 ; i < N ; i++)
    { 
        cin >> temp;
        arr.push_back(temp);
    }

    int minSwaps;
    if(bubbleSortAsc(arr) < bubbleSortDes(arr))
    {
        minSwaps = bubbleSortAsc(arr);
    }
    else{
        minSwaps = bubbleSortDes(arr);
    }

    cout << minSwaps;

    return 0;
}

int bubbleSortAsc(vector<int> v1)
{
    int flag = 1; // swapped
    int temp , swapsAsc = 0;


    while(flag)
    {
        flag = 0;
        for(int i = 0 ; i < v1.size() - 1 ; i++)
        {
            if(v1[i] > v1[i+1])
            {
                // swap
                temp = v1[i];
                v1[i] = v1[i+1];
                v1[i+1] = temp;
                swapsAsc++;
                flag = 1;
            }
        }

    }
    return swapsAsc;
}

int bubbleSortDes(vector<int> v1)
{
    int flag = 1; // swapped
    int temp , swapsDes = 0;


    while(flag)
    {
        flag = 0;
        for(int i = 0 ; i < v1.size() - 1 ; i++)
        {
            if(v1[i] < v1[i+1])
            {
                // swap
                temp = v1[i];
                v1[i] = v1[i+1];
                v1[i+1] = temp;
                swapsDes++;
                flag = 1;
            }
        }

    }
    return swapsDes;
}


