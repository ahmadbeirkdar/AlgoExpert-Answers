#include <vector>
#include <set>
using namespace std;

// O(n)
vector<int> largestRange(vector<int> array) {
  // Write your code here.
	std::set<int> arr(array.begin(),array.end());
	int length = -1;
	int j;
	auto it = arr.begin();
	std::vector<int> ans;
	while(it != arr.end()){
		auto i = it;
		while(i != std::prev(arr.end()) && *i == *std::next(i) - 1)
			i++;
		if(length < std::distance(it,i)){
			length = std::distance(it,i);
			ans = {*it,*i};
		}
		it = i;
		it++;
	}
	
  return ans;
}


