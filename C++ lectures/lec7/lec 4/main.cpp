#include <iostream>

using namespace std;

/*
void getMax(int first, int second){
        if(first > second){

            cout<<first;
        }else if(second > first){
            cout<<second;
        }else{
            cout<<"they are equals";
        }
}
*/
/*
void sum(int num){
    int result=0;
    for(int i=0; i <= num; i++){
        result += i;
    }
    cout<<result;
}
*/

int sum(int x, int y){
    int res;
    res = x+y;
    return res;
}
int sub(int x, int y){
    int res;
    res = x-y;
    return res;
}
int divide(int x, int y){
    int res;
    res = x/y;
    return res;
}
int multi(int x, int y){
    int res;
    res = x*y;
    return res;
}

int calculator(int x,char y,int z){
    int result;
    switch(y){
    case '+': result = sum(x,z); break;
    case '-': result = sub(x,z); break;
    case '/': result = divide(x,z); break;
    case '*': result = multi(x,z); break;
    }
    return result;
    /*if(y == '+'){
            cout<<sum(x,z);
        //result = sum(x,y);
    }else if(y == '-'){
        //result = sub(x,y);
        cout<<sub(x,z);
    }else if(y == '/'){
        //result = divi(x,y);
        cout<<divi(x,z);
    }else if(y == '*'){
    //result = multi(x,y);
    cout<<multi(x,z);
    }*/
    /*return result;*/
}


int main()
{
    int a,c;
    char b;
    cin>>a>>b>>c;

    cout<<calculator(a,b,c);
    return 0;
}
