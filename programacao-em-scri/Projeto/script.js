function main() {
    const form = document.querySelector("#formulario"); 
    const opcao = form.querySelector("#opcao"); 
    const campoDeRespostas = document.querySelector("#tabela");

    function submit(evento) {
        evento.preventDefault(); // Professor nessa linha usei para previnir que o formulário recarregue a página ao ser enviado, essa forma foi a única que me recordei para evitar de perder os dados durante a execução, aprendi em um curso de JS.

        let resposta = "";
        if (opcao.value == 1) {
            resposta = "Acesso a web através do DOM, suporte para programação orientada a eventos, e capacidade de manipular também o back-end de uma aplicação.";
        } else if (opcao.value == 2) {
            resposta = "CSS é uma linguagem utilizada para formular estilos visuais";
        } else if (opcao.value == 3) {
            resposta = "São blocos de código que podem ser reutilizados, sendo capazes de receber parâmetros e retornar valores.";
        } else if (opcao.value == 4) {
            resposta = "Permitem a interação com o usuário, ou seja, respondem ações e acontecimentos.";
        }

        let pergunta = "";
        if (opcao.value == 1) {
            pergunta = "Quais são as principais características da linguagem JavaScript?";
        } else if (opcao.value == 2) {
            pergunta = "Quais são as principais características da linguagem CSS?";
        } else if (opcao.value == 3) {
            pergunta = "Quais são as principais características de funções na Linguagem JavaScript?";
        } else if (opcao.value == 4) {
            pergunta = "Quais são as principais características de eventos na Linguagem JavaScript?";
        }

        const novaLinha = `<tr><td>${pergunta}</td><td>${resposta}</td></tr>`;
        campoDeRespostas.innerHTML += novaLinha;
    }

    form.addEventListener('submit', submit);
}

main();
