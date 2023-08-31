#include <iostream>
using namespace std;
class Data {
private:
short dia, mes, ano;
public:
void atribuiData(short d, short m, short a){
dia=d;
mes=m;
ano=a;
}
void exibeData(){
cout<<"Data: " <<dia<<"/"<<mes<<"/"<<ano<<endl;
}
};
