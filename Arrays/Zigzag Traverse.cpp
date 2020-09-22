#include <vector>

using namespace std;

vector<int> zigzagTraverse(vector<vector<int>> array) {
  // Write your code here.
	if(array.empty())
		return {};
	int row = 0;
	int col = 0;
	int h = array.size() - 1;
	int w = array.at(0).size() - 1;
	bool down = true;
	std::vector<int> ans;
	
	while(row >= 0 && row <= h && col >= 0 && col <= w){
		ans.push_back(array.at(row).at(col));
		if(down){
			if(col == 0 || row == h){
				if(row == h)
					col++;
				else
					row++;
				down =false;
			}
			else{
				row++;col--;
			}
		}
		else{
			if(row == 0 || col == w){
				if(col == w)
					row++;
				else
					col++;
				down = true;
			}
			else{
				row--;col++;
			}
		}
		printf(" ( %d, %d, %d ) |", row, col,down);
	}
	
  return ans;
}

// 		printf(" ( %d, %d, %d ) |", row, col,down);
// 		if(down && (col == 0 || col == w)){
// 			row++;
// 			down = false;
// 		}
// 		else if(row == 0 || row == h){
// 			ans.push_back(array.at(row).at(++col));
// 			down = !down;
// 			if(down){
// 				row++;
// 				col--;
// 			}
// 		}
		
// 		else if(down){
// 			if(col == 0)
// 				row++;
// 			else if(row == h)
// 				col++;
// 			else{
// 				row++;
// 				col--;
// 			}
		
// 		}
// 		else{
// 			row--;
// 			col++;
// 		