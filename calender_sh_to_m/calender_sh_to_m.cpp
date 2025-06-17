#include <iostream>
using namespace std;

int Y_to_d (int y){
    int d=0;
    while ( y!=0 ){
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
                    d=d+366;
                    break;
                default:
                    d=d+365;
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
                    d=d+366;
                    break;
                default:
                    d=d+365;
            }
            else if (y==1403)
                d=d+366;
            else
                d=d+365;
        y--;
    }
    return d;
}

bool KMcheck (int q){
    int ch;
    if (q%4==0)
        if (q%100==0)
            if (q%400==0)
                ch=1;
            else
                ch=0;
        else
            ch=1;
    else
        ch=0;
    return ch;
}

int main (){
    int y, m, d, p, q, w;
    cout << "enter the date:\n";
    cout << "year: ";
    cin >> y;
    cout << "\nmonth: ";
    cin >> m;
    cout << "\nday: ";
    cin >> d;

    if (m<=6)
        p=31*(m-1);
    else
        p=(m-1)*30+6;
    d = d + p + 80 + Y_to_d (y-1);
    w = 1;
    q = 622;
    while (d>=32){
        switch (w){
            case 1:{
                if (d>31){
                    w++;
                    d-=31;
                    continue;}
                else
                    break;
            }
            case 2:{
                if (KMcheck (q))
                    if (d>29){
                        w++;
                        d-=29;
                        continue;}
                    else
                        break;
                else if (d>28){
                        w++;
                        d-=28;
                        continue;}
                    else
                        break;
            }
            case 3:{
                if (d>31){
                    w++;
                    d-=31;
                    continue;}
                else
                    break;
            }
            case 4:{
                if (d>30){
                    w++;
                    d-=30;
                    continue;}
                else
                    break;
            }
            case 5:{
                if (d>31){
                    w++;
                    d-=31;
                    continue;}
                else
                    break;
            }
            case 6:{
                if (d>30){
                    w++;
                    d-=30;
                    continue;}
                else
                    break;
            }
            case 7:{
                if (d>31){
                    w++;
                    d-=31;
                    continue;}
                else
                    break;
            }
            case 8:{
                if (d>31){
                    w++;
                    d-=31;
                    continue;}
                else
                    break;
            }
            case 9:{
                if (d>30){
                    w++;
                    d-=30;
                    continue;}
                else
                    break;
            }
            case 10:{
                if (d>31){
                    w++;
                    d-=31;
                    continue;}
                else
                    break;
            }
            case 11:{
                if (d>30){
                    w++;
                    d-=30;
                    continue;}
                else
                    break;
            }
            case 12:{
                if (d>31){
                    w=1;
                    d-=31;
                    q++;}
                else
                    break;
            }
        }
    }
    cout << q << " / " << w << " / " << d;
}
