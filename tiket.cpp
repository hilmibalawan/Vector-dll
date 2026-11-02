#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector<string> tiket = {"Budi", "Siti"};
    tiket.insert(tiket.begin(), "Roni");
    tiket.push_back("Dewi");
    tiket.erase(tiket.begin());
    for(string item : tiket){
        cout << item << " ";
    }
    return 0;
}