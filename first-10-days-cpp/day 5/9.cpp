#include <iostream>
using namespace std;

struct SongNode {
    string song;
    SongNode* next;

    SongNode(string s) {
        song = s;
        next = NULL;
    }
};

class Playlist {
    SongNode* last;

public:
    Playlist() {
        last = NULL;
    }

    void addSong(string name) {
        SongNode* newNode = new SongNode(name);

        if (last == NULL) {
            last = newNode;
            last->next = last;
        } else {
            newNode->next = last->next;
            last->next = newNode;
            last = newNode;
        }
    }

    void removeEnd() {
        if (last == NULL) return;

        if (last->next == last) {
            delete last;
            last = NULL;
            return;
        }

        SongNode* temp = last->next;
        while (temp->next != last) {
            temp = temp->next;
        }

        temp->next = last->next;
        delete last;
        last = temp;
    }

    void playKTimes(int k) {
        if (last == NULL) return;

        SongNode* temp = last->next;
        for (int i = 0; i < k; i++) {
            cout << temp->song << endl;
            temp = temp->next;
        }
    }
};

int main() {
    Playlist p;

    p.addSong("Song1");
    p.addSong("Song2");
    p.addSong("Song3");
    p.addSong("Song4");
    p.addSong("Song5");

    cout << "Playlist for 8 iterations:\n";
    p.playKTimes(8);

    cout << "\nAfter removing last song:\n";
    p.removeEnd();
    p.playKTimes(6);

    return 0;
}