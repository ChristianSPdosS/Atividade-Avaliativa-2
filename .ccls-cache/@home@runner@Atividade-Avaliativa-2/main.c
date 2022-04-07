/*
  Curso: Engenharia da Computação / Ciência da Computação Turma: ENGDM1A
Professor (a): Daniel da Silva Souza
Disciplina: Algoritmos e Programação de Computadores II
1. (10 pontos) Considere o código de base abaixo. 

a) (2 pontos) Defina uma estrutura data com os seguintes atributos:
 dia: inteiro
 mes: inteiro
 ano: inteiro
Utilize typedef e defina o tipo de dado t_data, a partir da estrutura acima. 

b) (2 pontos) Defina uma estrutura turma com os seguintes atributos:
 nome: string
 codigo: string
 numero_alunos: float
 data_inicio: t_data
 numero_sala: inteiro
Utilize typedef e defina o tipo de dado t_turma, a partir da estrutura acima. 

c) (2 pontos) Crie uma variável da estrutura turma e, em seguida, solicite ao usuário fornecer os dados da turma. 

d) (2 pontos) Utilizando um ponteiro, modifique o valor do número de sala, previamente declarado e preenchido
pelo usuário (itens a) e b)). 

e) (2 pontos) Considere que já possuímos uma variável denominada apc_ii do tipo estrutura de turma especificado
no item a). Escreva o algoritmo necessário para verificar a quantidade total de alunos e verificar os seguintes
casos:
i. Caso numero_alunos for maior que 40, a sala deve ser JA4/3,
ii. Caso numero_alunos for menor ou igual a 40, a sala deve ser JA1
iii. Caso numero_alunos for menor que 10, não será fechado turma, logo sala deve ser 0. Em seguida, imprima na tela o número da sala, contando que, se o número da sala for 0, imprima que não
*/

//a)

#include <stdio.h>

typedef struct {
int dia, mes, ano;
}t_data;

//b)

typedef struct {
char nome [20]; 
char codigo[20];
float numero_de_alunos;
t_data data_inicio;
int numero_da_sala;
}t_turma;

//c)

int main(){

  t_data data_inicio;
t_turma turma1;

  printf("Digite o nome da turma:\n");
  scanf("%[^\n]%*c" , turma1.nome);
  printf("Digite o código da turma:\n");
  scanf("%[^\n]%*c" , turma1.codigo);
  printf("Digite o número de alunos da turma:\n");
  scanf("%f" , &turma1.numero_de_alunos);
  printf("Digite a data de data de início:\n");
  scanf("%d %d %d" , &data_inicio.dia, &data_inicio.mes, &data_inicio.ano );
  printf("Digite o número da sala:\n");
  scanf("%d" , &turma1.numero_da_sala);

  //d)
  int *ptr= &turma1.numero_da_sala;

  printf("O número da sala declarado foi: %d , escolha um novo número da sala:\n" , *ptr);
  scanf("%d" , &*ptr);
  
  









  return 0;
}