#include <iostream>
using std::cout;
using std::cin;

int main(){
    long long n;
    long long m;
    long long a;
    cin >> n;
    cin >> m;
    cin >> a;
    long long  countn = n / a;
    long long countm = m / a;
    if (n%a!=0) {
        ++countn;
    }
    if(m%a!=0){
        ++countm;
    }
    cout << countn * countm;
    return 0;

}