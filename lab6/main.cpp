#include "functions.h"
#include "Agency.h"


int main() {
    srand(time(0));

    cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "~~~~~~ PART 1 ~~~~~~" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~" << endl << endl;
    func* f;

    double p4 = 3.14159265359 / 4;

    tg a(p4);
    f = &a;

    cout << "pi/4 = " << p4 << endl;
    cout << "tg(pi/4) = " << f->calculate() << endl;
    arctg ar(1);
    f = &ar;
    cout << "arctg(1) = " << f->calculate() << endl;

    cout << endl << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "~~~~~~ PART 2 ~~~~~~" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~" << endl << endl;
    Agency<Client> firm;
    for (int i = 0; i < 9; i++) {
        string name = "Bob";
        name += to_string(i + 1);

        string id = "0123";
        if (i < 9)id += "0";
        id += to_string(i + 1);

        Client bob(name, id);

        firm.make_an_order(&bob);
        /*bob.show_info();
        cout << endl << endl;*/
    }
   // cout<< "~~~~~~~~~~~~~~~~~~~~" << endl;
    firm.determine_income();

}



