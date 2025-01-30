
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercise 14
 *
 *
 * (Hard drive storage capacity) If you buy a 40 GB hard drive, then
 * chances are that the actual storage on the hard drive is not 40 GB. This
 * is due to the fact that, typically, a manufacturer uses 1,000 bytes as the
 * value of 1K bytes, 1,000 K bytes as the value of 1 MB, 1,000 MB as the
 * value of 1 GB. Therefore, a 40 GB hard drive contains 40,000,000,000
 * bytes. However, in computer memory, as given in Table 1-1 (Chapter 1),
 * 1 KB is equal to 1,024 bytes, and so on. So the actual storage on a 40 GB
 * hard drive is approximately 37.25 GB. (You might like to read the fine
 * print next time you buy a hard drive.) Write a program that prompts the
 * user to enter the size of the hard drive specified by the manufacturer, on
 * the hard drive box, and outputs the actual storage capacity of the hard
 * drive.
 */


#include <iostream>

using namespace std;

const int BYTES_IN_A_KB = 1024;
const int BYTES_IN_A_MB = 1024 * 1024;
const int BYTES_IN_A_GB = (1 * BYTES_IN_A_MB * BYTES_IN_A_KB);

int main()
{
	double input, output;

	cout << "Input the advertised hard drive capacity (GB): ";
	cin >> input;

	double inputInMb = input * 1000;
	double inputInKb = inputInMb * 1000;
	double inputInBytes = inputInKb * 1000;

	output = inputInBytes / BYTES_IN_A_GB;

	cout << endl
	     << "Actual capacity is " << output << endl;

    return 0;
}

