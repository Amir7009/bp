#include <iostream>
using namespace std;

bool EOcheck (int n){
    return (0==n%2);

}

int main() {
    int m, s;
    cin >> m;
    s= EOcheck(m);
    cout << s;
}
