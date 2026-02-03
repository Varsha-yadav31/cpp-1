#include<iostream>
#include<vector>
// vector <int> vec;
// vector <int> vec = {1,3,2}
// vector <int> vec =(3,0)//3 is size of vector and index start from 0; 

int main(){
    //inititalise the vector
vector <int> vec;

//vec.size: tell the size of arr
cout<<"Size: "<<vec.size()<<endl;

//push_back : add the element from the last
vec.push_back(28);
vec.push_back(3);
vec.push_back(2);
vec.push_back(5);

//pop_back: dlete theelement from the last
vec.pop_back();

//it print the the 1st numberof arr like 28 
vec.front();
cout<<vec.front()<<endl;
//it print the last index numbers
vec.back();
cout<<vec.back()<<endl;
//it give thevalu of that particular index
vec.at(2);

}