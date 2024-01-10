#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iterator>

using namespace std;

bool isPrime(int m){
	int flag = 0;
  	for(int i = 2 ; i <= sqrt(m) ; i++){
    	if(m % i == 0){
        	flag = 1;
          	break;
        }
    }
  	if(flag == 0){
    	return true;
    }
  	else{
    	return false;
    }
}

int main(){
  	// take input
  	
  	vector<int> input; 
    for(int i = 0 ; i < 11 ; i++)
    {
        int temp;
        cin >> temp;
        input.push_back(temp);
    }
  	
  // getting the min element
  vector<int>::iterator minEltIt;
  minEltIt = min_element(input.begin(), input.end());
  if(minEltIt == input.end()){
  	// no min elemtn. 0 sized array.
    cout << "None min elmt" ;
    return 0;
  }
  
  int q = *minEltIt;
//   cout << "min el = " << q << endl;
  
  // now get primes  and check if they get remainder q
  for(int p = 2 ; p <= 10000000000 ; p++){
  	if(isPrime(p)){
    	int pFound = 1;	// flag it if you 
      	for(size_t n = 0 ; n < input.size() && input[n] != q; n++){
            int rem = p % input[n];
        	if(rem != q){
              	pFound = 0;
            	break;
            }
        }
      	if(pFound == 1){
        	cout << p;
          	return 0;
        }
      	
    }
  	
  }
  cout<< "None";
	
    return 0;
}