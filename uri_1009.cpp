#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string vendedor;
    double salariofixo, vendasmes, total;

    cin >> vendedor;

    cin >> salariofixo >> vendasmes;

    total = (vendasmes * 15/100) + salariofixo;

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << total << endl;

return 0;
}
