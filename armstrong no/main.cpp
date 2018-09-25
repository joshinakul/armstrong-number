#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,c=0,love,jaan,jigri=0;
    cout << "enter any no. " << endl;
    cin>>n;
    love=n;

    while(n!=0)
    {
        n=n/10;
        c++;
    }
    n=love;
    while(n!=0)
    {
       jaan=n%10;
       n=n/10;
       jigri += pow(jaan, c);
    }
    if(love==jigri)
        cout<<" no. is armstrong "<<endl;
    else
        cout<<" no. is not armstrong "<<endl;



    return 0;
}
