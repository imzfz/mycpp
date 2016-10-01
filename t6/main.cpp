#include "head.h"

int main() {
    Cal calcu;
    cout<<"Please input length, width, height"<<endl;
    cin>>calcu.length>>calcu.width>>calcu.height;
    cout<<"体积是"<<calcu.cal(calcu.length, calcu.width, calcu.height)<<endl;

    cout<<"Please input length, width, height"<<endl;
    cin>>calcu.length>>calcu.width>>calcu.height;
    cout<<"体积是"<<calcu.cal(calcu.length, calcu.width, calcu.height)<<endl;

    cout<<"Please input length, width, height"<<endl;
    cin>>calcu.length>>calcu.width>>calcu.height;
    cout<<"体积是"<<calcu.cal(calcu.length, calcu.width, calcu.height)<<endl;
    return 0;
}