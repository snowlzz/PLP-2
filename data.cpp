# include <iostream>
using namespace std;
class Data {
public :
short dia,mes,ano;
};
main(){
Data d;
d.dia = 30;
d.mes = 8;
d.ano = 2020;
cout<<"Data: "<<d.dia<<"/"<<d.mes<<"/"<<d.ano<<endl;
}
