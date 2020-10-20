#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  protected:
    std :: string nome;
    double horasTrabalhadas;
    double salarioHora; 

  public:
    double pagamentoMes() {
      double horasMaisHorasExtra = horasTrabalhadas;
      double horasPadraodeTrabalho = 8;
      int cinquentaPorcento = 2;
      
      //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > horasPadraodeTrabalho) {
        double acrescimoHoraExtra= (horasTrabalhadas - horasPadraodeTrabalho)/cinquentaPorcento;
        horasMaisHorasExtra += acrescimoHoraExtra;
      }

	    return horasMaisHorasExtra * salarioHora;
    }

    Empregado(std:: string nome, double horasTrabalhadas, double salarioHora){ 
      Empregado :: nome = nome;
      Empregado :: horasTrabalhadas = horasTrabalhadas;
      Empregado :: salarioHora = salarioHora;
    }
};

#endif