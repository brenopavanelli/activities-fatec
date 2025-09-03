class Pessoa
{
    // Atributos
    // Protected: Acessível dentro da classe e por classes herdadas
    private string _nome;
    private int _idade;

    // Construtor 
    public Pessoa(string nome, int idade)
    {
        _nome = nome;
        _idade = idade;
    }



    protected void ApresentarPessoa()
    {
        Console.WriteLine($"Olá, meu nome é {_nome} e tenho {_idade} anos.");
    }
}