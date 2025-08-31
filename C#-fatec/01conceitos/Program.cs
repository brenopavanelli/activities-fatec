// Instanciar uma classe (criar um objeto a partir do molde)
// Exemplo 1
Pessoa p1 = new Pessoa(); // new = criar um novo objeto
p1.Nome = "Thiago";
p1.idade = 30;
p1.Falar();

// Exemplo 2 
Pessoa p2 = new();
p2.Nome = "Ana";
p2.idade = 17;
p2.Falar();

// Exemplo 3
Pessoa p3 = new() 
{ 
    Nome = "Maria", 
    idade = 25 
}; // Inicializando atributos na criação do objeto
p3.Falar();

string resultado = p3.VerificarIdade();
Console.WriteLine(resultado);

