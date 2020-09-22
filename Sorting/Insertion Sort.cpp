#include <vector>
using namespace std;

vector<int> insertionSort(vector<int> arr) {
  for(int i = 1; i < arr.size(); i++){
		int temp = arr[i];
		int j = i;
		while(j > 0 && arr[j-1] > temp){
			arr[j] = arr[j-1];
			j--;
		}
		arr[j] = temp;
	}
  return arr;
}
