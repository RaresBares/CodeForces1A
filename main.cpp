#include <iostream>

using namespace std;

int main() {
     long n = 1, m = 1, a = 1;
    cin >> n >> m>> a;

     long  nd, md;
    if((n % a) != 0 ){
        nd = (int)( n/a) + 1;
    } else{
        nd = n /a;
    }

    if((m % a) != 0 ){
        md = ( long )( m/a) + 1;
    } else{
        md = m /a;
    }
    unsigned long long int times = md*nd;
    cout << times;

    return 0;
}