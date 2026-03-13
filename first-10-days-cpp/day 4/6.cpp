#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<string> undoStack;
    stack<string> redoStack;

    string text = "";
    int choice;
    string newText;

    do {
        cout << "\n1. Type Text\n2. Undo\n3. Redo\n4. Show Text\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                undoStack.push(text);
                cout << "Enter new text: ";
                getline(cin, newText);
                text += newText;
                while (!redoStack.empty()) redoStack.pop();
                break;

            case 2:
                if (!undoStack.empty()) {
                    redoStack.push(text);
                    text = undoStack.top();
                    undoStack.pop();
                } else {
                    cout << "Nothing to undo\n";
                }
                break;

            case 3:
                if (!redoStack.empty()) {
                    undoStack.push(text);
                    text = redoStack.top();
                    redoStack.pop();
                } else {
                    cout << "Nothing to redo\n";
                }
                break;

            case 4:
                cout << "Current Text: " << text << endl;
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 5);

    return 0;
}