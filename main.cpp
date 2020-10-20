#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {

  Engenheiro eng1 = Engenheiro("Joao Snow", 9.5, 35, 3);
  eng1.print();
  
  Engenheiro eng2 = Engenheiro("Daniela Targaryen", 8, 30, 1);
  eng2.print();

  Engenheiro eng3 = Engenheiro("Bruno Stark", 8, 30, 2);
  eng3.print();
  
  Vendedor vend1 = Vendedor("Tonho Lannister", 6, 20, 5000);
  vend1.print();
  
  Vendedor vend2 = Vendedor("Jose Mormont", 8, 25, 3000);
  vend2.print();

  Vendedor vend3 =  Vendedor("Sonia Stark", 8, 30, 4000);
  vend3.print();
  
  return 0;	
}