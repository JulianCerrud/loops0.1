// loops0.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
/*int main()
{
    for (int i = 1; i < 5; i++) {
        cout << i << "";
    }
    return 0; 
}
*/
/* int main() {

    int i = 1; 
    while (i <= 5) {
        cout << i << "";

        i++;
    }
    return 0;
}
*/
/*int main() {

    int  i = 1;
    do {
		cout << i << "";
        i++;
	} while (i <= 5);
    return 0;
}
*/
int main() {

	int arr[] = { 1, 2, 3, 4, 5 };

    cout << "Iterating by value" << endl;
	for (auto it : arr) {
		cout << it << "";
	}
	cout << endl;

	cout << "Iterating by reference" << endl;
	for (auto& it : arr) {
		cout << it << "";
	}
	cout << endl;
    return 0;
}

