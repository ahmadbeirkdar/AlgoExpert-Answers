#include <vector>
#include <unordered_map>

using namespace std;

int apartmentHunting(vector<unordered_map<string, bool>> blocks,
                     vector<string> reqs) {
	std::vector<int> maxDis(blocks.size(),INT_MIN);
	
	for(auto i = 0; i < blocks.size(); i++)
		for(auto j : reqs){
			int closest = INT_MAX;
			for(auto k = 0; k < blocks.size(); k++){
					if(blocks.at(k).at(j))
						closest = std::min(closest, abs(i - k));
			}
			maxDis.at(i) = std::max(maxDis.at(i),closest);
		}

  return std::distance(maxDis.begin(),std::min_element(maxDis.begin(),maxDis.end()));
}

