#include <iostream>

using namespace std;
//Q1
/*
int main()
{
    for(int x=1; x <= 10; x++){
        cout<<x<<" ";
    }
    return 0;
}
*/
//Q2
/*
int main()
{
    for(int x=10; x >= 1; x--){
        cout<<x<<" ";
    }
    return 0;
}
*/
/*
//Q3
int main()
{
    int n;
    cin>>n;
    int sum = 0;
    for(int x=1; x <= n; x++){
        sum += x;

    }
    cout<<sum;
    return 0;
}
*/
//Q4
/*
int main()
{
    float num;
    float sum = 0;

    for(int x=1; x <= 10; x++){
        cin>>num;
        sum += num;
    }

    cout<<"avg ="<<sum/10;
    return 0;
}
*/
//Q5
/*
int main()
{
    int n;
    cin>>n;

    for(int x=1; x <= 12; x++){
        cout<<x<<"*"<<n<<"="<<x*n<<endl;
    }
    return 0;
}
*/

//Q6
/*
int main()
{
    for(char l = 'a'; l <= 'z'; l++){
        cout<<l<<" ";
    }
    return 0;
}
*/
//Q7
/*
int main()
{
    int sum = 0;
    int n;
    for(;;){
        cin>>n;
        if(n >= 0){
            sum += n;
        }else{
            break;
        }
    }
    cout<<sum;
    return 0;
}
*/
//Q8
/*
int main()
{
    int n=1;
    int maxNum = 0;

    for(;;){
        cin>>n;
        if(n >= 0){
            if(n > maxNum){
                maxNum = n;
            }
        }else{
            break;
        }
    }
    cout<<maxNum;
    return 0;
}
*/
/*
//Q9
int main()
{
    int n;
    cin>>n;
    int fact=1;
    for(int x = 1; x <= n; x++){
            fact *= x;
    }
    cout<<fact;
    return 0;
}
*/

//Q10
/*
int main()
{
    int base;
    int expo;
    cout<<"Input base:";
    cin>>base;
    cout<<"Input exponent:";
    cin>>expo;

    int power = 1;
    for(int x = 1; x <= expo; x++){
            power *= base;
    }
    cout<<power;
    return 0;
}
*/
