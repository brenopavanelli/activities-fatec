class Pessoa
{
    // Atributos
    // Protected: Acessível dentro da classe e por classes herdadas
    protected string nome;
    protected int idade;

    protected void ApresentarPessoa()
    {
        Console.WriteLine($"Olá, meu nome é {nome} e tenho {idade} anos.");
    }
}