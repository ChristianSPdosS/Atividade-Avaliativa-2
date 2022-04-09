#include <stdio.h>

// a) Definição da estrutura data

typedef struct {
int dia, mes, ano;
}t_data;


// b) Definição da estrutura turma

typedef struct {
char nome [20]; 
char codigo[20];
float numero_alunos;
t_data data_inicio;
char sala[20];
}t_turma;


int main() {

  // c) Declaração de turma e solicitação de inserção de dados em turma, pelo usuário

  t_data data1;
  t_turma turma1;

  printf("Digite o nome da turma:\n");
  scanf("%[^\n]%*c" , turma1.nome);
  printf("Digite o código da turma:\n");
  scanf("%[^\n]%*c" , turma1.codigo);
  printf("Digite o número de alunos da turma:\n");
  scanf("%f" , &turma1.numero_alunos);
  printf("Digite a data de início:\n");
  scanf("%d %d %d" , &data1.dia, &data1.mes, &data1.ano );
  printf("Digite a sala:\n");
  scanf("%s" , turma1.sala);

  // d) Modifique o valor número de sala utilizando ponteiro para t_turma.
  t_turma *ptr_turma;

  
  

 

  // e) Escreva o código para verificar qual será a sala de apc_ii ou se não haverá turma aberta.
  t_turma apc_ii = {
    .codigo = "T1",
    .nome = "APC II",
    .numero_alunos = 35,
    .data_inicio = {
        .dia = 15,
        .mes = 03,
        .ano = 2022
  
    },
  };

  if(apc_ii.numero_alunos > 40){
    apc_ii.sala == "JA4/3";
  }
  else if(apc_ii.numero_alunos <= 40){
    apc_ii.sala == "JA1";
  }
  else if(apc_ii.numero_alunos < 10){
    apc_ii.sala == "Não definido";
  }

  printf("Nome da sala: %s\n" , apc_ii.sala);

  return 0;
}

