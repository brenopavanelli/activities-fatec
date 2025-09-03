class Colaborador : Pessoa
{
    // Atributos específicos da classe Colaborador
    private string _cargo;
    private int _salario;

    // Construtor
    private Colaborador(string nome, int idade, string cargo, double salario)
    {
        // Acessando atributos da classe base
        Nome = nome;
        Idade = idade;
        _cargo = cargo;
        _salario = salario;

        ApresentarColaborador();
    }

    private void ApresentarColaborador()
    {
        // Acessando método da classe base
        ApresentarPessoa();
        Console.WriteLine($"Cargo: {_cargo}, Salário: {_salario:C}");
    }
}