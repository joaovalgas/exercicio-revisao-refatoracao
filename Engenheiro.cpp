#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:
	  int projetos;

    Engenheiro(std::string nome, double horasTrabalhadas, double salarioHora, int projetos) : Empregado (nome, horasTrabalhadas, salarioHora) {
      Engenheiro :: projetos = projetos;
    }

  void print(){
    std::cout << "Nome: " << Engenheiro::nome << std::endl;
    std::cout << "Salario Mes: " << Engenheiro::pagamentoMes() << std::endl;
    std::cout << "Projetos: " << Engenheiro::projetos << std::endl;
    std::cout << std::endl;
  }
};

