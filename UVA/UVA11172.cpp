#include<iostream>


using namespace std;



int main() {
    std::ios_base::sync_with_stdio(false);
    int x,y,z;
    cin>>x;
    for(int i = 0; i < x; i++)
    {
        cin>>y>>z;
        if (y  > z)
        {
            cout<<">"<<"\n";
        }
        else if (z > y)
        {
            cout<<"<"<<"\n";
        }
        else
        {
            cout<<"="<<"\n";
        }
    }
	return 0;
}
