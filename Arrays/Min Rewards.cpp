#include <vector>
#include <algorithm>
using namespace std;

// O(n) Time O(n) Space
int minRewards(vector<int> scores) {
  // Write your code here.
	std::vector<int> rewards(scores.size(),1);
	for(int i = 1; i < scores.size(); i++){
		if(scores.at(i) > scores.at(i-1))
			rewards.at(i) = rewards.at(i - 1) + 1;
	}
	for(int i = scores.size() - 2; i >= 0;i--){
		if(scores.at(i) > scores.at(i+1))
			rewards.at(i) = std::max(rewards.at(i), rewards.at(i + 1) + 1);
	}
	
  return std::accumulate(rewards.begin(),rewards.end(),0);
}
