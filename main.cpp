#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {

    int a,b,p,minutos, minextra;
        double datos,datosextra;
        char plan;
        cout <<"Ingrese el plan del cliente (b=basico, a=avanzado, p=premium)"<<endl;
        cin >> plan;
        cout << "Ingrese los minutos totales consumidos"<<endl;
        cin >>minutos;
        cout <<"Ingrese los datos totales utilizados"<<endl;
        cin >>datos;

        b=1200;
        a=2000;
        p=3400;
    if (plan =='b')
        {
          cout <<"Plan : $ "<<b<<endl;
          if (minutos<=1000 && datos<=2.5)
          {
              cout <<"plan: $"<<b<<endl;
              cout <<"Minutos excedentes : $0"<<endl;
              cout <<"Datos excedentes : $0 "<<endl;
              cout << "Total a abondar : "<<b<<endl;

          }
          else if (minutos>1000 && datos<=2.5)
          {
             minextra = (minutos-1000)*3;
              datosextra=0;
              cout <<"plan: $"<<b<<endl;
             cout <<"Minutos excedentes : $ "<<minextra<<endl;
             cout << "Datos excedentes : $ "<<datosextra<<endl;
             cout << "Total a abonar: $ "<<b+minextra+datosextra<<endl;
          }

          else if (minutos<=1000 && datos>2.5)
          {
              minextra=0;
              datosextra=(datos-2.5)*50;
              cout <<"plan: $"<<b<<endl;
              cout <<"Minutos excedentes :$"<<minextra<<endl;
              cout << "Datos excedentes: $"<<datosextra<<endl;
              cout << "Total a abonar : $ "<<b+minextra+datosextra<<endl;

          }
          else
          {
            minextra=(minutos-1000)*3;
            datosextra=(datos-2.5)*50;
              cout <<"plan: $"<<b<<endl;
            cout << "Minutos excedentes : $ "<<minextra<<endl;
            cout <<"Datos excedentes : $ "<<datosextra<<endl;
            cout << "Total a abonar : $ "<<b+minextra+datosextra<<endl;
          }
        }
if (plan =='a')
{
    cout <<"Plan : $ "<<a<<endl;
          if (minutos<=2000 && datos <=4.5)
          {
              cout <<"plan: $"<<a<<endl;
              cout <<"Minutos excedentes : $0"<<endl;
              cout <<"Datos excedentes : $0 "<<endl;
              cout << "Total a abondar : "<<b<<endl;

          }
          else if (minutos>2000 && datos<=4.5)
          {
             minextra = (minutos-1000)*3;
              datosextra=0;
              cout <<"plan: $"<<a<<endl;
             cout <<"Minutos excedentes : $ "<<minextra<<endl;
             cout << "Datos excedentes : $ "<<datosextra<<endl;
             cout << "Total a abonar: $ "<<(a+minextra+datosextra)<<endl;
          }

          else if (minutos<=2000 && datos>4.5)
          {
              minextra=0;
              datosextra=(datos-4.5)*50;
              cout <<"plan: $"<<a<<endl;
              cout <<"Minutos excedentes :$"<<minextra<<endl;
              cout << "Datos excedentes: $"<<datosextra<<endl;
              cout << "Total a abonar : $ "<<a+minextra+datosextra<<endl;
          }
          else
          {
            minextra=(minutos-2000)*3;
            datosextra=(datos-4.5)*50;
              cout <<"plan: $"<<a<<endl;
            cout << "Minutos excedentes : $ "<<minextra<<endl;
            cout <<"Datos excedentes : $ "<<datosextra<<endl;
            cout << "Total a abonar : $ "<<a+minextra+datosextra<<endl;
          }
}
if (plan=='p')
            {
               cout <<"Plan : $ "<<p<<endl;
              if (minutos<=2500 && datos <=10)
              {
                  cout <<"plan: $"<<p<<endl;
                  cout <<"Minutos excedentes : $0"<<endl;
                  cout <<"Datos excedentes : $0 "<<endl;
                  cout << "Total a abondar : "<<b<<endl;

              }
              else if (minutos>2500 && datos<=10)
              {
                 minextra = (minutos-2500)*3;
                  datosextra=0;
                  cout <<"plan: $"<<p<<endl;
                 cout <<"Minutos excedentes : $ "<<minextra<<endl;
                 cout << "Datos excedentes : $ "<<datosextra<<endl;
                 cout << "Total a abonar: $ "<<p+minextra+datosextra<<endl;
              }

              else if (minutos<=2500 && datos>10)
              {
                  minextra=0;
                  datosextra=(datos-10)*50;
                  cout <<"plan: $"<<p<<endl;
                  cout <<"Minutos excedentes :$"<<minextra<<endl;
                  cout << "Datos excedentes: $"<<datosextra<<endl;
                  cout << "Total a abonar : $ "<<p+minextra+datosextra<<endl;
              }
              else
              {
                minextra=(minutos-2500)*3;
                datosextra=(datos-10)*50;
                  cout <<"plan: $"<<p<<endl;
                cout << "Minutos excedentes : $ "<<minextra<<endl;
                cout <<"Datos excedentes : $ "<<datosextra<<endl;
                cout << "Total a abonar : $ "<<p+minextra+datosextra<<endl;
              }

           return 0;
            }}
