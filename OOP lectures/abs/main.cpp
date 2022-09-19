#include <iostream>

using namespace std;
template<class T> //template
class MyArray{
    T* arr; //To make user y7dd el size
    int size;
public:
    MyArray(int s){
        size = s;
        arr = new T[size]; // 7gzly array fl HEAB el size bta3o = 5;
    }
    void read(){
        for(int i=0; i <= size; i++){
            cin>>arr[i];
        }
    }

    void print(){
        for(int i=0; i <= size; i++){
            cout<<arr[i]<<endl;
        }
    }

    int find(T val){
        for(int x; x<= size; x++){
            if(arr[x] == val){
                return x;
            }else{
                return -1;
            }
        }
    }


};
int main()
{
    //allocate array into heab by pointer;

//    MyArray* p = new MyArray<int>(5);
    MyArray<int> p(5);

    p.read();
    //p.print();
    p.find(5);

    return 0;
}
