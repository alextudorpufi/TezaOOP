#include "grafOrientat.h"
grafOrientat::grafOrientat(int _nrNoduri, int _listaArce[101][2])
{
    int i;
    nrNoduri = _nrNoduri;
    for (i = 1; i <= nrNoduri; i++)
    {
        matAdiacenta[_listaArce[i][1]][_listaArce[i][2]] = 1;
    }
}

grafOrientat::grafOrientat(const grafOrientat& g)
{

}

void grafOrientat::afisareListaDupaNodDat(int nod)
{
    int j;
    for (j = 1; j <= nrNoduri; j++)
        if (matAdiacenta[nod][j] == 1)
            cout << j << " ";
}

void grafOrientat::gradInterior(int nod)
{
    int i, s = 0;
    for (i = 1; i <= nrNoduri; i++)
        if (matAdiacenta[i][nod] == 1)
            s++;
    cout << s;
}

void grafOrientat::gradExterior(int nod)
{
    int j, s = 0;
    for (j = 1; j <= nrNoduri; j++)
        if (matAdiacenta[nod][j] == 1)
            s++;
    cout << s;
}

void grafOrientat::BFS(int nod)
{
    int p, u, c[101], i;
    p = 1;
    u = 1;
    c[p] = nod;
    viz[nod] = 1;
    while (p <= u)
    {
        for (i = 1; i <= nrNoduri; i++)
            if (matAdiacenta[c[p]][i] == 1 && viz[i] == 0)
            {
                u++;
                c[u] = i;
                viz[i] = 1;
            }
        p++;
    }
    for (i = 1; i <= u; i++) cout << c[i] << " ";
}

void grafOrientat::DFS(int nod)
{
    int i;
    cout << nod << " ";
    viz[nod] = 1;
    for (i = 1; i <= nrNoduri; i++)
        if (matAdiacenta[nod][i] == 1 && viz[i] == 0)
            DFS(i);
}
