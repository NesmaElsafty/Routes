#include <iostream>
#include <string>
using namespace std;

int getCount(string word, char letter){
    int counter = 0;
    for(int i = 0; i < word.size(); i++){
        if(word[i] == letter){
            counter ++;
        }
    }
    return counter;
}
void printUniqu(string text){

    for(int x=0; x <= text.size(); x++){
        if(getCount(text, text[x]) == 1){
            cout<<text[x];
        }
    }
}
/*
int main()
{
    string n; char l;
    cout<<"Enter Word: ";
    cin>>n;
    cout<<"Enter Letter:";
    cin>>l;
    cout<<getCount(n,l);


    return 0;
}
*/
/*
int main()
{
    string n;
    cin>>n;
    printUniqu(n);
    return 0;
}
*/


