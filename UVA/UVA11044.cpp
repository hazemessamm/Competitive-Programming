#include<iostream>


using namespace std;



int main() {
    std::ios_base::sync_with_stdio(false);
    int x, y,z;
    cin>>x;
    for(int i = 0; i < x; i++)
    {
        cin>>y>>z;
        cout<<(y/3) * (z/3)<<"\n";
    }
	return 0;
}
