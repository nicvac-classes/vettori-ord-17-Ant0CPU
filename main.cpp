#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
using namespace std;

int main() {
    int n, i, j, t, r;
    string s;
    bool scambi;

    scambi=true;
    i=0;
    
    do {
        cout<<"Inserire il numero di automobili"<<endl;
        cin>>n;
    } while(n<=0);

    vector<float> p(n), d(n);

    for (i=0; i<n; i++) {
        
        p[i]= 1+rand() % n+1;
        if (p[i]%2==0) 
        {
        }
        else
        {
            p[i]=p[i]+1;
        }

        d[i]= 1+rand() % n+1;
        if (d[i]%2==0) {
            d[i]=d[i]+1;
        }
    }
    i=0;
    while (i<n-1 and scambi==true) {
        scambi=false;
        j=0;

        while (j<=(n-2)-i) {
            
            if (p[j]<p[j+1]) {
                
                t=pj];
                p[j]=p[j+1];
                p[j+1]=t;
                
                scambi=true;
            }

            j=j+1;
        }
        
        i=i+1;
    }

    i=0;
    while (i<n-1 and scambi==true) {
        scambi=false;
        j=0;

        while (j<=(n-2)-i) {
            
            if (d[j]<d[j+1]) {
                
                t=d[j];
                d[j]=d[j+1];
                d[j+1]=t;
                
                scambi=true;
            }

            j=j+1;
        }
        
        i=i+1;
    }
    cout<<"Pari:";
    for (i=0; i<n; i++) {
        cout<<p[i]<<"; ";
    }

    cout<<"Dispari:";
    for (i=0; i<n; i++) {
        cout<<d[i]<<"; ";
    }

    cout<<"Dispari in ordine decrescente:";
    for (i=n-1; i>n; i=i-1) {
        cout<<d[i]<<"; ";
    }
}
//LEGGERE LE ISTRUZIONI NEL FILE README.md
