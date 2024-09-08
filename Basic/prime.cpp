#include <iostream>
using namespace std;

int main() {
    int n;
    int counter = 0;
    cout << "Enter value of n : " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            counter++;
          
        }
    }

    if (counter == 2) {
        cout << "Prime Number" << endl;
    } else {
        cout << "Not A Prime" << endl;
    }

    return 0;
}
