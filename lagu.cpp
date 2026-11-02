#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector<string> lagu ={"Ini Abadi", "Monokrom"
    };
    lagu.insert(lagu.begin()+1, "everything u are");
    lagu.push_back("Aitakatta");
    lagu.erase(lagu.begin());
    for(string item : lagu){
        cout << item << " ";
    }
    return 0;
}
