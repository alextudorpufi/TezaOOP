#include <bits/stdc++.h>
#include "grafOrientat.h";
using namespace std;
ifstream fin("cumstiueu.in");
ofstream fout("cumstiueu.out");


int nrN, i, j, lA[101][2];

void main_menu1()
{
    system("CLS");
    system("Color 0b");
    cout << "Grafuri Orientate \n";
    cout << "De unde doriti sa cititi numerele?\n\n";
    cout << "1. De la tastatura\n\n";
    cout << "2. Din fisier\n\n";
    cout << "3. V-ati razgandit si doriti sa iesiti din program\n\n";
    cout << "Introduceti optiunea: ";
}

void sets_menu()
{
    system("CLS");
    system("Color 0b");
    cout << "Ce doriti sa faceti cu acest graf orientat?\n\n";
    cout << "1. Aflati numarul de noduri ( in caz ca l-ati uitat (@)_(@) ) \n\n";
    cout << "2. Afisati listei de adiacenta pentru un nod dat\n\n";
    cout << "3. Determinarea gradului Interior al unui nod dat\n\n";
    cout << "4. Determinarea gradului Exterior al unui nod dat\n\n";
    cout << "5. Parcurgeti graful cu metoda Bfs\n\n";
    cout << "6. Parcurgeti graful cu metoda Dfs\n\n";
    cout << "Introduceti optiunea: ";
}

