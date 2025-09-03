class Pessoa
{
    // Primeiro construtor
    public Pessoa()
    {
        Console.WriteLine("Construtor padrão chamado");
    }

    // Segundo construtor
    public Pessoa(string nome)
    {
        Console.WriteLine($"Construtor com parâmetro chamado. Nome: {nome}");
    }

    // Terceiro construtor
    public Pessoa(string nome, int idade)
    {
        Console.WriteLine($"Construtor com dois parâmetros chamado. Nome: {nome}, Idade: {idade}");
    }
}