// Níveis de acesso 

// public -> qualquer classe tem acesso
// protected -> apenas as classes filha ou a própria classe tem acesso
// private -> somente a própria classe tem acesso

Aluno aluno = new Aluno();

aluno.Nome = "Ana"; // atribuindo valor ao atributo privado através do método Set
aluno.Media = 8.5; // atribuindo valor ao atributo privado através do método Set

console.WriteLine($"Nome: {aluno.Nome} - Media: {aluno.Media}"); // acessando o valor do atributo privado através do método Get



