string isBalanced(string s) {
stack<char> st;
    
    for(int i=0; i<s.length(); i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(st.empty()) return "NO";
            char c=st.top(); st.pop();
            if((c=='(' && s[i]==')') || (c=='[' && s[i]==']') || (c=='{' && s[i]=='}')  ) continue;
            else return "NO";
            

        }
    }
   if(st.empty()) return "YES";
    else return "NO";
}