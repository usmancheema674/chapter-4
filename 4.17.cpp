#include <iostream>
#include <string>
using namespace std;
int main(){
    int counter=1;
    int umar;

    int units;
    int secondmax=0,max=0;
    while (counter<=10) {
        cout<<"Please Enter Units for Salesman # "<<counter<<" ";
        cin>>units;
        if(max<units){
            secondmax=max;
            max=units;
                umar=counter;
        }

        counter++;
    }
    cout<<"The Maximum Units Selled are:"<<max<<endl;

    cout<<"The Maximum Units Selled by Saleman no:"<<umar<<endl;
    return 0;
}
