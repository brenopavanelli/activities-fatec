using Projeto1;

Aluno aluno1 = new Aluno();
Aluno aluno2 = new Aluno(); 

// Definindo as Propriedades do Aluno 1 
aluno1.nome = "Andre";
aluno1.ra = 0220482413005;
aluno1.curso = "ADS";


// Definindo algumas Propriedades do Aluno 2
aluno2.nome = "Jose";

// Exibindo dados Aluno 1
Console.WriteLine(aluno1.nome);
Console.WriteLine(aluno1.ra);
Console.WriteLine(aluno1.curso);

// Exibindo dados Aluno 2
Console.WriteLine(aluno2.nome);
Console.WriteLine(aluno2.ra);

// Chamando métodos da classe Aluno
aluno1.estagiar();
aluno2.estagiar();

