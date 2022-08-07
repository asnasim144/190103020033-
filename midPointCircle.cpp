#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x_c,y_c,r;
    cout<<"start point"<<endl;
    cin>>x_c>>y_c;
    cout<<"radius"<<endl;
    cin>>r;
    int x = 0, y = r;
    cout << "(" << x + x_c << ", " << y + y_c << ") ";
    if (r > 0){
        cout << "(" << -y + x_c << ", " << x + y_c << ") ";
        cout << "(" << x + x_c << ", " << -y + y_c << ") ";
        cout << "(" << -y + x_c << ", " <<x + y_c << ")\n";
    }
    int P = 1 - r;
    while (x < y){
        x++;
        if (P < 0){
            P = P + 2*x + 1;
        }
        else{
            y--;
            P = P - 2*y + 2*x + 1;
        }
        if (x > y)
            break;
        cout << "(" << x + x_c<< ", " << y + y_c<< ") ";
        cout << "(" << -x + x_c<< ", " << y + y_c<< ") ";
        cout << "(" << x + x_c<< ", " << -y + y_c<< ") ";
        cout << "(" << -x + x_c<< ", " << -y + y_c<< ")\n";
        if (x != y){
            cout << "(" << y + x_c<< ", " << x + y_c << ") ";
            cout << "(" << -y + x_c<< ", " << x + y_c << ") ";
            cout << "(" << y + x_c<< ", " << -x + y_c << ") ";
            cout << "(" << -y + x_c << ", " << -x + y_c<< ")\n";
        }
    }





    return 0;
}
