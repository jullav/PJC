#include <iostream>
#include <climits>

using namespace std;

int main() {
    cout << "Enter integer values. Exit with 0" << endl;

    int min_value(0);
    int max_value(0);
    int min_count(0);
    int max_count(0);

    while (true) {
        int curr_value;
        cout << "Enter integer: ";
        cin >> curr_value;


        if (curr_value !=0 && curr_value > max_value) {
            max_value = curr_value;
            max_count = 0;
        }

        if (curr_value!=0 && curr_value < max_value) {
            min_value = curr_value;
            min_count = 0;
        }

        if (curr_value!= 0 && curr_value < min_value) {
            min_value = curr_value;
            min_count = 0;
        }


        if (curr_value == max_value) {
            max_count++;
        }

        if (curr_value == min_value) {
            min_count++;
        }


        //exit
        if (curr_value == 0) {
            cout << "Min= " << min_value << " " << min_count << " times" << endl;
            cout << "Max= " << max_value << " " << max_count << " times" << endl;
            return 0;
        }


    }
}