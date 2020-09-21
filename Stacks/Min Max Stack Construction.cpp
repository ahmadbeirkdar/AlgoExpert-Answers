using namespace std;

struct Node {
	Node *next = nullptr;
	int data = 0;
};

// Feel free to add new properties and methods to the class.
class MinMaxStack {
	Node *stack = nullptr;
	Node *max = nullptr;
	Node *min = nullptr;
	int currmin = INT_MAX;
	int currmax = INT_MIN;
public:
  int peek() {
    if(stack)
			return stack->data;
    return -1;
  }

  int pop() {
    if(stack){
			int res = stack->data;
			stack = stack->next;
			if(res == currmin){
				min = min->next;
				currmin = min ? min->data : INT_MAX; 
			}
			if(res == currmax){
				max = max->next;
				currmax = max ? max->data : INT_MIN;
			}
			
			return res;
		}
    return -1;
  }

  void push(int number) {
    Node *temp = new Node;
		temp->data = number;
		if(stack){
			temp->next = stack;
			stack = temp;
		}
		else{
			stack = temp;
		}
		if(number <= currmin){
			Node *temp = new Node;
			temp->data = number;
			currmin = number;
			if(min){
				temp->next = min;
				min = temp;
			}
			else{
				min = temp;
			}
		}
		if(number >= currmax){
			Node *temp = new Node;
			temp->data = number;
			currmax = number;
			if(max){
				temp->next = max;
				max = temp;
			}
			else{
				max = temp;
			}
		}
  }

  int getMin() {
    // Write your code here.
    return currmin;
  }

  int getMax() {
    // Write your code here.
    return currmax;
  }
};

