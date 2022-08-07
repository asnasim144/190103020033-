#include<bits/stdc++.h>
using namespace std;
    void points(int xc, int yc, int x, int y){
    cout<<xc+x<<", "<<yc+y<<"\t ";
    cout<<xc-x<<", "<<yc+y<<"\t ";
    cout<<xc+x<<", "<<yc-y<<"\t ";
    cout<<xc-x<<", "<<yc-y<<"\t ";
    cout<<xc+y<<", "<<yc+x<<"\t ";
    cout<<xc-y<<", "<<yc+x<<"\t ";
    cout<<xc+y<<", "<<yc-x<<"\t ";
    cout<<xc-y<<", "<<yc-x<<endl;
    }
int main()
{
    int xc = 50, yc = 50, r = 30;
    int x = 0, y = r;
    int d = 3 - 2 * r;
    points(xc, yc, x, y);
    while (y >= x){
        x++;
        if (d > 0){
            y--;
            d = d + 4 * (x - y) + 10;
        }
        else
            d = d + 4 * x + 6;
        points(xc, yc, x, y);
    }





    return 0;
}
