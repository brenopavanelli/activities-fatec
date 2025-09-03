class Colaborador : Pessoa // Extensão da classe (herança)
{
    // Atributos específicos da classe Colaborador
    private string _cargo;
    private int _salario;

    // Construtor -> + base para sinalizar quais atributos são vinculados com o construtor da classe mãe
    public Colaborador(string nome, int idade, string cargo, int salario) : base(nome, idade)
    {
        // Acessando atributos da classe 
        _cargo = cargo;
        _salario = salario;

        ApresentarColaborador();
    }

    public void ApresentarColaborador()
    {
        // Acessando método da classe base
        ApresentarPessoa();
        Console.WriteLine($"Cargo: {_cargo}, Salário: {_salario:C}");
    }
}