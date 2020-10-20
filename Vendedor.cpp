#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:

	int meses = 12;	  
	double quotaMensalVendas;
	double quotaTotalAnual() {
	  return quotaMensalVendas * meses;
	}

	Vendedor(std::string nome, double horasTrabalhadas, double salarioHora, double quotaMensalVendas) : Empregado(nome, horasTrabalhadas, salarioHora){
		Vendedor :: quotaMensalVendas = quotaMensalVendas;
	}
	
	void print(){
		std::cout << "Nome: " << Vendedor ::nome << std::endl;
		std::cout << "Salario Mes: " << Vendedor ::pagamentoMes(horasTrabalhadas) << std::endl;  
		std::cout << "Quota vendas: " << Vendedor ::quotaTotalAnual() << std::endl;
		std::cout << std::endl;
	}
};

