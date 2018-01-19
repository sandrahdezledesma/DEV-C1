//ESTRUCTURA - MENÚ ESCOLAR
#include<iostream>
 using namespace std;
 int main(){
     struct menu{
            string primero;
            string segundo;
            string tercero;
            int calorias;
            };
     int cont;
     int salir;
     menu dia[4];
     int sumaCalorias=0;
     for(cont=0;cont<4;cont++){
       cout<<"PRIMER PLATO: "<<cont<<endl;                        
       cin>>dia[cont].primero;
       cout<<"SEGUNDO PLATO: "<<cont<<endl; 
       cin>>dia[cont].segundo;
       cout<<"TERCER PLATO: "<<cont<<endl; 
       cin>>dia[cont].tercero; 
       cout<<"¿CUANTAS CALORIAS TIENE SU MENU? "<<cont<<endl; 
       cin>>dia[cont].calorias; 
     }
   cout<<"TU MENU DE LUNES A JUEVES ES: "<<endl;
   for(cont=0;cont<4;cont++){
      cout<<"De primer plato hay, "<<dia[cont].primero<<", de segundo, "<<dia[cont].segundo<<"y de postre "<<dia[cont].tercero<<endl;
      sumaCalorias=sumaCalorias+dia[cont].calorias;                           
   }
   cout<<endl<<"CALORIAS TOTALES = "<<sumaCalorias;
    cout<<endl<<"Toca cualquier tecla para acabar";
    cin>>salir;
    return 0; 
 }          
