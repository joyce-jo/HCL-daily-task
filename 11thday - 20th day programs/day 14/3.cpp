#include <iostream>
#include <stack>
using namespace std;

class TextEditor {

    stack<string> undoStack;
    stack<string> redoStack;
    string text="";

public:

    void type(char c) {
        undoStack.push(text);
        text += c;
    }

    void backspace() {
        if(!text.empty()) {
            undoStack.push(text);
            text.pop_back();
        }
    }

    void undo() {
        if(!undoStack.empty()) {
            redoStack.push(text);
            text = undoStack.top();
            undoStack.pop();
        }
    }

    void redo() {
        if(!redoStack.empty()) {
            undoStack.push(text);
            text = redoStack.top();
            redoStack.pop();
        }
    }

    void print() {
        cout << text << endl;
    }
};

int main() {

    TextEditor t;

    t.type('a');
    t.type('b');
    t.type('c');

    t.print();

    t.undo();
    t.print();

    t.redo();
    t.print();
}