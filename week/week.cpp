#include <iostream>
using namespace std;

int main (){
    int w;
    string week[7]={"Sat", "Sun", "Mon", "Tue", "Wed", "Thu", "Fri"};
    cout << "enter number of the day in week: ";
    cin >> w;
    switch (w){
    case 1:
        cout << week[0];
        break;
    case 2:
        cout << week[1];
        break;
    case 3:
        cout << week[2];
        break;
    case 4:
        cout << week[3];
        break;

    case 5:
        cout << week[4];
        break;

    case 6:
        cout << week[5];
        break;

    case 7:
        cout << week[6];
        break;

    }
    return 0;
}
