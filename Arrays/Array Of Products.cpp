#include <vector>
#include <algorithm>

std::vector<int> arrayOfProducts(std::vector<int> array) {
    std::vector<int> ans(array.size());
	auto j = 0;
	
	std::for_each(ans.begin(),ans.end(),[&j,&array](int &i){
		i = std::accumulate(array.begin(),array.end(),1,[&array,&j](const int &a, const int&b){
			return (&(array.at(j)) == &b) ? a : a * b;
		});j++;});
    return ans;
}