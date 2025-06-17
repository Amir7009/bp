#include <iostream>
using namespace std;

bool kabise_check (int y){
        if (y<=473)
            switch (y%128){
                case 0:
                case 4:
                case 8:
                case 12:
                case 16:
                case 20:
                case 25:
                case 29:
                case 33:
                case 37:
                case 41:
                case 45:
                case 49:
                case 53:
                case 58:
                case 62:
                case 66:
                case 70:
                case 74:
                case 78:
                case 82:
                case 86:
                case 91:
                case 95:
                case 99:
                case 103:
                case 107:
                case 111:
                case 115:
                case 120:
                case 124:
                    return true;
                    break;
                default:
                    return false;
            }
        else if ((y>=474 && y<1403)||y>1404)
            switch (y%128){
                case 0:
                case 4:
                case 8:
                case 12:
                case 16:
                case 20:
                case 24:
                case 29:
                case 33:
                case 37:
                case 41:
                case 45:
                case 49:
                case 53:
                case 57:
                case 62:
                case 66:
                case 70:
                case 74:
                case 78:
                case 82:
                case 86:
                case 90:
                case 95:
                case 99:
                case 103:
                case 107:
                case 111:
                case 115:
                case 119:
                case 124:
                    return true;
                    break;
                default:
                    return false;
            }
            else if (y==1403)
                return true;
            else
                return false;
}

int main (){
    int y, m, d, i, j;
    cout << "enter a date : (Y/M/D)\nY= ";
    cin >> y;
    cout << "M= ";
    cin >> m;
    cout << "D= ";
    cin >> d;
    d++;
    switch (m){
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        if ( d > 31 ){
            d=1;
            m++;
        }
        break;
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
        if ( d > 30 ){
            d=1;
            m++;
        }
        break;
    case 12:
        if ( kabise_check (y)){
            if ( d > 30 ){
                d=1;
                m=1;
                y++;
            }
        }
        else
            if ( d > 29 ){
                d=1;
                m=1;
                y++;
            }
    }
    cout << y << "/" << m << "/" << d;


}
