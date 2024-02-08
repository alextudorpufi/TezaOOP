#include <iostream>
using namespace std;
class grafOrientat
{
private:
    int viz[101] = { 0 };
public:
    int matAdiacenta[101][101];
    int nrNoduri;
    grafOrientat(int _nrNoduri, int _listaArce[101][2]);
    grafOrientat(const grafOrientat& g); ///  poti folosi Graf1=Graf2
    ~grafOrientat(){}
    int getNrNoduri();
    void afisareListaDupaNodDat(int nod);
    void gradInterior(int nod);
    void gradExterior(int nod);
    void BFS(int nod);
    void DFS(int nod);
};
inline int grafOrientat::getNrNoduri()
{
    return nrNoduri;
}
/*void operator<<(ostream& os, const grafOrientat& Graf1)
{
    for (int i = 1; i <= Graf1.nrNoduri; i++, cout << endl)
        for (int j = 1; j <= Graf1.nrNoduri; j++)
            os << Graf1.matAdiacenta[i][j] << " ";;
}*/
