// #include<bits\stdc++.h>
// using namespace std;

// int prec(char c) {
//     if (c == '^')
//         return 3;
//     else if (c == '*' || c == '/')
//         return 2;
//     else if (c == '+' || c == '-')
//         return 1;
//     else
//         return -1;
// }
// void Infix_to_postfix(string s){
//     stack<char> st;
//     int l = s.length();
//     string ns;
//     for(int i=0;i<l;i++){
//         if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
//             ns += s[i];
//         }
//         else if(s[i] == '('){
//             st.push('(');
//         }
//         else if(s[i] == ')'){
//             while(st.top() != '$' && st.top() != '('){
//                 char c = st.top();
//                 st.pop();
//                 ns += c;
//             }
//             if(st.top() =='('){
//                 char c = st.top();
//                 st.pop();
//             }
//         }
//         else{
//             while(st.top() != '$' && prec(s[i]) <= prec(st.top())){
//                 char c = st.top();
//                 st.pop();
//                 ns += c;
//             }
//             st.push(s[i]);
//         }
//     }
//     while(st.top() != '$'){
//         char c = st.top();
//         st.pop();
//         ns += c;
//     }
//     cout<<ns;
// }

// int main(){
//     string value;
//     cin>>value;
//     Infix_to_postfix(value);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

// Function to determine the precedence of operators
int prec(char c) {
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

void Infix_to_postfix(string s) {
    stack<char> st;
    st.push('$'); // Add '$' as the bottom element of the stack
    int l = s.length();
    string ns;

    for (int i = 0; i < l; i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            ns += s[i];
        } else if (s[i] == '(') {
            st.push('(');
        } else if (s[i] == ')') {
            while (st.top() != '$' && st.top() != '(') {
                char c = st.top();
                st.pop();
                ns += c;
            }
            if (st.top() == '(') {
                char c = st.top();
                st.pop();
            }
        } else {
            while (st.top() != '$' && prec(s[i]) <= prec(st.top())) {
                char c = st.top();
                st.pop();
                ns += c;
            }
            st.push(s[i]);
        }
    }
    
    while (st.top() != '$') {
        char c = st.top();
        st.pop();
        ns += c;
    }

    cout << ns << endl;
}

int main() {
    string value;
    cout << "Enter an infix expression: ";
    cin >> value;
    Infix_to_postfix(value);
    return 0;
}
