#include <iostream>

using namespace std;

void count_digits(int array[4][4]){

    int count = 0;

    for (int i = 0; i < 10; i ++){

        for (int k = 0; k < 4; k++){

            for (int j = 0; j < 4; j++){

                if (array[k][j] == i){

                    count++;
                }
            }
        }

        cout << i << ":" << count << ";";

        count = 0;
    }

    cout << endl;
}