/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    float sal;
    cout<<"Digite o valor do salário"<<"\n";
    cin>>sal;
    
    if(sal<=2000){
        cout<< "Categoria D " <<" Valor do salário "<<sal<<"\n";
        
    }
    else if(sal<=4000){
        cout<<"Categoria C "<< "Valor do salário "<<sal<<"\n";
    }
    else if(sal<=5000){
        cout<<"Categoria B "<<"Valor do salario "<<sal<<"/n";
    }
    else{
        cout<<"Categoria A "<< "Valor do salário "<<sal<<"\n";
    }
    
    
    
    

    return 0;
}
