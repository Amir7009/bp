#include <iostream>
using namespace std;

int main(){
int r,c,res=1;
for(r=1; r<=4; r++){
    for(c=1; c<=4; c++)
        if((r+c==5)or(r==c))
        cout<<res++<<"\t";
    else
        cout<<17-res++<<"\t";
   cout<<"\n\n";
}
}
