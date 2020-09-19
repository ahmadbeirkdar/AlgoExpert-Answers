#include <vector>

using namespace std;

vector<int> moveElementToEnd(vector<int> array, int toMove) {
  // Write your code here.
	int i = 0;
	int j = array.size() - 1;
	while(i < j){
		while(array.at(j) == toMove && i < j) j--;
		if(array.at(i) == toMove)
			swap(array.at(i),array.at(j));
		i++;
	}
			
			
	
  return array;
}

