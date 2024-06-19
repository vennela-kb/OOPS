#include <iostream>

using namespace std;
using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */

class rec{
    int i,j,k;
    public:
    void input()
    {
        cin>>i>>j;
    }
    void area()
    {
        k=i*j;
    }
    void display()
    {
        cout<<i<<endl;
        cout<<j<<endl;
        cout<<k<<endl;
    }
    
};
int main()
{
    rec r;
    r.input();
    r.area();
    r.display();
}

