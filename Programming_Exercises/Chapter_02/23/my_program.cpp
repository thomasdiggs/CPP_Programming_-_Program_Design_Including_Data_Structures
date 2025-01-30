
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercise 23
 *
 *
 * Cindy uses the services of a brokerage firm to buy and sell stocks. The
 * firm charges 1.5% service charges on the total amount for each trans-
 * action, buy or sell. When Cindy sells stocks, she would like to know
 * if she gained or lost on a particular investment. Write a program that
 * allows Cindy to input the number of shares sold, the purchase price of
 * each share, and the selling price of each share. The program outputs the
 * amount invested, the total service charges, amount gained or lost, and
 * the amount received after selling the stock.
 */
 

#include <iostream>

using namespace std;

const double SERVICE_CHARGE_RATE = 1.5 / 100.0;

int main()
{
    int shares;
    double purchasePrice, sellingPrice, amountInvested, serviceCharges, amountGainedOrLost, amountReceived;

    cout << "Enter the number of shares sold: ";
    cin >> shares;
    cout << "Enter the purchase price of each share: ";
    cin >> purchasePrice;
    cout << "Enter the selling price of each share: ";
    cin >> sellingPrice;

    amountInvested = shares * purchasePrice;
    serviceCharges = SERVICE_CHARGE_RATE * (amountInvested + shares * sellingPrice);
    amountGainedOrLost = shares * (sellingPrice - purchasePrice) - serviceCharges;
    amountReceived = shares * sellingPrice - serviceCharges;

    cout << "Amount invested: " << amountInvested << endl
         << "Total service charges: " << serviceCharges << endl
         << "Amount gained or lost: " << amountGainedOrLost << endl
         << "Amount received after selling the stock: " << amountReceived << endl;

    return 0;
}

