#include <vector>
using namespace std;

vector<int> selectionSort(vector<int> arr) {
  for(int i = 0; i < arr.size(); i++){
		int min = i;
		for(int j = i + 1; j < arr.size(); j++)
			if(arr[min] > arr[j])
				min = j;
		std::swap(arr[i],arr[min]);
	}
  return arr;
}
