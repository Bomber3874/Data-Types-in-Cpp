/*Sanidhya Singh
PRN-24070123140
ENTC B2
*/


#include <iostream>
#include <string>
using namespace std;

int main(){
    int a;
    cout<<"Enter any integer: ";
    cin>>a;
    cout<<"Integer = "<<a<<" and size is "<<sizeof(a)<<" bytes"<<endl;

    float b;
    cout<<"enter any number with decimal: ";
    cin>>b;
    cout<<"float = "<<b<<" and size is "<<sizeof(b)<<" bytes"<<endl;

    string c;
    cout<<"Enter any string: ";
    cin>>c;
    cout<<"String = "<<c<<" and size is "<<sizeof(c)<<" bytes"<<endl;

    char d;
    cout<<"Enter any character: ";
    cin>>d;
    cout<<"Character = "<<d<<" and size is "<<sizeof(d)<<" bytes"<<endl;

    bool e;
    cout<<"Boolean = "<<e<<" and size is "<<sizeof(e)<<" bytes"<<endl;

    double f;
    cout<<"Enter any number with bigger decimal: ";
    cin>>f;
    cout<<"Double = "<<f<<" and size is "<<sizeof(f)<<" bytes"<<endl;

    long g;
    cout<<"Enter any long integer: ";
    cin>>g;
    cout<<"Long = "<<g<<" and size is "<<sizeof(g)<<" bytes"<<endl;

    return 0;
}

/*Output
Enter any integer: 2323
Integer = 2323 and size is 4 bytes
enter any number with decimal: 34.56
float = 34.56 and size is 4 bytes
Enter any string: dfgfd
String = dfgfd and size is 32 bytes
Enter any character: f
Character = f and size is 1 bytes
Boolean = 46 and size is 1 bytes
Enter any number with bigger decimal: 434.545453
Double = 434.545 and size is 8 bytes
Enter any long integer: 4353535
Long = 4353535 and size is 8 bytes
*/
