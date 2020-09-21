#include <vector>
#include <unordered_set>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
	std::unordered_set<int> num_set (array.begin(),array.end());
  for(auto i : num_set){
		int test = targetSum - i;
		if(num_set.count(test) && test != i){
			return vector<int> {i,test};
		}
	}
  return {};
}

