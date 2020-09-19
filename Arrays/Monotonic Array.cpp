using namespace std;

bool isMonotonic(vector<int> array) {
  bool increases = true;
	bool decreases = true;
	
	if(array.size() <= 2)
		return true;
	
	for(int i = 0; i < array.size() - 1; i++){
		if(array.at(i) < array.at(i + 1))
			decreases = false;
		if(array.at(i) > array.at(i + 1))
			increases = false;
		
	}
	
	
  return increases || decreases;
}

