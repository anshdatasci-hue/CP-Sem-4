
#include <cmath>
using namespace std;

long double stirling(double n){
    if(n == 0) return 1;  
    return sqrt(2 * M_PI * n) * pow(n / M_E, n);
}

int main(){
    double n;
    cout << "Enter n = ";
    cin >> n;
    cout << "Approximate n! = " << stirling(n) << endl;
}
