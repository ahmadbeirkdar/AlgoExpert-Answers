using namespace std;

vector<int> spiralTraverse(vector<vector<int>> array) {
  // Write your code here.
	if(array.size() == 0)
		return {};

	vector<int> ans;
	int row = 0;
	int rowl = array.size();
	int col = 0;
	int coll = array.at(0).size();
	
	while(row<rowl && col<coll){
		for(int i = col; i < coll; i++)
			ans.push_back(array.at(row).at(i));
		
		for(int i = row + 1; i < rowl - 1;i++)
			ans.push_back(array.at(i).at(coll-1));
		
		for(int i = coll - 1; i>=col;i--){
			if(row == rowl - 1)
				break;
			ans.push_back(array.at(rowl-1).at(i));
		}
			
		for(int i = rowl - 2; i >row;i--){
			if(col == coll - 1)
				break;
			ans.push_back(array.at(i).at(col));
		}
		col++;
		row++;
		rowl--;
		coll--;
	}
	
	return ans;
	
}