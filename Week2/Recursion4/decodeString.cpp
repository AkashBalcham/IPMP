#include <bits/stdc++.h>
using namespace std;

string decode(string s) {
    stack<string> st, q;
    string cur_s = "";
    string res = "";
    int c = 0;
    for(int i=0; i<s.length(); i++) {
        if (s[i] != "]") {
            st.push(string(1, s[i]));
        } else {
            while(st.top() != "[") {
                string x = st.top();
                q.push(x);
                st.pop();
            }
            // cout << 1 << endl;  
            st.pop();
            string rev_c = "";
            while(!st.empty() and st.top() >= "0" and st.top() <= "9") {
                rev_c += st.top();
                st.pop();    
            }
            for(int j=rev_c.length() - 1; j >= 0; j++) {
                c = c*10 + (rev_c[j] - '0');
            }

            while(!q.empty()) {
                st.push(q.top());
                cur_s += q.top();
                q.pop();
            }
            for(int i=0; i<c-1; i++) {
                for(int j=0; j<cur_s.length(); j++) {
                    st.push(string(1, cur_s[i]));
                }
            }
            cur_s = "";
        }
    }
    while(!st.empty()) {
        res += st.top();
        st.pop();
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    string s = "3[a]2[bc]";
    cout << decode(s) << endl;
}