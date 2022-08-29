#include <iostream>

using namespace std;
/*swap*/
/*
int main()
{
   int x , y, z;
   cin>>x;
   cin>>y;
    z = x;
    x = y;
    y = z;
   cout<<x<<" "<<y;

    return 0;
}
*/

/*done*/
/*
int main()
{
int n , m;
cin>>n;
cin>>m;
int sum =0;
   for(int i = n; i <= m; i++){
    sum += i;
   }
    cout<<"sum= "<<sum;
    return 0;
}
*/
/*
int main()
{
    int n;
    cin >> n;
    for(int i=1; i <= n; i++){
        if(n%i == 0){
            cout<<i;
        }
    }
    return 0;
}
*/

int main()
{
    int n;
    cin>>n;
    /*
    int x;
    cin >> n;
    x = n % 10;
    cout << x <<endl;
    x= x/10;
    n = x%10;
    cout <<x<<endl;
*/

    while(n>0){
        cout << n%10<<endl;
        n = n/10;
    }
    return 0;
}
