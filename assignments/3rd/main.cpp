#include <iostream>

using namespace std;

// Q1
/*
int main()
{
    for(int i=1; i<=6; i++){
        for(int n=1; n<=i; n++){
            if(n==1 || n==i || i==6){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/
//Q2
/*
  int main()
{
    for(int i=6; i>=1; i--){
        for(int n=1; n<=i; n++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/
//Q3
/*
int main()
{
    int num[8];
    int even = 0;
    int odd = 0;
    for(int i=0; i<=8; i++){
        cin>>num[i];

        if(num[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }

    cout<<"Total even elements: "<<even<<endl;
    cout<<"Total odd elements: "<<odd<<endl;
    return 0;
}
*/
//Q4
/*
int main()
{
    int arr[] = {10, 12, 20, 25, 13, 10, 9, 40, 60, 5};
    int num;
    cin>>num;
    for(int i=0; i<=9; i++){
        if(arr[i] == num){
            cout<<"Element found at index: "<<i;
        }
    }

    return 0;
}
*/

//Q5
/*
int main()
{
    int arr1[10];
    int arr2[10];

    for(int i=0; i<=9; i++){
        cin>>arr1[i];

        arr2[i] = arr1[i];
    }
    cout<<"array 1: ";
    for(int x=0; x<=9; x++){
    cout<<arr1[x]<< " ";
    }
    cout<<endl<<"array 2: ";
    for(int n=0; n<=9; n++){
        cout<<arr2[n]<< " ";
    }
    return 0;
}
*/
/*
//Think again
//Q6
int main()
{
    int arr[10]= { 1, 2, 3, 5, 1, 5, 20, 2, 12, 10};
    int dub = 0;
    int uni = 0;
    int result[9];

    for(int i=0; i<=9; i++){
        for(int n=0; n<=9; n++){
            if(arr[n] == arr[i]){
                dub++;
            }else{
                uni++;
                result[n] = arr[i];

            }
        }
    }
    if(uni < 2){
        for(int s=0; s <= 9; s++){
            cout<<result[s]<<endl;
        }
    }
    return 0;
}
*/
int main()
{
    int one[] = {1, 4, 6, 9, 15};
    int two[] = { 2, 5, 8, 10};
    int three[10];

    for(int i=0; i<5; i++){
        three[i] = one[i];
    }
    for(int n=5; n < 9; n++){
        three[n] = two[n];
    }


    for(int s=0; s<10;s++){
        cout<<three[s]<<" ";
    }
    return 0;
}
