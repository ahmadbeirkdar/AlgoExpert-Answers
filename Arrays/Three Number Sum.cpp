#include <vector>
#include <algorithm>

std::vector<std::vector<int>> threeNumberSum(std::vector<int> array, int targetSum) {
	std::sort(array.begin(),array.end());
	std::vector<vector<int>> ans; 
	
	for(int i = 0; i < array.size()-2; i++){
		auto left = array.begin() + i + 1;
		auto right = array.end() -1;
		while(*left < *right){
			if(array.at(i) + *left + *right == targetSum){
				ans.push_back({array.at(i), *left, *right});
				left++;right--;
			}
			else if(array.at(i) + *left + *right < targetSum)
				left++;
			else if(array.at(i) + *left + *right > targetSum)
				right--;
		}
	}
  return ans;
}


