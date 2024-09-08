#include <iostream> 
#include <queue>
using namespace std;
int main() {
	queue<int> qe;
	qe.push(21);
	qe.push(22);
	qe.push(24);
	qe.push(25);

    while (qe.size()!=0) {
		cout << qe.front() <<" ";
		qe.pop();
	}
}
