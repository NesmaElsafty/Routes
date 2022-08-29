#include <iostream>

using namespace std;

//int main()
//{

    /*Q1*/
    /*
    - if condition checks one condition in every single time .
    - "switch" checks multiple cases in same time

    - switch is faster way than if condition
    - switch has Break / default in syntax
    */

    //Example
    /*
    int n;
    cin>>n;

    switch(n){
        case(1)  : cout<<"January"; break;
        case(2)  : cout<<"February"; break;
        case(3)  : cout<<"March"; break;
        case(4)  : cout<<"April"; break;
        case(5)  : cout<<"May"; break;
        case(6)  : cout<<"June"; break;
        case(7)  : cout<<"July"; break;
        case(8)  : cout<<"August"; break;
        case(9)  : cout<<"september"; break;
        case(10) : cout<<"October"; break;
        case(11) : cout<<"November"; break;
        case(12) : cout<<"December"; break;
        default  : cout<<"This number is not Month";
    }


if(n == 1){
    cout<<"January";
}else if(n == 2){
    cout<<"February";
}else if(n == 3){
    cout<<"March";
}
else if(n == 4){
    cout<<"April";
}
else if(n == 5){
    cout<<"May";
}
else if(n == 6){
    cout<<"June";
}else if(n == 7){
    cout<<"July";
}else if(n == 8){
    cout<<"August";
}
else if(n == 9){
    cout<<"September";
}else if(n == 10){
    cout<<"October";
}else if(n == 11){
    cout<<"November";
}else if(n == 12){
    cout<<"December";
}else{
    cout<<"This number is not Month";
}
*/

    //Q2
    /*
    - do while executes the code once then will continue  if the condition executes
    - do while executes even if the condition is false
    - has specific size for the loop -> "has limited counter"
    */
    /*
    int n;
    cin>>n;
    do{
        cout<<"The Number is less than 5";
    }while(n == 5);
    */
    /*
    for(int i=1; i < n; i++){
        cout<<"The Number is less than 5"<<endl;
    }
    */

    //Q3
    /*int , float, double, char*/
  //  return 0;
//}
//Q4
/*
int avg(int arr[]){
    int sum=0;
    int avg=0;
    for(int i=0; i <= sizeof(arr); i++){
        sum += arr[i];
    }
    return sum;
    avg = sum/sizeof(arr);

    return avg;
    }

int main(){

   int arr[] = {1,2,3,4,5};
   cout<<avg(arr)<<endl;
    return 0;
}
*/
/*

//Q5
void swap(int n, int m){
    int r;

    r = n;
    n = m;
    m = r;

    cout<<"first: "<<n<<" second: "<<m;
}

int main(){
    int x,y;
    cin>>x>>y;

    swap(x,y);
return 0;
}
*/
/*
//Q6
int main(){
    for(int i=1; i <= 5; i++){
        cout<<i;

        for(int j=1; j<=i; j++){
            if(j == i){
                cout<<i;
            }
        }
        cout<<endl;
    }
}
*/

//Q7
/*
*   *
**  *
* * *
*  **
*   *
*/

