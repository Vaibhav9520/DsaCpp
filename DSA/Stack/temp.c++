// #include <iostream>
// using namespace std;

// const int MAX = 15;

// class Stack {
//    private:
//     int top;
//     int arr[MAX];

//    public:
//     Stack() {
//         top = -1;
//     }

//     void push(int x) {
//         if (top >= MAX - 1) {
//             cout << "Stack Overflow" << endl;
//         } else {
//             top++;
//             arr[top] = x;
//         }
//     }

//     void pop(int &x) {
//         if (top < 0) {
//             cout << "Stack is empty." << endl;
//         } else {
//             x = arr[top];
//             top--;
//         }
//     }

//     void display() {
//         for (int i = 0; i <= top; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }

//     bool isEmpty() {
//         return (top < 0);
//     }
// };

// int main() {
//     Stack s;
//     int n, x;

//     cin >> n;

//     if (n == 0) {
//         cout << "Stack is empty." << endl;
//         return 0;
//     } else if (n > MAX) {
//         cout << "Stack Overflow" << endl;
//         return 0;
//     }

//     for (int i = 0; i < n; i++) {
//         cin >> x;
//         s.push(x);
//     }

//     s.display();

//     if (!s.isEmpty()) {
//         s.pop(x);
//         cout << "Top element: " << x << endl;
//         s.display();
//     }

//     if (s.isEmpty()) {
//         cout << "Stack is empty." << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

#define SIZE 100

int arr[SIZE], top = -1;

void push(int value) {
  if (top >= SIZE - 1) {
    cout << "Stack Overflow" << endl;
    return;
  } else {
    top++;
    arr[top] = value;
  }
}

void pop() {
  if (top == -1) {
    cout << "Stack is empty" << endl;
    return;
  } else {
    top--;
  }
}

int max() {
  int max_value = arr[0];
  for (int i = 1; i <= top; i++) {
    if (arr[i] > max_value) {
      max_value = arr[i];
    }
  }
  return max_value;
}

void display() {
  if (top == -1) {
    cout << "Stack is empty" << endl;
    return;
  } else {
    for (int i = 0; i <= top; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
}

int main() {
  int value, choice;

  // Initialize the maximum value variable.
  int mv = -100;

  while (1) {
    cin >> choice;

    switch (choice) {
      case 1:
        cin >> value;
        push(value);
        mv = max(mv, value);
        break;
      case 2:
        pop();
        break;
      case 3:
        cout << "Maximum element: " << mv << endl;
        break;
      case 4:
        display();
        break;
      case 5:
        exit(0);
        break;
      default:
        cout << "Invalid choice" << endl;
        break;
    }
  }

  return 0;
}