int main()
{
    main_menu1();
    int caz, caz1, nrA, nrM;
    cin >> caz;
    system("cls");

    if (caz == 1)
    {
        cout << "Cate noduri doriti sa aiba graful?";
        cout << endl;
        cin >> nrN;
        cout << "Cate arce doriti sa aiba graful?";
        cout << endl;
        cin >> nrM;
        cout << "Acum introduceti arcele, in perechi de cate 2 noduri:";
        cout << endl;
        for (int i = 1; i <= nrM; i++)
            for (int j = 1; j <= 2; j++)
            {
                cin >> lA[i][j];
            }
        grafOrientat g1(nrN, lA);
        sets_menu();
        cin >> caz1;
        if (caz1 == 1)
        {
            system("cls");
            cout << "Numarul de noduri este: " << g1.getNrNoduri() << endl;
            cout << endl << "Din pacate functia 'getch' nu a dorit sa functioneze" << endl;
            cout << "la mine in program si mi-a fost frica sa nu stric programul modificandu-l asa      (@)_(@)" << endl;
            cout << "ca va multumesc pentru intelegere si va rog sa o luati de la capat!!!               *   *" << endl;
        }
        else if (caz1 == 2)
        {
            int nodales;
            system("cls");
            cout << "Alegeti un nod: ";
            cin >> nodales;
            if (nodales<1 || nodales>nrN)
            {
                cout << endl;
                cout << "Cred ca instructiunea alesa e gresita (>'-'<)" << endl;
                cout << "Luati-o de la capat!                        * *  ";
            }
            else
            {
                cout << "Lista de adiacenta este urmatoarea: ";
                g1.afisareListaDupaNodDat(nodales);
                cout << endl;
            }

        }
        else if (caz1 == 3)
        {
            int nodales1;
            system("cls");
            cout << "Pentru ce nod doriti sa vedeti gradul interior? ";
            cin >> nodales1;
            if (nodales1<1 || nodales1>nrN)
            {
                cout << endl;
                cout << "Cred ca instructiunea alesa e gresita        (>'-'<)" << endl;
                cout << "Luati-o de la capat!                           * *  ";
                cout << endl;
            }
            else
            {
                cout << "Gradul interior al nodului ales este ";
                g1.gradInterior(nodales1);
                cout << endl;
            }
        }
        else if (caz1 == 4)
        {
            int nodales2;
            system("cls");
            cout << "Pentru ce nod doriti sa vedeti gradul exterior? ";
            cin >> nodales2;
            if (nodales2<1 || nodales2>nrN)
            {
                cout << endl;
                cout << "Cred ca instructiunea alesa e gresita        (>'-'<)" << endl;
                cout << "Luati-o de la capat!                           * *  ";
                cout << endl;
            }
            else
            {
                cout << "Gradul exterior al nodului ales este ";
                g1.gradExterior(nodales2);
                cout << endl;
            }
        }
        else if (caz1 == 5)
        {
            int nodales3;
            system("cls");
            cout << "Alegeti un nod pentru parcurgerea de tip BFS: ";
            cin >> nodales3;
            if (nodales3<1 || nodales3>nrN)
            {
                cout << endl;
                cout << "Cred ca instructiunea alesa e gresita        (>'-'<)" << endl;
                cout << "Luati-o de la capat!                           * *  ";
                cout << endl;
            }
            else
            {
                cout << "Parcurgerea de tip BFS arata fix asa: ";
                g1.BFS(nodales3);
                cout << endl;
            }

        }
        else if (caz1 == 6)
        {
            int nodales4;
            system("cls");
            cout << "Alegeti un nod pentru parcurgerea de tip DFS: ";
            cin >> nodales4;
            if (nodales4<1 || nodales4>nrN)
            {
                cout << endl;
                cout << "Cred ca instructiunea alesa e gresita        (>'-'<)" << endl;
                cout << "Luati-o de la capat!                           * *  ";
                cout << endl;
            }
            else
            {
                cout << "Parcurgerea de tip DFS arata fix asa: ";
                g1.DFS(nodales4);
                cout << endl;
            }

        }
        else
        {
            system("cls");
            cout << "Uite ce ai facut, ai apasat pe ce nu trebuie!" << endl;
            cout << "Ca pedeapsa ia-o de la capat!" << endl;
            return 0;
        }
    }
    else

        if (caz == 2)
        {
            fin >> nrN;
            fin >> nrM;
            for (int i = 1; i <= nrM; i++)
                for (int j = 1; j <= 2; j++)
                {
                    fin >> lA[i][j];
                }
            grafOrientat g1(nrN, lA);
            sets_menu();
            cin >> caz1;
            if (caz1 == 1)
            {
                system("cls");
                cout << "Numarul de noduri este: " << g1.getNrNoduri() << endl;
                cout << endl << "Din pacate functia 'getch' nu a dorit sa functioneze" << endl;
                cout << "la mine in program si mi-a fost frica sa nu stric programul modificandu-l asa      (@)_(@)" << endl;
                cout << "ca va multumesc pentru intelegere si va rog sa o luati de la capat!!!               *   *" << endl;
            }
            else if (caz1 == 2)
            {
                int nodales;
                system("cls");
                cout << "Alegeti un nod: ";
                cin >> nodales;
                if (nodales<1 || nodales>nrN)
                {
                    cout << endl;
                    cout << "Cred ca instructiunea alesa e gresita (>'-'<)" << endl;
                    cout << "Luati-o de la capat!                        * *  ";
                }
                else
                {
                    cout << "Lista de adiacenta este urmatoarea: ";
                    g1.afisareListaDupaNodDat(nodales);
                    cout << endl;
                }

            }
            else if (caz1 == 3)
            {
                int nodales1;
                system("cls");
                cout << "Pentru ce nod doriti sa vedeti gradul interior? ";
                cin >> nodales1;
                if (nodales1<1 || nodales1>nrN)
                {
                    cout << endl;
                    cout << "Cred ca instructiunea alesa e gresita        (>'-'<)" << endl;
                    cout << "Luati-o de la capat!                           * *  ";
                    cout << endl;
                }
                else
                {
                    cout << "Gradul interior al nodului ales este ";
                    g1.gradInterior(nodales1);
                    cout << endl;
                }
            }
            else if (caz1 == 4)
            {
                int nodales2;
                system("cls");
                cout << "Pentru ce nod doriti sa vedeti gradul exterior? ";
                cin >> nodales2;
                if (nodales2<1 || nodales2>nrN)
                {
                    cout << endl;
                    cout << "Cred ca instructiunea alesa e gresita        (>'-'<)" << endl;
                    cout << "Luati-o de la capat!                           * *  ";
                    cout << endl;
                }
                else
                {
                    cout << "Gradul exterior al nodului ales este ";
                    g1.gradExterior(nodales2);
                    cout << endl;
                }
            }
            else if (caz1 == 5)
            {
                int nodales3;
                system("cls");
                cout << "Alegeti un nod pentru parcurgerea de tip BFS: ";
                cin >> nodales3;
                if (nodales3<1 || nodales3>nrN)
                {
                    cout << endl;
                    cout << "Cred ca instructiunea alesa e gresita        (>'-'<)" << endl;
                    cout << "Luati-o de la capat!                           * *  ";
                    cout << endl;
                }
                else
                {
                    cout << "Parcurgerea de tip BFS arata fix asa: ";
                    g1.BFS(nodales3);
                    cout << endl;
                }

            }
            else if (caz1 == 6)
            {
                int nodales4;
                system("cls");
                cout << "Alegeti un nod pentru parcurgerea de tip DFS: ";
                cin >> nodales4;
                if (nodales4<1 || nodales4>nrN)
                {
                    cout << endl;
                    cout << "Cred ca instructiunea alesa e gresita        (>'-'<)" << endl;
                    cout << "Luati-o de la capat!                           * *  ";
                    cout << endl;
                }
                else
                {
                    cout << "Parcurgerea de tip DFS arata fix asa: ";
                    g1.DFS(nodales4);
                    cout << endl;
                }

            }
            else
            {
                system("cls");
                cout << "Uite ce ai facut, ai apasat pe ce nu trebuie!" << endl;
                cout << "Ca pedeapsa ia-o de la capat!" << endl;
                return 0;
            }
        }
        else
        {
            system("cls");
            cout << "Fie ai introdus cifra 3, fie ai apasat pe ce nu trebuie, mai baga o fisa!" << endl;
            return 0;
        }


    return 0;
}
