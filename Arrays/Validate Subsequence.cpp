using namespace std;

// O(n) - Time, O(1) - Space
bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  int i = 0;
	int j = 0;
	while(i < array.size() && j < sequence.size()){
		if(array.at(i) == sequence.at(j)){
			j++;
		}
		i++;
	}
  return j == sequence.size();
}

