#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x1,x2,y1,y2;
    cin>>x1>>x2>>y1>>y2;
    double dx = (x2-x1);
    double dy= (y2 - y1);
    double dist;
    dist = sqrt(dx*dx + dy*dy);
    cout << dist << endl;
    

}