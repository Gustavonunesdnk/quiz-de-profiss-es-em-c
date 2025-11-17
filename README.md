Ao entrar no programa que é escrito em c e respondido no terminal do windows (o progrma foi feito para windows),
o usuario começa a responder pergundas de resposta objetiva sobre seus interesses e gostos com relação à área da tecnologia.
Baseando-se nisso, o programa escolhe uma das profissões possiveis e indica ao usuário como sua profissão ideal.
A escolha da profissão baseia-se nas respostas das perguntas através de um sistema de pontuação que funciona da seguinte maneira:
Cada resposta incrementa em variáveis que são os nomes das profissões abreviados. Se a resposta coincidir com certa profissão, então, 
é incrementado um valor maior dependendo da resposta. Ao final a pontuação é somada e a profissão com o maior "valor" é escolhida.
Se as respostas não forem conclusivas para a escolha da profissão, existe também a possibilidade de o progrma exibir no .HTML resultante
"profissão indefinida".
Como é a parte da pontuação e da escolha:


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
        

    const char *profissaoVencedora;
    const char *descricaoProfissao;
    if (eia > cdd && eia > dsf && eia > admr && eia > admb && eia > ans && eia > pci) {
        profissaoVencedora = "Especialista em I.A";
        descricaoProfissao = "A função de um Especialista em Inteligência Artificial (IA) é desenvolver e implementar soluções baseadas em IA para resolver problemas complexos e automatizar tarefas.";
    } else if (cdd > anc && cdd > pci && cdd > eia && cdd > dsf && cdd > admr && cdd > admb && cdd > ans) {
        profissaoVencedora = "Cientista_dados";
        descricaoProfissao = "Cientistas de dados analisam grandes volumes de dados para extrair insights valiosos e auxiliar na tomada de decis es.";
    } else if (dsf > anc && dsf > pci && dsf > eia && dsf > cdd && dsf > admr && dsf > admb && dsf > ans) {
        profissaoVencedora = "Desenvolvedor_software";
        descricaoProfissao = "Desenvolvedores de software criam e mantem aplicativos e sistemas que atendem a necessidades especificas.";
    } else if (admr > anc && admr > pci && admr > eia && admr > cdd && admr > dsf && admr > admb && admr > ans) {
        profissaoVencedora = "Administrador_rede";
        descricaoProfissao = "Administradores de rede gerenciam e mant m redes de computadores, garantindo sua efici ncia e seguranca.";
    } else if (admb > anc && admb > pci && admb > eia && admb > cdd && admb > dsf && admb > admr && admb > ans) {
        profissaoVencedora = "Administrador_banco_dados";
        descricaoProfissao = "Administradores de banco de dados garantem que os dados sejam armazenados, organizados e acess veis de maneira eficiente.";
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

