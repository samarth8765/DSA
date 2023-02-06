#include<iostream>
using namespace std;

// simple class with constructor
// class abcd{
//     public:
//         int x,y;
//         abcd(int x, int y){
//             this->x = x;
//             this->y = y;
//         }
// };

// intialising list
class abcd{
    public:
        int x, y;
        abcd() : x(0),y(0){};
        abcd(int x, int y):x(x), y(y){};
};

int main(){
    abcd a1(3,4);
    cout<<a1.x<<endl;

    abcd *a2 = new abcd(5,6);
    cout<<a2->x<<endl;
}
