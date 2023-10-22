
#include <cstring>
#include <string>
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

#ifdef _WIN32
#include <windows.h> // For Windows-specific screen clearing
#else
#include <cstdlib> // For Unix/Linux-based screen clearing
#endif




void display(char arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{

	string s;
	cout<<"Enter any string add ------ before and after the string for better experience"<<endl;
	getline(cin, s);
// 	cout<<s;

	const int length = s.length();
	char* char_array = new char[length + 1];
	strcpy(char_array, s.c_str());
    while (true)
    {
        display(char_array, length);
        this_thread::sleep_for(chrono::milliseconds(1000));

        // Clear the screen based on the platform
        #ifdef _WIN32
        system("cls"); // Windows
        #else
        system("clear"); // Unix/Linux-based
        #endif

        // Rotate the array
        char x = char_array[length - 1];
        for (int i = length - 1; i > 0; i--)
        {
            char_array[i] = char_array[i - 1];
        }
        char_array[0] = x;
    }
	
	return 0;
}

