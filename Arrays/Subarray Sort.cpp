#include <vector>
using namespace std;

vector<int> subarraySort(vector<int> array) {
  // Write your code here.
	int min = INT_MAX;
	int max = INT_MIN;
	for(auto i = array.begin(); i < array.end(); i++){
		if((i == array.begin() && *i > *std::next(i)) || (i == std::prev(array.end()) && *i < *std::prev(i)) || (*i > *std::next(i) || *i < *std::prev(i)) && i != array.begin() && i != std::prev(array.end())){
			min = std::min(*i,min);
			max = std::max(*i,max);
		}
	}
	
	if(min == INT_MAX || max == INT_MIN)
		return {-1,-1};
	
	int i = 0, j= array.size() - 1;
	while(min >= array.at(i))
		i++;
	while(max <= array.at(j))
		j--;
	
	
  return {i,j};
}

