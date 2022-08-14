#include <iostream>

using namespace std;

class Capacity
{
int cap, num;
public:
void getcap(void)
{
cout<<"Enter the capacity of the bus: ";
cin>>cap;
}
void display(void)
{
    cout<<"The capacity = "<<cap<<endl;
}
void calcempty_seats(void)
 {
     switch  (cap)
     {
        case 1:/* constant-expression */
        cout<<"Seat already booked"<<endl; /* code */
        break;
        default:
        cout<<"All seats empty";
        break;
     }
    }

};
int main()
{
    Capacity cap1;
    cap1.getcap();
    cap1.display();
    cap1.calcempty_seats();
    return 0;
}