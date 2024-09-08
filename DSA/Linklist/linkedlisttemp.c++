
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class MusicLibrary {
    private:
        struct Song {
            string name;
            string artist;
        };
        vector<Song> songs;
    public:
        void add_song(string name, string artist) {
            Song song = {name, artist};
            songs.push_back(song);
        }
        void display_songs() {
            sort(songs.begin(), songs.end(), [](const Song& a, const Song& b) {
               return a.artist < b.artist;
            }
            for (auto song : songs) {
                cout << song.name << " - " << song.artist << endl;
            }
        }
};

int main() {
    int n;
    cin >> n;

    MusicLibrary library;

    for (int i = 0; i < n; i++) {
        string name, artist;
        cin >> name >> artist;
        library.add_song(name, artist);
    }

    library.display_songs();

    }
}
}

