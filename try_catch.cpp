#include <iostream>
#include <string>
#include <stdexcept>

int main()
{
	using namespace std;
    
	cout << "Enter an integer or '|' to terminate\n";
	string str;

	while (cin >> str) {

		if (str == "|")
		{
			break;
		}
		else
		{
			try
			{
				int x = std::stoi(str);
				cout << "You entered: " << x << '\n';
			}
			catch (const std::invalid_argument& ia) {
				cerr << "Invalid input.\n";
				// break; // What should happen here? You decide!
			}

		}
	}
	cout << "Terminating...\n";
	return 0;	
}