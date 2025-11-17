#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int eia, cdd, dsf, admr, admb, ans, anc, pci, R1;
    char nome[50];
    eia = cdd = dsf = admr = admb = ans = anc = 0;

    printf("Bem-vindo ao quiz!\n ");
    printf("Digite seu nome:\n ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = 0;
    printf("Certo %s, vamos comecar com as perguntas, lembrando que voce vai ter duas a quatro opcoes para responder!\n ", nome);

    printf("Pergunta 1: O que te fez escolher CC como curso superior?\n");
    puts("1) A paixao por tecnologia e inovacao --- digite '1' caso queira escolher 1 \n");
    puts("2) O desejo de resolver problemas complexos e desafiadores --- digite '2' caso queira escolher 2 \n");
    puts("3) A curiosidade em entender como funcionam os computadores e sistemas  --- digite '3' caso queira escolher 3 \n");
    puts("4) As oportunidades de carreira e o potencial de crescimento na área --- digite '4' caso queira escolher 4 \n");
    scanf("%d", &R1);
    if (R1 == 1) {
        dsf++;
        eia++;
        ans++;
    } else if (R1 == 2) {
        cdd++;
        anc++;
        pci++;
    } else if (R1 == 3) {
        admb++;
        admr++;
        ans++;
    } else if (R1 == 4) {
        cdd++;
        dsf++;
        eia++;
    }

    printf("Pergunta 2: Qual dessas atividades parece mais interessante?\n");
    puts("1) Proteger sistemas contra ataques ciberneticos --- Digite '1' caso queira escolher 1 \n");
    puts("2) Gerenciar a comunicação e a estrutura de redes --- Digite '2' caso queira escolher 2 \n");
    puts("3) Implementar sistemas de Inteligencia Artificial --- Digite '3' caso queira escolher 3 \n");
    puts ("4) Realizar pesquisas que busquem solucoes para conflitos na area de T.I  --- Digite '4' caso queira escolher 4 \n ");
    scanf("%d", &R1);
    if (R1 == 1) {
        anc = anc + 2;
        admb++;
    } else if (R1 == 2) {
        admb++;
        admr = admr + 2;
        dsf++;
    } else if (R1 == 3) {
        eia = eia + 2;
        dsf++;
    } else if (R1 == 4) {
        pci = pci + 2;
        cdd++;
    }

    printf("Pergunta 3) Voce consegue trabalhar sob alta pressao?\n ");
    puts("1) Sim --- Digite 1\n");
    puts("2) Nao --- Digite 2\n");
    puts("3) Nao, mas posso tentar --- Digite 3\n ");
    puts("4) Sim, mas com dificuldade --- Digite 4\n ");
    scanf("%d", &R1);
    if (R1 == 1) {
        anc = anc + 2;
        admr = admr + 2;
        admb = admb + 2;
    } else if (R1 == 2) {
        eia = eia + 2;
        cdd = cdd + 2;
        pci = pci + 2;
    } else if (R1 == 3) {
        ans++;
        dsf++;
        cdd++;
        pci++;
    } else if (R1 == 4) {
        ans++;
        dsf++;

    }

    printf("Pergunta 4) Como voce prefere trabalhar em equipe?\n ");
    puts("1) Coordenando e organizando as tarefas do time para que tudo funcione bem --- Digite 1\n");
    puts("2) Trabalhando de forma mais independente, mas aliando ao trabalho em grupo --- Digite 2\n");
    puts("3) Trocando ideias e solucoes com a equipe constantemente  --- Digite 3\n ");
    puts("4) Revisando e testando o codigo ou sitemas dos colegas para garantir sua qualidade --- Digite 4\n ");
    scanf("%d", &R1);
    if (R1 == 1) {
        admr = admr + 2;
        ans++;
    } else if (R1 == 2) {
        cdd = cdd + 2;
        eia = eia + 2;
        pci = pci + 2;
    } else if (R1 == 3) {
        ans = ans + 2;
        dsf = dsf + 2;
        admr++;
    } else if (R1 == 4) {
        anc = anc + 2;
        admb = admb + 2;
        admr++;
    }

    printf("Pergunta 5) Qual destas habilidades você gostaria de desenvolver?\n ");
    puts("1) Pesquisa e desenvolvimento em tecnologia --- Digite 1\n");
    puts("2) Técnicas avançadas de cibersegurança --- Digite 2\n");
    puts("3) Algoritmos de aprendizado de máquina --- Digite 3\n ");
    puts("4) Análise e visualização de dados --- Digite 4\n ");
    puts("5) Desenvolvimento de software em várias linguagens de programação --- Digite 5\n ");
    puts("6) Administração de dispositivos de rede e protocolos --- Digite 6\n ");
    puts("7) Modelagem e administração de bancos de dados --- Digite 7\n ");
    puts("8) Engenharia de requisitos e análise de sistemas --- Digite 8\n ");
    scanf("%d", &R1);
    if (R1 == 1) {
        pci = pci + 2;
    } else if (R1 == 2) {
        anc = anc + 2;
    } else if (R1 == 3) {
        eia = eia + 2;
    } else if (R1 == 4) {
        cdd = cdd + 2;
    } else if (R1 == 5) {
        dsf = dsf + 2;
    } else if (R1 == 6) {
        admr = admr + 2;
    } else if (R1 == 7) {
        admb = admb + 2;
    } else if (R1 == 8) {
        ans = ans + 2;
    }

    printf("Pergunta 6) Qual cenario de trabalho parece mais interessante para voce?\n ");
    puts("1) Startup inovadora e em crescimento rápido. --- Digite 1\n");
    puts("2) Equipe em uma big tech reconhecida globalmente --- Digite 2\n");
    puts("3) Universidade ou instituto de pesquisa  --- Digite 3\n ");
    puts("4) Administração de grandes volumes de informações e infraestruturas de comunicação --- Digite 4\n ");
    scanf("%d", &R1);
    if (R1 == 1) {
        dsf = dsf + 2;
        cdd++;
        eia = eia + 2;
    } else if (R1 == 2) {
        dsf = dsf + 2;
        cdd++;
        anc = anc + 2;
        admr++;
        ans++;
    } else if (R1 == 3) {
        pci = pci + 2;
        eia = eia + 2;
        cdd = + 2;
    } else if (R1 == 4) {
        admb = admb + 2;
        admr = admr + 2;
        ans++;
        anc = anc + 2;
    }

    printf("Pergunta 7) O que mais te motiva em um trabalho?\n ");
    puts("1) Inovar e criar soluções inteligentes para minha empresa --- Digite 1\n");
    puts("2) Criar solucoes que impactem a sociedade --- Digite 2\n");
    puts("3) Descobrir e interpretar tendências  --- Digite 3\n ");
    puts("4) Meu proprio bolso --- Digite 4\n ");
    scanf("%d", &R1);
     if (R1 == 1) {
        eia = eia + 2;
        dsf++;
        anc++;
        ans++;
    } else if (R1 == 2) {
        cdd++;
        dsf = dsf + 2;
        pci = pci + 2;
    } else if (R1 == 3) {
        cdd = cdd + 2;
        pci = pci + 2;
    } else if (R1 == 4) {
        anc++;
        admb++;
        admr++;
    }


    const char *profissaoVencedora;
    const char *descricaoProfissao;
    if (eia > cdd && eia > dsf && eia > admr && eia > admb && eia > ans && eia > pci) {
        profissaoVencedora = "Especialista em I.A";
        descricaoProfissao = "A função de um Especialista em Inteligência Artificial (IA) é desenvolver e implementar soluções baseadas em IA para resolver problemas complexos e automatizar tarefas.";
    } else if (cdd > anc && cdd > pci && cdd > eia && cdd > dsf && cdd > admr && cdd > admb && cdd > ans) {
        profissaoVencedora = "Cientista_dados";
        descricaoProfissao = "Cientistas de dados analisam grandes volumes de dados para extrair insights valiosos e auxiliar na tomada de decis�es.";
    } else if (dsf > anc && dsf > pci && dsf > eia && dsf > cdd && dsf > admr && dsf > admb && dsf > ans) {
        profissaoVencedora = "Desenvolvedor_software";
        descricaoProfissao = "Desenvolvedores de software criam e mantem aplicativos e sistemas que atendem a necessidades especificas.";
    } else if (admr > anc && admr > pci && admr > eia && admr > cdd && admr > dsf && admr > admb && admr > ans) {
        profissaoVencedora = "Administrador_rede";
        descricaoProfissao = "Administradores de rede gerenciam e mant�m redes de computadores, garantindo sua efici�ncia e seguranca.";
    } else if (admb > anc && admb > pci && admb > eia && admb > cdd && admb > dsf && admb > admr && admb > ans) {
        profissaoVencedora = "Administrador_banco_dados";
        descricaoProfissao = "Administradores de banco de dados garantem que os dados sejam armazenados, organizados e acess�veis de maneira eficiente.";
    } else if (ans > anc && ans > pci && ans > eia && ans > cdd && ans > dsf && ans > admr && ans > admb) {
        profissaoVencedora = "Analista_sistemas";
        descricaoProfissao = "Analistas de sistemas estudam os sistemas de TI existentes e recomendam melhorias e solucoes tecnologicas.";
    } else if (anc > pci && anc > eia && anc > cdd && anc > dsf && anc > admr && anc > admb) {
        profissaoVencedora = "Analista de ciberseguranca";
        descricaoProfissao = "Analistas de sistemas estudam os sistemas de TI existentes e recomendam melhorias e solucoes tecnologicas.";
    } else if (pci > anc && pci > eia && pci > cdd && pci > dsf && pci > admr && pci > admb) {
        profissaoVencedora = "Pesquisador Cientifico";
        descricaoProfissao = "Pesquisadores Científicos estudam e desenvolvem novas tecnologias, algoritmos, métodos e conceitos que impulsionam a computação.";
    } else {
        profissaoVencedora = "indefinida";
        descricaoProfissao = "Nao foi possivel determinar uma profissao com base nas suas respostas.";
    }

    // Criar o arquivo HTML e escrever o resultado
    FILE *arquivo = fopen("resultado_quiz.html", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo HTML.\n");
        return 1;
    }

    fprintf(arquivo, "<!DOCTYPE html>\n");
    fprintf(arquivo, "<html lang=\"pt-BR\">\n");
    fprintf(arquivo, "<head>\n");
    fprintf(arquivo, "    <meta charset=\"UTF-8\">\n");
    fprintf(arquivo, "    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n");
    fprintf(arquivo, "    <title>Resultado do Quiz de Profissoes</title>\n");
    fprintf(arquivo, "</head>\n");
    fprintf(arquivo, "<body>\n");
    fprintf(arquivo, "    <h1>Parabens, %s! Sua profissao eh: %s</h1>\n", nome, profissaoVencedora);
    fprintf(arquivo, "    <p>%s</p>\n", descricaoProfissao);
    fprintf(arquivo, "    <img src=\"/imagens/%s.jpg\" alt=\"%s\">\n", profissaoVencedora, profissaoVencedora);
    fprintf(arquivo, "</body>\n");
    fprintf(arquivo, "</html>\n");

    fclose(arquivo);

    printf("sua profissao eh: %s", profissaoVencedora);
    printf("O resultado foi salvo no arquivo 'resultado_quiz.html'.\n");


    return 0;
}
