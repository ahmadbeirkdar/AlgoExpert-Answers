#include <vector>
using namespace std;

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) {
  // Write your code here.
	
	int smallest = INT_MAX;
	std::vector<int> pair; 
	std::sort(arrayOne.begin(),arrayOne.end());
	std::sort(arrayTwo.begin(),arrayTwo.end());
	auto it1 = arrayOne.begin();
	auto it2 = arrayTwo.begin();
	while(it1 != arrayOne.end() && it2 != arrayTwo.end()){
		if(*it1 < *it2)
			it1++;
		else if(*it2 < *it1)
			it2++;
		else
			return {*it1, *it2};
		if(abs(*it1 - *it2) < smallest){
			smallest = abs(*it1 - *it2);
			pair = {*it1, *it2};
		}
			
	}
	
  return pair;
}

