#include <vector>
using namespace std;

vector<vector<int>> fourNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
	std::unordered_map<int, std::vector<std::vector<int>>> pairs;
	std::vector<std::vector<int>> ans;
	for(int i = 0; i < array.size(); i++){	
		for(int j = i + 1; j<array.size(); j++)
			if(pairs.find(targetSum - array.at(j) - array.at(i))!= pairs.end())
				for(auto k : pairs.at(targetSum - array.at(j) - array.at(i)))
					ans.push_back({array.at(j), array.at(i),k.at(0),k.at(1)});
		
		for(int j = 0; j < i; j++){
			if(pairs.find(array.at(j) + array.at(i)) != pairs.end())
				pairs.at(array.at(j) + array.at(i)).push_back({array.at(i), array.at(j)});
			else
				pairs[array.at(j) + array.at(i)] = {{array.at(i), array.at(j)}};
		}	
	}
	
  return ans;
}

