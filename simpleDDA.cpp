#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2,t;
    cout<<"1st point"<<endl;
    cin>>x1>>y1;
    cout<<"2nd point"<<endl;
    cin>>x2>>y2;
    double m,y,x;
    m=(float)(y2-y1)/(float)(x2-x1);
    if(abs(m)<1){
        if(x1>x2){
            swap(x1,x2);
            swap(y1,y2);
        }
        cout<<x1<<", "<<y1<<endl;
        y=y1;
        x=x1+1;
        while(x<=x2){

            y=y+m;
            cout<<x<<", "<<round(y)<<endl;
            x=x+1;

        }

    }

    //
    //
    else if(abs(m)>1){
        if(y1>y2){
            swap(x1,x2);
            swap(y1,y2);
        }
        cout<<x1<<", "<<y1<<endl;
        y=y1+1;
        x=x1;
        m=1/m;
        while(y<=y2){

            x=x+m;
            cout<<round(x)<<", "<<y<<endl;
            y=y+1;

        }

    }

    return 0;
}
