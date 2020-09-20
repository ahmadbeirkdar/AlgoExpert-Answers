using namespace std;

int longestPeak(vector<int> array) {
  // Write your code here.
	auto it = array.begin() + 1;
	int longestPeak = 0;
	
	while(!array.empty() && it != std::prev(array.end())){
		bool isPeak = *std::prev(it) < *it && *it > *std::next(it);
		if(isPeak){
			int temp = 3;
			auto i = std::prev(std::prev(it));
			while(i >= array.begin() && *i < *(i+1)){
				temp++;
				i--;
			}
			i = std::next(std::next(it));
			while(i < array.end() && *i < *(i-1)){
				temp++;
				i++;
			}
			longestPeak = std::max(longestPeak,temp);
			it++;
		}
		else
			it++;
	}
	
	
  return longestPeak;
}

