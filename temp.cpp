#include<bits/stdc++.h>
#include <stack>
#include <string>
using namespace std;

    string decodeString(string s) {
        stack<char> st;
        string ans="",temp="",temp2="";
        for(int i=0;i<s.size();i++){
            temp="",temp2="";
            if(s[i]!=']')
            st.push(s[i]);
            else{
                while(!st.empty() && (st.top()>='a' && st.top()<='z')){
                    temp+=st.top();
                    st.pop();
                }
                st.pop();
                reverse(temp.begin(),temp.end());
               
                while(!st.empty() && (st.top()>='0' && st.top()<='9')){
                    temp2+=st.top();
                    st.pop();
                }
                reverse(temp2.begin(),temp2.end());
                int n=stoi(temp2);
                temp2=temp;
                n--;
                while(n--){
                temp+=temp2;
                }

                for(int k=0;k<temp.size();k++)
                st.push(temp[k]);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }


int main(){
  stack<char> st;
  string s="2[abc]3[cd]ef";

  string ans="",temp="",temp2="";
  
  for(int i=0; i<s.size(); i++)
  {
    temp="",temp2="";
    if(s[i]!=']')
    {
      st.push(s[i]);
    }
    else{
      while(!st.empty() && (st.top()>='a' && st.top()<='z')){
        temp+=st.top();
        st.pop();
      }
      st.pop();
      reverse(temp.begin(),temp.end());

      while(!st.empty() && (st.top()>='0' && st.top()<='9')){
        temp2+=st.top();
        st.pop();
      }
      reverse(temp2.begin(),temp2.end());

      //stoi converts a string to an integer.
      int n=stoi(temp2);
      temp2=temp;
      n--;

      while(n--){
        temp+=temp2;
      }

      for(int k=0; k<temp.size(); k++){
        st.push(temp[k]);
      }
    }
      while(!st.empty()){
        ans+=st.top();
        st.pop();
      }
      reverse(ans.begin(),ans.end());

    }
    cout<<ans;


  return 0; 

  }

