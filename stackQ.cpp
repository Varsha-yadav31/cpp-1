#include<iostream>
#include<stack>
using namespace std;
bool Stack(string str){
    stack<char>st;
    for(int i = 0; i = str.size(); i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '[' ){ //opnning
            st.push(str[i]);
        } 
        else{//closing
            if(st.size == 0){
                retrun false;
            }
            if(st.top()== '(' && str[i] == ')' || st.top()== '{' && str[i] == '}' || st.top()== '[' && str[i] == ']' );
            {
                st.pop();
            }else{//no match
                return false;
            }
            retrun st.size() == 0;
        }
    }
}