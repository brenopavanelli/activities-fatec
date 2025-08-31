class Pessoa // Classe é o molde do objeto
{
    // Atributos
    // Visibilidade de acesso, tipo do atributo, nome do atributo
    public string? Nome; 
    public int? idade; 

    // Métodos
    // Visibilidade de acesso, tipo do retorno, nome do método(parâmetros)
    // void = vazio (sem retorno)
    public void Falar() 
    {
        Console.WriteLine($"Olá, meu nome é {Nome} e tenho {idade} anos.");
    }

    public string VerificarIdade() 
    {
        return idade >= 18 ? "Maior de idade" : "Menor de idade"; // Método com retorno
    }
}