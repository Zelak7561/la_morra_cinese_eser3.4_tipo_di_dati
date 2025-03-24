#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main() {

    srand(time(0));

    int n = 0;

    int stato_utente = 0;
    int stato_ai = 0;

    char scelta_utente[100] = " ";
    char scelta_ai[100] = " ";

    char mosse[3][100] = {"carta" , "sasso" , "forbici"};

    cout << "Morra cinese" << endl;
    cout << "Inserire il numero di round da giocare" << endl;
    cin >> n;


   for (int i = 0; i < n; i++) {
       int n = rand() % 3;

       cout << "Round: " << i + 1 << endl;
       strcpy(scelta_ai, " ");

       cout << "Inserire tra [carta] [sasso] [forbici]: " << endl;
       cin >> scelta_utente;

       strcpy(scelta_ai, mosse[n]);

       cout << "Scelta utente: " << scelta_utente << endl;
       cout << "Scelta ai: " << scelta_ai << endl;

       if (strcmp(mosse[n] , scelta_utente) == 0) {
           stato_utente = 0;
           stato_ai = 0;
           cout << "Round in pareggio" << endl;
       }

       if (strcmp(mosse[n] , scelta_utente) != 0) {

           if (strcmp(mosse[n], "forbici") == 0 && strcmp(scelta_utente, "carta") == 0) {
               stato_ai++;
               cout << "Round vinto[ai]" << endl;
           }

           if (strcmp(mosse[n], "carta") == 0 && strcmp(scelta_utente, "forbici") == 0) {
               stato_utente++;
               cout << "Round vinto[utente]" << endl;
           }

           if (strcmp(mosse[n], "sasso") == 0 && strcmp(scelta_utente, "forbici") == 0) {
               stato_ai++;
               cout << "Round vinto[ai]" << endl;
           }

           if (strcmp(mosse[n], "forbici") == 0 && strcmp(scelta_utente, "sasso") == 0) {
               stato_utente++;
               cout << "Round vinto[utente]" << endl;
           }

           if (strcmp(mosse[n], "carta") == 0 && strcmp(scelta_utente, "sasso") == 0) {
               stato_ai++;
               cout << "Round vinto[ai]" << endl;
           }

           if (strcmp(mosse[n], "sasso") == 0 && strcmp(scelta_utente, "carta") == 0) {
               stato_utente++;
               cout << "Round vinto[utente]" << endl;
           }

       }

       cout << endl;
   }

    if (stato_utente > stato_ai) {
        cout << "L'utente ha vinto con un punteggio di: " << stato_utente << endl;
    } else {
        cout << "L'ai ha vinto con un punteggio di: " << stato_ai << endl;
    }




    return 0;
}