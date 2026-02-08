#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int praice[] = {100,80,60,70,60,75,85};
    vector<int>ans;
    stack<int>s;
    for(int i = 0; i < praice.size; i++ ){
        while(s.size>= 0 && praice[s.top()] >= praice[i]){
            s.pop();
        }if (s.empty()){
            ans

        }
        {
            /* code */
        }
        {

        }
    }


}