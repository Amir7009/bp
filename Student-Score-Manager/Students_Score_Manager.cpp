#include <iostream>
using namespace std;
#define S 50

void Des_sorter ( float s[], int n );
float MaxFind ( float s[], int n );
// because of recursive function The process of max(min)find may be take a few minutes if the input data is more than 30 data...!
float MinFind ( float s[], int n );
void search1 ( float s[], int n, float d );

int main() {
    static int i=0;//for keep the number of students.
    float List[S]={0}, spare_list[S]={0};// spare list has used for sorting data with keeping the owner of score.
    int key=1, R;
    while ( key != 0 ){
        cout << "\n* * * * * * * * * * * * *\n1-Add a new student score\n2-Show the students score\n3-Sort scores\n4-Find maximum score\n5-Find minimum score\n6-Class average\n7-Check student acceptance\n8-Search a score\n9-Exit\n* * * * * * * * * * * * *\n\nEnter your choice: ";
        //* * * * * * * * * * * * *
        //1-Add a new student score
        //2-Show the students score
        //3-Sort scores
        //4-Find maximum score
        //5-Find minimum score
        //6-Class average
        //7-Check student acceptance
        //8-Search a score
        //9-Exit
        //* * * * * * * * * * * * *

        cin >> R;
        switch (R){

            case 1://get students score up to 50 students
                while ( i+1 <= 50 ){
                    cout << "\nStudent (" << i+1 << ") score: ";
                    cin >> List[i];
                    spare_list[i] = List[i];
                    i++;
                    break;
                }
                if ( i+1 >  50 ){
                    cout << "\nNumber of input scores is maximum.(up to 50 student)\n";
                    break;
                }
                break;

            case 2:
                cout << "\n";
                for ( int j = 0 ; j < i ; j++ )
                    cout << spare_list[j] << "\n";
                cout << "\n";
                break;

            case 3:
                Des_sorter ( spare_list, i );
                cout << "\n";
                for ( int j = 0 ; j < i ; j++ )
                    cout << spare_list[j] << "\n";
                cout << "\n";
                break;

            case 4:
                if ( i > 0 ){
                    i--;
                    cout << "\n*** " << MaxFind ( List, i ) << " ***\n";
                    i++;
                    break;
                }
                break;

            case 5:
                if ( i > 0 ){
                i--;
                cout << "\n*** " << MinFind ( List, i ) << " ***\n";
                i++;
                break;
                }
                break;

            case 6:
                {
                float avg=0;
                for (int j=0 ; j < i ; j++ )
                    avg += List[j];
                avg /= i;
                cout << "\nThe average of class is: " << avg << "\n";
                break;
                }

            case 7:
                {
                int pos;
                cout << "\nEnter the number of student: ";
                cin >> pos;
                if ( pos > i ){
                    cout << "\nStudent not found!\n";
                    break;
                }
                if ( List[pos-1] >= 50 )
                    cout << "\nThis student has been accepted.\n";
                else
                    cout << "\nThis student has NOT been accepted.\n";
                break;
                }

            case 8:
                {
                float src;
                cout << "\nEnter a score for search: ";
                cin >> src;
                search1 ( List, i, src );
                break;
                }

            case 9:
                {
                key = 0;
                cout << "\n*** We are pleased to provide services to you. ***\n";
                break;
                }

            default:
                cout << "\nEnter number of service that do you will to get.\n";
        }
    }
    return 0;
}



void Des_sorter ( float s[], int n ){
    for ( int i=0 ; i <= n-2 ; i++ ){
        for ( int j=n-1 ; j > i ; j-- )
            if ( s[j-1] < s[j] ){
                float tmp=s[j];
                s[j]=s[j-1];
                s[j-1]=tmp;
            }
    }
}// this function sorts the list in form of descending by bubble sort.

float MaxFind ( float s[], int n ){
    if ( n == 0 )
        return s[n];
    else
        return ( s[n] > MaxFind( s, n-1 ))? s[n] : MaxFind( s, n-1 );
}

float MinFind ( float s[], int n ){
    if ( n == 0 )
        return s[n];
    else
        return ( s[n] < MinFind( s, n-1 ))? s[n] : MinFind( s, n-1 );
} // this functions compare each number with the next one to push max(min) up.

void search1 ( float s[], int n, float d ){
    int pos = -1;
    for( int i=0 ; i < n ; i++){
        if ( s[i] == d ){
            pos = i;
            cout << "\nstudent " << pos+1 << "\n" ;
        }
    }
    if ( pos == -1 )
        cout << "\n" << d << " is not found!\n";
}// lists all of the students whom the score belong them.
