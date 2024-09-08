#include <iostream> 
#include <stack>
using namespace std;
int main() {
	stack<int> stack;
	stack.push(21);
	stack.push(22);
	stack.push(24);
	stack.push(25);

    while (stack.size()!=0) {
		cout << stack.top() <<" ";
		stack.pop();
	}
}
//-Their is a change if further the node
//If the node has one child the atteched the tfirst granparent child
//If the de