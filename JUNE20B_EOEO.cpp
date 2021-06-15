#include <iostream>
using namespace std;

int main() {
	long long t;
	cin >> t;
	while (t--) {
		long long ts, js;
		cin >> ts;
		if (ts == 1)
			cout << "0" << endl;
		else if (ts == 2)
			cout << "0" << endl;
		else if ( (ts % 2) == 1 ) {
			js = (ts - 1) / 2;
			cout << js << endl;
		}
		else {
			while ( (ts % 2) == 0 )
				ts = ts / 2;
			if (ts == 1)
				cout << "0" << endl;
			else {
				js = (ts - 1) / 2;
				cout << js << endl;
			}
		}
	}
	return 0;
}
