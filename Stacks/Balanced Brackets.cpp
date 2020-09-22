using namespace std;
#include <unordered_map>
#include <stack>

bool balancedBrackets(string str) {
  // Write your code here.
	std::string opening  = "([{";
	std::string closing = ")]}";
	std::unordered_map<char,char> match = {{')','('},{']','['},{'}','{'}};
	std::stack<char> stack;
	
	for(auto i : str){
		if(opening.find(i) != std::string::npos)
			stack.push(i);
		else if(closing.find(i) != std::string::npos){
			if(stack.empty())
				return false;
			if(stack.top() == match.at(i))
				stack.pop();
			else
				return false;
		}
	}
	
  return stack.size() == 0;
}

