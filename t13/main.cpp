#include "t13.h"
using namespace std;
int main()
{
    Reversal rev;
    int i = 0, j = 1;

    while(j != 0) {

        cout<<"Please input how many numbers(0=exit):"<<endl;
        cin>>i;
        if (i == 0) {
            exit(0);
        }
        cout<<"Please input type of the numbers:\n1=int, 2=long, 3=double"<<endl;
        cin>>j;
        if (j == 3) {
            double *p = new double[i];
            rev.Input(i, p);
            rev.sort(i, p);
            delete (p);
        }
        else if (j == 2) {
            long *q = new long[i];
            rev.Input(i, q);
            rev.sort(i, q);
            delete (q);
        }
        else if (j == 1) {
            int *r = new int[i];
            rev.Input(i, r);
            rev.sort(i, r);
            delete (r);
        }
        else{
            cout<<"Input error"<<endl;
        }

    }

    return 0;
}