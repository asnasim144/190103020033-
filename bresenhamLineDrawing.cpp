#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2,dx,dy,p,x,y;
    cout<<"1st point"<<endl;
    cin>>x1>>y1;
    cout<<"2nd point"<<endl;
    cin>>x2>>y2;
    //double y,x;
    dx=x2-x1;
    dy=y2-y1;
    x=x1;
    y=y1;
    p=2*dy-dx;
    while(x<x2){
        if(p>=0){
            cout<<x<<", "<<y<<endl;
            y=y+1;
            p=p+2*dy-2*dx;
        }
        else{
            cout<<x<<", "<<y<<endl;
            p=p+2*dy;
        }
        x=x+1;
    }
    cout<<x2<<", "<<y2<<endl;






    return 0;
}
