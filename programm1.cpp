#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct klopsi {
           string diag;
           unsigned int lang;
           };

int main() {
    vector<klopsi> myKlops;
    klopsi neuerKlopsi;       
          
    do {
            cout << "Geben Sie die Diagnose ein:" << endl;
            cin >> neuerKlopsi.diag;
            if (neuerKlopsi.diag == "-") break;
            cout << "Geben Sie die Aufenthaltslänge ein:" << endl;
            cin >> neuerKlopsi.lang;
            cout << "Der Klopsi hat " << neuerKlopsi.diag << " und ist " << neuerKlopsi.lang << " Wochen hier." << endl;
            myKlops.push_back(neuerKlopsi);
            }
    while (neuerKlopsi.diag != "-");
    cout << "Du hast " << myKlops.size() << " Klopsis eingegeben." << endl;
    
    for (size_t i=0; i < myKlops.size() ; i++) 
    {cout << "Klopsi Nummer " << i << " hat " << myKlops[i].diag << " und ist seit " << myKlops[i].lang << " Woche(n) hier." << endl;
    }
    
    system("PAUSE");
    return(0);
}
