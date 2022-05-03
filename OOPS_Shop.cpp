#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter() { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};
void Shop ::setPrice(void)
{
    cout << "Enter the Id of the item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the price of the item" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of the item no " << itemId[i] << " is "
             << itemPrice[i] << endl;
    }
}
int main()
{
    Shop Paltan;
    Paltan.initCounter();
    Paltan.setPrice();
    Paltan.setPrice();
    Paltan.setPrice();
    Paltan.displayPrice();
    return 0;
}