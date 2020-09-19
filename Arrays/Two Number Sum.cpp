#include <vector>
using namespace std;

// Time O(n^2) Space O(1)
vector<int> twoNumberSum(vector<int> array, int targetSum) {
	for(int i = 0; i < array.size(); i++){
		for(int j = i + 1; j < array.size(); j++){
			if(array.at(i) + array.at(j) == targetSum){
				return vector<int> {array.at(i), array.at(j)};
			}
		}
	}
	
  return {};
}

