//Magdalena Apostolovksa INKI840
//Transportno Pretprijatie
#include <iostream>

using namespace std;

int main()
{
    int brojNaKamioni;
    cout<<"----------------------------------"<<endl;
    cout<<"Transportno Pretprijatie!"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"So kolku kamioni raspolaga pretprijatieto?"<<endl;
    cin>>brojNaKamioni;
    cout<<"----------------------------------"<<endl;
    float kilometri[brojNaKamioni], gorivo[brojNaKamioni];
    for (int i = 0; i < brojNaKamioni; i++) {
        cout<<"Kolku kilometri pominal "<<i+1<<"-iot kamion?"<<endl;
        cin>>kilometri[i];
        cout<<"Kolku gorivo potrosil "<<i+1<<"-iot kamion?"<<endl;
        cin>>gorivo[i];
        cout<<"----------------------------------"<<endl;
    }

    //vkupnoPominatPat i vkupnoPotrosenoGorivo
    float zbirPominatPat = 0.00;
    float zbirPotrosenoGorivo = 0.00;
    for (int i = 0; i < brojNaKamioni; i++) {
        zbirPominatPat += kilometri[i];
        zbirPotrosenoGorivo += gorivo[i];
    }

    //prosecenPominatPat
    float prosecenPominatPat = 0.00;
    for (int i = 0; i < brojNaKamioni; i++) {
        prosecenPominatPat = zbirPominatPat / brojNaKamioni;
    }

    //prosecnoPotrosenoGorivoPoKilometar
        float prosecnoGorivoPoKilometar = zbirPominatPat /zbirPotrosenoGorivo;


    //kamionSoNajmnoguKilometri
    int kamionSoNajmnoguKilometri = 0;
    for (int i = 0; i < brojNaKamioni; i++) {
        if (kilometri[i] > kilometri[kamionSoNajmnoguKilometri]) {
            kamionSoNajmnoguKilometri = i;
        }
    }

    //najekonomicenKamion
    int najekonomicenKamion = 0;
    for (int i = 0; i < brojNaKamioni; i++) {
        if ( (kilometri[i] / gorivo[i]) > (kilometri[najekonomicenKamion] / gorivo[najekonomicenKamion]) ) {
            najekonomicenKamion = i;
        }
    }

    cout<<"Izvestaj za kamionite vo pretprijatieto"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Site kamioni vkupno pominale: "<<zbirPominatPat<<" kilometri."<<endl;
    cout<<"Site kamioni vkupno potrosile: "<<zbirPotrosenoGorivo<<" litri."<<endl;
    cout<<"Prosecen pominat pat na site kamioni e: "<<prosecenPominatPat<<" kilometri."<<endl;
    cout<<"Prosecno potroseno gorivo po kilometri e: "<<prosecnoGorivoPoKilometar<<" litri."<<endl;
    cout<<"Kamionot koj pominal najmnogu kilometri e: "<<kamionSoNajmnoguKilometri+1<<"-iot kamion."<<endl;
    cout<<"Najekonomicen kamion e: "<<najekonomicenKamion+1<<"-iot kamion."<<endl;
    cout<<"----------------------------------"<<endl;

    return 0;
}
