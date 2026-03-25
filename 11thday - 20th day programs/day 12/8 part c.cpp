#include <iostream>
#include <regex>
using namespace std;

bool isValidInvoice(const string &invoice) {
    regex pattern(R"(^INV-(\d{4})(0[1-9]|1[0-2])-(\d{6})$)");
    return regex_match(invoice, pattern);
}

int main() {
    string invoice;
    cout << "Enter invoice number: ";
    cin >> invoice;

    if (isValidInvoice(invoice))
        cout << "Valid invoice number\n";
    else
        cout << "Invalid invoice number\n";

    return 0;
}