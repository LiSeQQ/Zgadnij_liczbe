#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;

int liczba;
int strzal;
int ile_prob(0);

int main()
{
    cout << "Witaj pomyslalem sobie o liczbie 1-100" << endl;
    srand(time(NULL));
    liczba = rand()%100+1;

    while(strzal!=liczba)
    {
        ile_prob++;
        cout<<"Zgadnij jaka to liczba (to Twoja "<<ile_prob<<" proba):";
        cin>>strzal;

        if(strzal==liczba)
            cout<<"UDALO SIE WYGRYWASZ W "<<ile_prob<<" probie"<<endl;
        else if(strzal<liczba)
            cout<<"Za malo"<<endl;
        else if(strzal>liczba)
            cout<<"to za duzo"<<endl;
    }
    getchar();getchar();

    return 0;
}
