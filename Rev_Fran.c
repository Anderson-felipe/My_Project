#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define AZUL "\x1b[34m"
#define VERDE "\x1b[32m"
#define VERMELHO "\x1b[31m"
#define AMARELO "\x1b[33m"
#define ROSA "\x1b[35m"
#define VERDE_ÁGUA "\x1b[36m"
#define CIANO "\x1b[36m"
#define RESET "\x1b[0m"

char gabarito_contextualização[3] = {'c', 'b' , 'a'}; 
char gabarito_etapas[3] = {'a' , 'd' , 'c'}; 
char gabarito_causas[3] = {'a' , 'c' , 'a'}; 
char gabarito_consequencias[3] = {'c' , 'a' , 'd'}; 
char gabarito_geral[12] = {'c' , 'b' , 'a' , 'a', 'd' , 'c' , 'a' , 'c' , 'a' , 'c' , 'a' , 'd'}; 

int main(void){
  
  char nome_estudante[100];
  int estado_aluno;  
 
  printf("\nPrimeiramente, vale te explicar que, toda vez que for necessário você digitar alguma coisa, como por exemplo nomes, números, letras, caracteres, frases etc, para que o código possa continuar, você precisa pressionar ENTER, ok?\n");
  printf("\nSe você nunca mexeu com um código de programação, fica tranquilo, não é um bicho de sete cabeças. MUITO TRANQUILO. Vai dar tudo certo :)\n");
  printf("\nBONS ESTUDOOOOOOOS\n");
  printf("\nDigite seu nome: ");
  fgets(nome_estudante, 100, stdin);
  printf("Olá, %s" , nome_estudante);
  printf("Está tudo bem com você? (Sim - 1 ou Não - 2): ");
  scanf("%i" , &estado_aluno);
 
  if(estado_aluno == 1){
	printf("\nQue boom. Saiba que você é capaz de tudo!\n");
    
  }else{
    
	printf("\nEu entendo. Se por acaso o seu mal estar seja por causa dos estudos, saiba que por meio do seu esforço você consegue chegar aonde almeja. E fique ciente de que, o seu sucesso são resultados de esforços repetidos dia após dia. Mas, se for causas familiares ou com amigos, fique sabendo que eles sabem que você é muito gente boa e merece tudo de bom nesse mundo.\n");
    
  }

  printf("\nVale te lembrar que não teremos a opção de sair do código. Por isso, quando quiser parar, é somente sair do código.\n");
  printf("\nBom, a partir de agora daremos início à explicação sobre Revolução Francesa.");
  printf("\nEscolha o que você deseja que seja exibido, com base no MENU que será apresentado a seguir. \n");

  assunto();

  }

  assunto(void){

	int valor, decisao_grupo_social, decisao_etapas, decisao_consequencia;

  do{

  printf(VERMELHO);
  printf("\n===========================MENU==========================\n");
  printf(RESET);

  printf(VERDE);
  printf("\nDigite 0 para as SAIR do código.\n");
  printf(RESET);
 
  printf(VERDE);
  printf("Digite 1 para a CONTEXTUALIZAÇÃO da Revolução Francesa.\n");
  printf(RESET);
 
  printf(VERDE);
  printf("Digite 2 para as ETAPAS da Revolução Francesa.\n");
  printf(RESET);
 
  printf(VERDE);
  printf("Digite 3 para as CAUSAS da Revolução Francesa.\n");
  printf(RESET);
 
  printf(VERDE);
  printf("Digite 4 para as CONSEQUÊNCIAS da Revolução Francesa.\n");
  printf(RESET);
 
  printf(VERDE);
  printf("Digite 5 para o QUESTIONÁRIO da Revolução Francesa.\n");
  printf(RESET);
    
  printf("\nA partir do MENU proposto acima, escolha o que você deseja primeiramente: ");
  scanf("%i" , &valor);

	switch(valor){
    
	case 1:
    
  printf(VERMELHO);
	printf("\n===========CONTEXTUALIZAÇÃO===========\n");
	printf(RESET);
    
	printf("\n\n\nRevolução Francesa é um nome dado a um ciclo revolucionário social e político, ocorrido na França entre 1789 e 1799. Resultou no fim do Antigo Regime, e posteriormente deu origem à República Francesa. \n");
    
	printf("\nA Revolução Francesa foi resultado da crise que a França vivia no final do século XVIII. Com a ideia de combater os privilégios da aristocracia francesa, a insatisfação popular aliou-se com os interesses da burguesia em implantar no país as ideias do Iluminismo.\n");
    
	printf("\nEssa revolução foi um marco na história, pois inaugurou um processo que levou à universalização dos direitos sociais e das liberdades individuais a partir da Declaração dos Direitos do Homem e do Cidadão. Essa mesma revolução foi possível por causa das ideias do Iluminismo.\n");
    
	printf("\nOutro ponto a ressaltar foi que, essa revolução abriu caminhos para a consolidação de um sistema republicano traçado pela representatividade popular, sendo chamada de democracia representativa.\n");
    
	printf("\nNo final do século XVIII, a França era uma monarquia absolutista em que o rei era Luíz XVI.  Devido o poder de Luíz ser todo o regime absolutista, a sociedade era dividida em grupos sociais bem definidos, sendo eles: \n");
    
	printf(CIANO);
	printf("\n-> Primeiro Estado: clero;\n");
	printf(RESET);
    
	printf(AMARELO);
	printf("\n-> Segundo Estado: nobreza;\n");
	printf(RESET);
    
	printf(ROSA);
	printf("\n-> Terceiro Estado: restante da população.\n");
	printf(RESET);
    
	printf("\nDeseja que seja exibido uma breve aprofundação em cada grupo social acima? (Sim -> 1 ou Não -> 2) ");
	scanf("%i" , &decisao_grupo_social);
    
	if(decisao_grupo_social == 1){
 	 
  printf(CIANO);
	printf("\n-------PRIMEIRO ESTADO: CLERO-------\n");
  printf("\nPrimeiro Estado era o clero francês e estava dividido em alto e baixo. O alto clero era composto por elementos vindos das ricas famílias da nobreza, possuindo toda a sorte de privilégios, inclusive o de não pagar impostos. O baixo clero era pobre, estando ligado ao povo em geral e não à nobreza, como o primeiro.\n");
  printf(RESET);
 	 
  printf(AMARELO);
  printf("\n-------SEGUNDO ESTADO: NOBREZA-------\n");
  printf("\nO segundo Estado, era formado pelo rei e sua família, correspondendo a 2,5 por cento da população. Além deles, havia uma pequena parcela de burgueses que compravam os títulos de nobreza para fazer parte da classe, que não pagava impostos e ainda ocupava cargos públicos.\n");
  printf(RESET);
 	 
  printf(ROSA);
  printf("\n-------TERCEIRO ESTADO: RESTANTE DA POPULAÇÃO-------\n");
  printf("\nO terceiro estado era composto pelos burgueses, trabalhadores urbanos e camponeses, estes últimos representando 80 por cento da população.\n");
  printf(RESET);
 	 
	}
 	 
	break;
    
	case 2:
    
  system("clear");
    
  printf(VERMELHO);
	printf("\n===========ETAPAS===========\n");
	printf(RESET);
    
	printf("\nCom a queda da Bastilha, o movimento revolucionário francês durou por mais 10 anos, sendo finalizado somente com o Golpe de 18 de Brumário, organizado por Napoleão Bonaparte. Essa processo revolucionário é organizado em três etapas, sendo elas: \n");
    
	printf(ROSA);
	printf("\n-> Assembleia Nacional Constituinte e Assembleia Legislativa (1789 - 1792); \n");
	printf(RESET);
    
	printf(AZUL);
	printf("\n-> Convenção (1792 - 1795); \n");
	printf(RESET);
    
	printf(VERMELHO);
	printf("\n-> Diretório (1795 - 1799). \n");
	printf(RESET);
    
	printf("\nDeseja que seja exibido uma breve aprofundação em cada grupo social acima? (Sim -> 1 ou Não -> 2) ");
	scanf("%i" , &decisao_etapas);
    
	if(decisao_etapas == 1){
 	 
  printf(ROSA);
  printf("\n-------Assembleia Nacional Constituinte e Assembleia Legislativa (1789 - 1792)-------\n");
  printf("\nDe forma resumida a Assembleia Nacional Legislativa foi o Parlamento francês instituído pela Constituição de 1791, durante o processo conhecido como Revolução Francesa, sucedendo assim à Assembleia Nacional Constituinte e funcionou de 1º de Outubro de 1791 até 21 de Setembro de 1792.\n");
  printf(RESET);
 	 
  printf(AZUL);
  printf("\n-------Convenção (1792 - 1795)-------\n");
  printf("\nA fase da Convenção da Revolução Francesa foi marcada por a tomada de poder a ser realizada pelas camadas populares franceses. Nesse período, a tomada das armas para a participação na Batalha de Valmy e a insatisfação dada pelos resultados da monarquia constitucional motivou a convocação de uma Convenção Nacional.\n");
  printf(RESET);
 	 
  printf(VERMELHO);
  printf("\n-------Diretório (1795 - 1799)-------\n");
  printf("\nO Diretório era basicamente um órgão que era constituído por cinco membros, na qual a função era administrar o país, apoiado por duas assembléias: a Assembléia dos Anciãos (formada por políticos mais velhos) e a Assembleia dos Quinhentos. Ele defendia a importância da propriedade para a manutenção da ordem social, definindo que o voto seria universal a todos os homens adultos alfabetizados. Vale ressaltar também que, o mesmo passou a dar lugar ao consulado, instituição formada por três representantes entre os quais estavam Roger Ducos, o abade de Seyès e o próprio Napoleão Bonaparte.\n");
  printf(RESET);
 	 
	}
 	 
	break;
    
	case 3:
    
  system("clear");
    
	printf(VERMELHO);
	printf("\n===========CAUSAS===========\n");
	printf(RESET);
    
	printf(VERDE_ÁGUA);
	printf("\nSerá mostrado a seguir, algumas causas que deram motivos para a Revolução Francesa: \n");
	printf(RESET);

	printf(VERDE);
	printf("\n-> A desigualdade entre diferentes grupos sociais;\n");
	printf(RESET);

	printf(AZUL);
	printf("\n-> O pensamento iluminista;\n");
	printf(RESET);

	printf(VERMELHO);
	printf("\n-> Uma grande crise econômica (gerando muita fome e mortes);\n");
	printf(RESET);

	printf(ROSA);
	printf("\n-> A influência da Revolução Americana na economia e no imaginário da França.\n");
	printf(RESET);
 	 
	break;
    
	case 4:
    
  system("clear");
    
  printf(VERMELHO);
	printf("\n===========CONSEQUÊNCIAS===========\n");
	printf(RESET);
    
	printf("\nEsses 10 anos da Revolução Francesa, deram origem a diversas consequências para a França e para o mundo. Algumas dessas, sendo: \n");

	printf(VERDE);
	printf("\n-> Fim dos privilégios de classe na França;\n");
	printf(RESET);

	printf(VERMELHO);
	printf("\n-> Fim de qualquer resquício do feudalismo no país e início da consolidação do capitalismo;\n");
	printf(RESET);

	printf(AMARELO);
	printf("\n-> Início do processo de queda do absolutismo na Europa e na França;\n");
	printf(RESET);

	printf(ROSA);
	printf("\n-> Inspiração para movimentos de independência no continente americano\n");
	printf(RESET);

	printf(VERDE_ÁGUA);
	printf("\n-> Popularização da república como forma de governo;\n");
	printf(RESET);

	printf(CIANO);
	printf("\n-> Separação entre os poderes;\n");
	printf(RESET);

	printf(AZUL);
	printf("\n-> Imposição das liberdades individuais, que tornavam os homens “iguais perante a lei”.\n");
	printf(RESET);

	printf(VERDE);
	printf("\n-> Originou uma Constituição.\n");
	printf(RESET);

	printf("\nDeseja, que seja mostrado a seguir alguns aprofudamentos de algumas consequências? (Sim -> 1 ou Não -> 2)\n");
	scanf("%i" , &decisao_consequencia);

	if(decisao_consequencia == 1){

  printf(VERDE);
  printf("\n-------Fim dos privilégios de classe na França-------\n");
  printf("\nNo dia 4 de agosto de 1789, os parlamentares da Assembleia Constituinte aboliram os privilégios oriundos do Antigo Regime da França. Na qual, decretava que todos os seres humanos eram iguais perante a lei.\n");
  	printf(RESET);

	printf(VERMELHO);
	printf("\n-------Início do processo de queda do absolutismo na Europa e na França-------\n");
	printf("\nOs franceses celebram a queda da Bastilha (ocorrida em 14 de julho de 1789), levou ao fim do regime absolutista, sendo considerado também como um marco na revolução francesa. Entre os séculos 15 e 18, o absolutismo foi o sistema político e social que vigorou na maior parte da Europa.\n");
	printf(RESET);

	printf(VERDE);
	printf("\n-------Originou uma Constituição-------\n");
	printf("\nEm 1791, a constituição francesa foi a primeira maior da França, resultando por meio da revolução de 1789, incorporando a Declaração dos Direitos do Homem e do Cidadão. Uma vez que, a nova constituição começou a vigorar na França. De acordo com a mesma, o governo passaria a ser comandado por uma monarquia constitucional. O poder passou a ser exercido pelos três poderes: legislativo, executivo e judiciário.\n");
	printf(RESET);
 	 
	}
 	 
	break;
    
	case 5: 
    
  system("clear");
    
	printf(CIANO);
  printf("\n===========QUESTIONÁRIO===========\n");
  printf(RESET);

  questionario();
  
	break; 
    
	default:
    
	printf ("\nVOCÊ SAIU DO CÓDIGO\n");
    
  }

  }while (valor != 0);
    
}

  int questionario(){

    int resposta_questionario;
    int acerto;
    int erro;
    char letra_contextualizacao;
    char letra_etapas;
    char letra_causas;
    char letra_consequencias;
    char letra_geral;

    printf(VERMELHO);
    printf("\n===========================MENU - QUESTIONÁRIO===========================\n");
    printf(RESET);
    
    printf(AMARELO);
    printf("\nDigite 1 para o exercício sobre a CONTEXTUALIZAÇÃO\n");
    printf("\nDigite 2 para o exercício sobre a ETAPAS\n");
    printf("\nDigite 3 para o exercício sobre a CAUSAS\n");
    printf("\nDigite 4 para o exercício sobre a CONSEQUÊNCIAS\n");
    printf("\nDigite 5 para o exercício sobre a GERAL\n");
    printf(RESET);

    printf("\nDigite um número que você deseja a atividade correspondente: ");
    scanf("%i" , &resposta_questionario);
    
    switch (resposta_questionario){
      
    case 1:

    system("clear");
      
    printf(CIANO);
    printf("\n===========================QUESTIONÁRIO-CONTEXTUALIZAÇÃO===========================\n");
    printf(RESET);
      
    printf("\n1) A Revolução Francesa foi um ciclo revolucionário, na qual tinha como ideia principal combater os privilégios da aristocracia francesa. Por que essa revolução foi um marco na história?\n");
    
    printf("\n(a) Pois resultou no fim do Antigo Regime e foi resultado da crise que a França vivia no final do século XVIII.");
    printf("\n(b) Pois sua ideia era combater os privilégios, na qual a aristocracia francesa propunha.");
    
    printf("\n(c) Pois inaugurou um processo que levou à universalização dos direitos sociais e das liberdades individuais a partir da Declaração dos Direitos do Homem e do Cidadão.");
    
    printf("\n(d) Pois a mesma, abriu caminhos para a consolidação de um sistema republicano traçado pela representatividade popular, sendo chamada de democracia representativa.\n\n\n");

   printf("\nAo digitar a resposta, pressione ENTER para continuar.\n");
   printf("Digite a resposta da questão com letra minúscula: ");
    scanf("%s" , &letra_contextualizacao);

  if(letra_contextualizacao == gabarito_contextualização[0]){

      printf(CIANO);
      printf("\nVOCÊ ACERTOOOU. PARABÉNS :)\n");
      printf(RESET);

  }else{

      printf(VERMELHO);
      printf("\nVOCÊ ERROU. ESTUDE MAIS UM POUCO :/\n");
      printf("\nA resposta é a letra C\n");
      printf(RESET);

  }

    printf("\n2) Devido o poder de Luíz ser todo o regime absolutista, a sociedade era dividida em grupos sociais bem definidos, sendo eles (sem ordem definida): \n");

    printf("\n(a) Clero, Diretório e Nobreza.");

    printf("\n(b) Clero, Nobreza e Restante da população.");

    printf("\n(c) Clero, Assembléias do Anciãos e Convenção.");

    printf("\n(d) Clero, Assembléia dos Quinhentos e Diretório.\n\n\n");

    printf("\nAo digitar a resposta, pressione ENTER para continuar.\n");
    printf("Digite a resposta da questão com letra minúscula: ");
    scanf("%s" , &letra_contextualizacao);

  if(letra_contextualizacao == gabarito_contextualização[1]){

      printf(CIANO);
      printf("\nVOCÊ ACERTOOOU. PARABÉNS :)\n");
      printf(RESET);

  }else{

      printf(VERMELHO);
      printf("\nVOCÊ ERROU. ESTUDE MAIS UM POUCO :/\n");
      printf("\nA resposta é a letra B\n");
      printf(RESET);

  }

    printf("\n3) Assinale a alternativa que possui todas as afirmativas corretas.\n");

    printf("\n(a) O primeiro estado (sendo ele o clero) estava dividido em alto e baixo. Já o segundo estado (sendo ele a nobreza) era formado pelo rei e sua família. Enquanto o terceiro estado (sendo ele o restante da população) é composto pelos burgueses, trabalhadores urbanos e camponeses.");

    printf("\n(b) O primeiro estado (sendo ele a nobreza) era formado pelo rei e sua família. Já o segundo estado (sendo ele o clero) estava dividido em alto e baixo. Enquanto o terceiro estado (sendo ele o restante da população) é composto pelos burgueses, trabalhadores urbanos e camponeses.");
    
    printf("\n(c) O primeiro estado (sendo o restante da população) é composto pelos burgueses, trabalhadores urbanos e camponeses. Já o segundo estado (sendo ele o clero) estava dividido em alto e baixo. Enquanto o terceiro estado (sendo ele a nobreza) era formado pelo rei e sua família.");
    
    printf("\n(d) O primeiro estado (sendo ele o clero) estava dividido em alto, médio e baixo. Já o segundo estado (sendo ele a nobreza) era formado pelo rei e sua família. Enquanto o terceiro estado (sendo ele o restante da população) é composto pelos burgueses, trabalhadores urbanos e camponeses.\n\n\n");

   printf("\nAo digitar a resposta, pressione ENTER para continuar.\n");
   printf("Digite a resposta da questão com letra minúscula: ");
    scanf("%s" , &letra_contextualizacao);

  if(letra_contextualizacao == gabarito_contextualização[2]){

      printf(CIANO);
      printf("\nVOCÊ ACERTOOOU. PARABÉNS :)\n");
      printf(RESET);

  }else{

      printf(VERMELHO);
      printf("\nVOCÊ ERROU. ESTUDE MAIS UM POUCO :/\n");
      printf("\nA resposta é a letra A\n");
      printf(RESET);

  }
    
    break;
    
    case 2:

    printf(CIANO);
    printf("\n===========================QUESTIONÁRIO-ETAPAS===========================\n");
    printf(RESET);
      
    printf("\n1) O processo revolucionário Golpe de 18 de Brumário, é organizado em três etapas. Sendo elas: \n");

    printf("\n(a) Assembléia Nacional Constituinte e Assembléia Legislativa, Convenção e Diretório. ");
      
    printf("\n(b) Assembléia Nacional Constituinte e Assembléia Legislativa, Clero e Diretório");
      
    printf("\n(c) Assembléia Nacional Constituinte e Assembléia Legislativa, Nobreza e Diretório.");
      
    printf("\n(d) Assembléia Nacional Constituinte e Assembléia Legislativa, Constituição e Diretório.\n\n\n");

    printf("\nAo digitar a resposta, pressione ENTER para continuar.\n");
    printf("Digite a resposta da questão com letra minúscula: ");
    scanf("%s" , &letra_etapas);

  if(letra_etapas == gabarito_etapas[0]){

      printf(CIANO);
      printf("\nVOCÊ ACERTOOOU. PARABÉNS :)\n");
      printf(RESET);

  }else{

      printf(VERMELHO);
      printf("\nVOCÊ ERROU. ESTUDE MAIS UM POUCO :/\n");
      printf("\nA resposta é a letra A\n");
      printf(RESET);

  }

    printf("\n2) Assinale a alternativa correta.\n");
      
    printf("\n(a) Com a queda da Bastilha, o movimento revolucionário francês durou por mais 10 anos, sendo finalizado somente com o Golpe de 18 de Brumário, organizado por Boris Fausto.");
      
    printf("\n(b) Com a queda da Bastilha, o movimento revolucionário francês durou por exatamente 10 anos, sendo finalizado somente com o Golpe de 18 de Brumário, organizado por Napoleão Bonaparte.");
      
    printf("\n(c) Com a queda da Bastilha, o movimento revolucionário francês durou por mais 10 anos, sendo finalizado somente com o Golpe de 18 de Brumário, organizado por Heródoto.");
      
    printf("\n(d) Com a queda da Bastilha, o movimento revolucionário francês durou por mais 10 anos, sendo finalizado somente com o Golpe de 18 de Brumário, organizado por Napoleão Bonaparte.\n\n\n");

    printf("\nAo digitar a resposta, pressione ENTER.\n");
    printf("Digite a resposta da questão com letra minúscula: ");
    scanf("%s" , &letra_etapas);

  if(letra_etapas == gabarito_etapas[1]){

      printf(CIANO);
      printf("\nVOCÊ ACERTOOOU. PARABÉNS :)\n");
      printf(RESET);

  }else{

      printf(VERMELHO);
      printf("\nVOCÊ ERROU. ESTUDE MAIS UM POUCO :/\n");
      printf("\nA resposta é a letra D\n");
      printf(RESET);

  }

    printf("\n3) Assinale a alternativa correta.\n");
      
    printf("\n(a) A Assembleia Nacional Legislativa foi o Parlamento francês instituído pela Constituição de 1790.");
      
    printf("\n(b) A fase da Convenção da Revolução Francesa foi marcada pelo fim do absolutismo.");
      
    printf("\n(c) O Diretório era basicamente um órgão que era constituído por cinco membros, na qual a função era administrar o país, apoiado por duas assembléias: a Assembléia dos Anciãos (formada por políticos mais velhos) e a Assembleia dos Quinhentos.");
      
    printf("\n(d) O Diretório criticava a propriedade para a manutenção da ordem social, definindo que o voto seria universal a todos os homens adultos alfabetizados.\n\n\n");

    printf("\nAo digitar a resposta, pressione ENTER.\n");
    printf("Digite a resposta da questão com letra minúscula: ");
    scanf("%s" , &letra_etapas);

  if(letra_etapas == gabarito_etapas[2]){

      printf(CIANO);
      printf("\nVOCÊ ACERTOOOU. PARABÉNS :)\n");
      printf(RESET);

  }else{

      printf(VERMELHO);
      printf("\nVOCÊ ERROU. ESTUDE MAIS UM POUCO :/\n");
      printf("\nA resposta é a letra C\n");
      printf(RESET);

  }

    break;
    
    case 3: 

    printf(CIANO);
    printf("\n===========================QUESTIONÁRIO-CAUSAS===========================\n");
    printf(RESET);

    printf("\n1) Assinale a questão que possui todas as informações corretas.\n");
      
    printf("\n(a) Uma das causas da Revolução Francesa foi a desigualdade entre diferentes grupos sociais.");
      
    printf("\n(b) Uma das causas da Revolução Francesa foi o fim dos privilégios de classe na França.");
      
    printf("\n(c) Uma das causas da Revolução Francesa não foi o pensamento iluminista.");
      
    printf("\n(d) Uma das causas da Revolução Francesa foi separação entre os poderes.\n\n\n");

    printf("\nAo digitar a resposta, pressione ENTER para continuar.\n");
    printf("Digite a resposta da questão com letra minúscula: ");
    scanf("%s" , &letra_causas);

  if(letra_causas == gabarito_causas[0]){

      printf(CIANO);
      printf("\nVOCÊ ACERTOOOU. PARABÉNS :)\n");
      printf(RESET);

  }else{

      printf(VERMELHO);
      printf("\nVOCÊ ERROU. ESTUDE MAIS UM POUCO :/\n");
      printf("\nA resposta é a letra A\n");
      printf(RESET);

  }

    printf("\n2) A Revolução Francesa tem como uma das suas causas um pensamento, sendo esse: \n");
      
    printf("\n(a) Sociológico.");
      
    printf("\n(b) Filosófico.");
      
    printf("\n(c) Iluminista.");
      
    printf("\n(d) Comunista.\n\n\n");

    printf("\nAo digitar a resposta, pressione ENTER para continuar.\n");
    printf("Digite a resposta da questão com letra minúscula: ");
    scanf("%s" , &letra_causas);

  if(letra_etapas == gabarito_etapas[1]){

      printf(CIANO);
      printf("\nVOCÊ ACERTOOOU. PARABÉNS :)\n");
      printf(RESET);

  }else{

      printf(VERMELHO);
      printf("\nVOCÊ ERROU. ESTUDE MAIS UM POUCO :/\n");
      printf("\nA resposta é a letra C\n");
      printf(RESET);

  }

    printf("\n3) Marque a alternativa que possui todas as causas apresentadas na explicação. \n");
      
    printf("\n(a) A desigualdade entre diferentes grupos sociais; O pensamento iluminista e uma grande crise económica e a influência da Revolução Americana na economia e no imaginário da França. ");
      
    printf("\n(b) Uma grande crise económica e a influência da Revolução Americana na economia e no imaginário da França; Progresso técnico e científico e criação de máquinas para as indústrias.");
      
    printf("\n(c) Fome, pobreza e insatisfação social; Uma grande crise económica e a influência da Revolução Americana na economia e no imaginário da França e Oposição a Monarquia Absolutista.");
      
    printf("\n(d) Novas ideias revolucionárias de governo (liberais e socialistas); O pensamento iluminista e a desigualdade entre diferentes grupos sociais.\n\n\n");

    printf("\nAo digitar a resposta, pressione ENTER para continuar.\n");
    printf("Digite a resposta da questão com letra minúscula: ");
    scanf("%s" , &letra_causas);

  if(letra_etapas == gabarito_etapas[2]){

      printf(CIANO);
      printf("\nVOCÊ ACERTOOOU. PARABÉNS :)\n");
      printf(RESET);

  }else{

      printf(VERMELHO);
      printf("\nVOCÊ ERROU. ESTUDE MAIS UM POUCO :/\n");
      printf("\nA resposta é a letra A\n");
      printf(RESET);

  }
      
    break;
    
    case 4:

    printf(CIANO);
    printf("\n===========================QUESTIONÁRIO-CONSEQUÊNCIAS===========================\n");
    printf(RESET);

    printf("\n1) Assinale a alternativa que possui três consequências da Revolução Francesa.\n");
      
    printf("\n(a) Fim dos privilégios de classe na França; separação entre os poderes e queda da Monarquia.");
      
    printf("\n(b) Novas relações de trabalho; consolidação do Capitalismo e expansão de Imperialismo.");
      
    printf("\n(c) Fim dos privilégios de classe na França; separação entre os poderes e imposição das liberdades individuais, que tornavam os homens “iguais” perante a lei. ");
      
    printf("\n(d) Separação entre os poderes; originou uma constituição e o pensamento Iluminista.\n\n\n");

    printf("\nAo digitar a resposta, pressione ENTER para continuar.\n");
    printf("Digite a resposta da questão com letra minúscula: ");
    scanf("%s" , &letra_consequencias);

  if(letra_consequencias == gabarito_consequencias[0]){

      printf(CIANO);
      printf("\nVOCÊ ACERTOOOU. PARABÉNS :)\n");
      printf(RESET);

  }else{

      printf(VERMELHO);
      printf("\nVOCÊ ERROU. ESTUDE MAIS UM POUCO :/\n");
      printf("\nA resposta é a letra \n");
      printf(RESET);

  }

    printf("\n2)  Segundo uma das consequências da Revolução Francesa, a constituição originária do mesmo ciclo revolucionário: \n");
      
    printf("\n(a) Foi a primeira maior da França.");
      
    printf("\n(b) Foi a segunda maior da França.");
      
    printf("\n(c) Foi a terceira maior da França.");
      
    printf("\n(d) Foi a quarta maior da França.\n\n\n");

    printf("\nAo digitar a resposta, pressione ENTER para continuar.\n");
    printf("Digite a resposta da questão com letra minúscula: ");
    scanf("%s" , &letra_consequencias);

  if(letra_consequencias == gabarito_consequencias[1]){

      printf(CIANO);
      printf("\nVOCÊ ACERTOOOU. PARABÉNS :)\n");
      printf(RESET);

  }else{

      printf(VERMELHO);
      printf("\nVOCÊ ERROU. ESTUDE MAIS UM POUCO :/\n");
      printf("\nA resposta é a letra A\n");
      printf(RESET);

  }
      
    printf("\n3) Segundo uma das consequências da Revolução Francesa, o fim dos privilégios de classe na França, decretava o que:\n");
      
    printf("\n(a) O fim do Antigo Regime.");
      
    printf("\n(b) O absolutismo como regime social e político.");
      
    printf("\n(c) A Declaração dos Direitos do Homem e do Cidadão.");
      
    printf("\n(d) Que todos os seres eram iguais perante a lei.\n\n\n");

    printf("\nAo digitar a resposta, pressione ENTER para continuar.\n");
    printf("Digite a resposta da questão com letra minúscula: ");
    scanf("%s" , &letra_consequencias);

  if(letra_consequencias == gabarito_consequencias[2]){

      printf(CIANO);
      printf("\nVOCÊ ACERTOOOU. PARABÉNS :)\n");
      printf(RESET);

  }else{

      printf(VERMELHO);
      printf("\nVOCÊ ERROU. ESTUDE MAIS UM POUCO :/\n");
      printf("\nA resposta é a letra D\n");
      printf(RESET);
    
  }
      
    break;
    
    case 5: 

    printf(CIANO);
    printf("\n===========================QUESTIONÁRIO-GERAL===========================\n");
    printf(RESET);

    printf("\n1) A Revolução Francesa foi um ciclo revolucionário, na qual tinha como ideia principal combater os privilégios da aristocracia francesa. Por que essa revolução foi um marco na história?\n");
    
    printf("\n(a) Pois resultou no fim do Antigo Regime e foi resultado da crise que a França vivia no final do século XVIII.");
    printf("\n(b) Pois sua ideia era combater os privilégios, na qual a aristocracia francesa propunha.");
    
    printf("\n(c) Pois inaugurou um processo que levou à universalização dos direitos sociais e das liberdades individuais a partir da Declaração dos Direitos do Homem e do Cidadão.");
    
    printf("\n(d) Pois a mesma, abriu caminhos para a consolidação de um sistema republicano traçado pela representatividade popular, sendo chamada de democracia representativa.\n\n\n");

    printf("\nAo digitar a resposta, pressione ENTER para continuar.\n");
    printf("Digite a resposta da questão com letra minúscula: ");
    scanf("%s" , &letra_geral);

  if(letra_geral == gabarito_geral[0]){

      printf(CIANO);
      printf("\nVOCÊ ACERTOOOU. PARABÉNS :)\n");
      printf(RESET);

  }else{

      printf(VERMELHO);
      printf("\nVOCÊ ERROU. ESTUDE MAIS UM POUCO :/\n");
      printf("\nA resposta é a letra C\n");
      printf(RESET);

  }

    printf("\n2) Devido o poder de Luíz ser todo o regime absolutista, a sociedade era dividida em grupos sociais bem definidos, sendo eles (sem ordem definida): \n");

    printf("\n(a) Clero, Diretório e Nobreza.");

    printf("\n(b) Clero, Nobreza e Restante da população.");

    printf("\n(c) Clero, Assembléias do Anciãos e Convenção.");

    printf("\n(d) Clero, Assembléia dos Quinhentos e Diretório.\n\n\n");

    printf("\nAo digitar a resposta, pressione ENTER para continuar.\n");
    printf("Digite a resposta da questão com letra minúscula: ");
    scanf("%s" , &letra_geral);

  if(letra_geral == gabarito_geral[1]){

      printf(CIANO);
      printf("\nVOCÊ ACERTOOOU. PARABÉNS :)\n");
      printf(RESET);

  }else{

      printf(VERMELHO);
      printf("\nVOCÊ ERROU. ESTUDE MAIS UM POUCO :/\n");
      printf("\nA resposta é a letra B\n");
      printf(RESET);
    
  }

    printf("\n3) Assinale a alternativa que possui todas as afirmativas corretas.\n");

    printf("\n(a) O primeiro estado (sendo ele o clero) estava dividido em alto e baixo. Já o segundo estado (sendo ele a nobreza) era formado pelo rei e sua família. Enquanto o terceiro estado (sendo ele o restante da população) é composto pelos burgueses, trabalhadores urbanos e camponeses.");

    printf("\n(b) O primeiro estado (sendo ele a nobreza) era formado pelo rei e sua família. Já o segundo estado (sendo ele o clero) estava dividido em alto e baixo. Enquanto o terceiro estado (sendo ele o restante da população) é composto pelos burgueses, trabalhadores urbanos e camponeses.");
    
    printf("\n(c) O primeiro estado (sendo o restante da população) é composto pelos burgueses, trabalhadores urbanos e camponeses. Já o segundo estado (sendo ele o clero) estava dividido em alto e baixo. Enquanto o terceiro estado (sendo ele a nobreza) era formado pelo rei e sua família.");
    
    printf("\n(d) O primeiro estado (sendo ele o clero) estava dividido em alto, médio e baixo. Já o segundo estado (sendo ele a nobreza) era formado pelo rei e sua família. Enquanto o terceiro estado (sendo ele o restante da população) é composto pelos burgueses, trabalhadores urbanos e camponeses.\n\n\n");

    printf("\nAo digitar a resposta, pressione ENTER para continuar.\n");
    printf("Digite a resposta da questão com letra minúscula: ");
    scanf("%s" , &letra_geral);

  if(letra_geral == gabarito_geral[2]){

      printf(CIANO);
      printf("\nVOCÊ ACERTOOOU. PARABÉNS :)\n");
      printf(RESET);
      
  }else{

      printf(VERMELHO);
      printf("\nVOCÊ ERROU. ESTUDE MAIS UM POUCO :/\n");
      printf("\nA resposta é a letra A\n");
      printf(RESET);
      
  }

    printf("\n4) O processo revolucionário Golpe de 18 de Brumário, é organizado em três etapas. Sendo elas: \n");

    printf("\n(a) Assembléia Nacional Constituinte e Assembléia Legislativa, Convenção e Diretório. ");
      
    printf("\n(b) Assembléia Nacional Constituinte e Assembléia Legislativa, Clero e Diretório");
      
    printf("\n(c) Assembléia Nacional Constituinte e Assembléia Legislativa, Nobreza e Diretório.");
      
    printf("\n(d) Assembléia Nacional Constituinte e Assembléia Legislativa, Constituição e Diretório.\n\n\n");

    printf("\nAo digitar a resposta, pressione ENTER para continuar.\n");
    printf("Digite a resposta da questão com letra minúscula: ");
    scanf("%s" , &letra_geral);

  if(letra_geral == gabarito_geral[3]){

      printf(CIANO);
      printf("\nVOCÊ ACERTOOOU. PARABÉNS :)\n");
      printf(RESET);
      
  }else{

      printf(VERMELHO);
      printf("\nVOCÊ ERROU. ESTUDE MAIS UM POUCO :/\n");
      printf("\nA resposta é a letra A\n");
      printf(RESET);

  }

    printf("\n5) Assinale a alternativa correta.\n");
      
    printf("\n(a) Com a queda da Bastilha, o movimento revolucionário francês durou por mais 10 anos, sendo finalizado somente com o Golpe de 18 de Brumário, organizado por Boris Fausto.");
      
    printf("\n(b) Com a queda da Bastilha, o movimento revolucionário francês durou por exatamente 10 anos, sendo finalizado somente com o Golpe de 18 de Brumário, organizado por Napoleão Bonaparte.");
      
    printf("\n(c) Com a queda da Bastilha, o movimento revolucionário francês durou por mais 10 anos, sendo finalizado somente com o Golpe de 18 de Brumário, organizado por Heródoto.");
      
    printf("\n(d) Com a queda da Bastilha, o movimento revolucionário francês durou por mais 10 anos, sendo finalizado somente com o Golpe de 18 de Brumário, organizado por Napoleão Bonaparte.\n\n\n");

    printf("\nAo digitar a resposta, pressione ENTER para continuar.\n");
    printf("Digite a resposta da questão com letra minúscula: ");
    scanf("%s" , &letra_geral);

  if(letra_geral == gabarito_geral[4]){

      printf(CIANO);
      printf("\nVOCÊ ACERTOOOU. PARABÉNS :)\n");
      printf(RESET);
    
  }else{

      printf(VERMELHO);
      printf("\nVOCÊ ERROU. ESTUDE MAIS UM POUCO :/\n");
      printf("\nA resposta é a letra D\n");
      printf(RESET);
      
  }

    printf("\n6) Assinale a alternativa correta.\n");
      
    printf("\n(a) A Assembleia Nacional Legislativa foi o Parlamento francês instituído pela Constituição de 1790.");
      
    printf("\n(b) A fase da Convenção da Revolução Francesa foi marcada pelo fim do absolutismo.");
      
    printf("\n(c) O Diretório era basicamente um órgão que era constituído por cinco membros, na qual a função era administrar o país, apoiado por duas assembléias: a Assembléia dos Anciãos (formada por políticos mais velhos) e a Assembleia dos Quinhentos.");
      
    printf("\n(d) O Diretório criticava a propriedade para a manutenção da ordem social, definindo que o voto seria universal a todos os homens adultos alfabetizados.\n\n\n");

    printf("\nAo digitar a resposta, pressione ENTER para continuar.\n");
    printf("Digite a resposta da questão com letra minúscula: ");
    scanf("%s" , &letra_geral);

  if(letra_geral == gabarito_geral[5]){

      printf(CIANO);
      printf("\nVOCÊ ACERTOOOU. PARABÉNS :)\n");
      printf(RESET);
    
  }else{

      printf(VERMELHO);
      printf("\nVOCÊ ERROU. ESTUDE MAIS UM POUCO :/\n");
      printf("\nA resposta é a letra C\n");
      printf(RESET);
      
  }

    printf("\n7) Assinale a questão que possui todas as informações corretas.\n");
      
    printf("\n(a) Uma das causas da Revolução Francesa foi a desigualdade entre diferentes grupos sociais.");
      
    printf("\n(b) Uma das causas da Revolução Francesa foi o fim dos privilégios de classe na França.");
      
    printf("\n(c) Uma das causas da Revolução Francesa não foi o pensamento iluminista.");
      
    printf("\n(d) Uma das causas da Revolução Francesa foi separação entre os poderes.\n\n\n");

    printf("\nAo digitar a resposta, pressione ENTER para continuar.\n");
    printf("Digite a resposta da questão com letra minúscula: ");
    scanf("%s" , &letra_geral);

  if(letra_geral == gabarito_geral[6]){

      printf(CIANO);
      printf("\nVOCÊ ACERTOOOU. PARABÉNS :)\n");
      printf(RESET);
      
  }else{

      printf(VERMELHO);
      printf("\nVOCÊ ERROU. ESTUDE MAIS UM POUCO :/\n");
      printf("\nA resposta é a letra A\n");
      printf(RESET);
    
  }

    printf("\n8) A Revolução Francesa tem como uma das suas causas um pensamento, sendo esse: \n");
      
    printf("\n(a) Sociológico.");
      
    printf("\n(b) Filosófico.");
      
    printf("\n(c) Iluminista.");
      
    printf("\n(d) Comunista.\n\n\n");

    printf("\nAo digitar a resposta, pressione ENTER para continuar.\n");
    printf("Digite a resposta da questão com letra minúscula: ");
    scanf("%s" , &letra_geral);

  if(letra_geral == gabarito_geral[7]){

      printf(CIANO);
      printf("\nVOCÊ ACERTOOOU. PARABÉNS :)\n");
      printf(RESET);
      
  }else{

      printf(VERMELHO);
      printf("\nVOCÊ ERROU. ESTUDE MAIS UM POUCO :/\n");
      printf("\nA resposta é a letra C\n");
      printf(RESET);
      
  }

    printf("\n9) Marque a alternativa que possui todas as causas apresentadas na explicação. \n");
      
    printf("\n(a) A desigualdade entre diferentes grupos sociais; O pensamento iluminista e uma grande crise económica e a influência da Revolução Americana na economia e no imaginário da França. ");
      
    printf("\n(b) Uma grande crise económica e a influência da Revolução Americana na economia e no imaginário da França; Progresso técnico e científico e criação de máquinas para as indústrias.");
      
    printf("\n(c) Fome, pobreza e insatisfação social; Uma grande crise económica e a influência da Revolução Americana na economia e no imaginário da França e Oposição a Monarquia Absolutista.");
      
    printf("\n(d) Novas ideias revolucionárias de governo (liberais e socialistas); O pensamento iluminista e a desigualdade entre diferentes grupos sociais.\n\n\n");

    printf("\nAo digitar a resposta, pressione ENTER para continuar.\n");
    printf("Digite a resposta da questão com letra minúscula: ");
    scanf("%s" , &letra_geral);

  if(letra_geral == gabarito_geral[8]){

      printf(CIANO);
      printf("\nVOCÊ ACERTOOOU. PARABÉNS :)\n");
      printf(RESET);
      
}else{

      printf(VERMELHO);
      printf("\nVOCÊ ERROU. ESTUDE MAIS UM POUCO :/\n");
      printf("\nA resposta é a letra A\n");
      printf(RESET);
      
  }

    printf("\n10) Assinale a alternativa que possui três consequências da Revolução Francesa.\n");
      
    printf("\n(a) Fim dos privilégios de classe na França; separação entre os poderes e queda da Monarquia.");
      
    printf("\n(b) Novas relações de trabalho; consolidação do Capitalismo e expansão de Imperialismo.");
      
    printf("\n(c) Fim dos privilégios de classe na França; separação entre os poderes e imposição das liberdades individuais, que tornavam os homens “iguais” perante a lei. ");
      
    printf("\n(d) Separação entre os poderes; originou uma constituição e o pensamento Iluminista.\n\n\n");

    printf("\nAo digitar a resposta, pressione ENTER para continuar.\n");
    printf("Digite a resposta da questão com letra minúscula: ");
    scanf("%s" , &letra_geral);

  if(letra_geral == gabarito_geral[9]){

      printf(CIANO);
      printf("\nVOCÊ ACERTOOOU. PARABÉNS :)\n");
      printf(RESET);
      
  }else{

      printf(VERMELHO);
      printf("\nVOCÊ ERROU. ESTUDE MAIS UM POUCO :/\n");
      printf("\nA resposta é a letra C\n");
      printf(RESET);
    
  }

    printf("\n11)  Segundo uma das consequências da Revolução Francesa, a constituição originária do mesmo ciclo revolucionário: \n");
      
    printf("\n(a) Foi a primeira maior da França.");
      
    printf("\n(b) Foi a segunda maior da França.");
      
    printf("\n(c) Foi a terceira maior da França.");
      
    printf("\n(d) Foi a quarta maior da França.\n\n\n");

    printf("\nAo digitar a resposta, pressione ENTER para continuar.\n");
    printf("Digite a resposta da questão com letra minúscula: ");
    scanf("%s" , &letra_geral);

  if(letra_geral == gabarito_geral[10]){

      printf(CIANO);
      printf("\nVOCÊ ACERTOOOU. PARABÉNS :)\n");
      printf(RESET);
      
  }else{

      printf(VERMELHO);
      printf("\nVOCÊ ERROU. ESTUDE MAIS UM POUCO :/\n");
      printf("\nA resposta é a letra A\n");
      printf(RESET);
      
  }
      
    printf("\n12) Segundo uma das consequências da Revolução Francesa, o fim dos privilégios de classe na França, decretava o que:\n");
      
    printf("\n(a) O fim do Antigo Regime.");
      
    printf("\n(b) O absolutismo como regime social e político.");
      
    printf("\n(c) A Declaração dos Direitos do Homem e do Cidadão.");
      
    printf("\n(d) Que todos os seres eram iguais perante a lei. \n\n\n");  

    printf("\nAo digitar a resposta, pressione ENTER para continuar.\n");
    printf("Digite a resposta da questão com letra minúscula: ");
    scanf("%s" , &letra_geral);

  if(letra_geral == gabarito_geral[12]){

      printf(CIANO);
      printf("\nVOCÊ ACERTOOOU. PARABÉNS :)\n");
      printf(RESET);
      
  }else{

      printf(VERMELHO);
      printf("\nVOCÊ ERROU. ESTUDE MAIS UM POUCO :/\n");
      printf("\nA resposta é a letra D\n");
      printf(RESET);
      
  }
      
    break;
    
    default :
      
    printf ("Valor invalido!\n");
      
  }

  }