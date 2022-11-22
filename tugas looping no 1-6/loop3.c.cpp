#include <iostream>

using namespace std;

int main(){
    int i;
    for (i = 100; i >= 0; i--){
        if (i % 2 == 1){
            continue;
        }
        if (i == 0) {
            break;
        }
        cout << "nilai genap adalah " << i << endl;
    }

    return 0;
}
