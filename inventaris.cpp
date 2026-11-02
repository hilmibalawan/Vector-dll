#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector<string> inventaris = {"Pedang Kayu", "Perisai Besi"};
    inventaris.insert(inventaris.begin(), "Potion Darah");
    inventaris.insert(inventaris.begin()+2, "Busur Panah");
    inventaris.pop_back();
    for(string item : inventaris){
        cout << item << " ";
    }
    return 0;
}