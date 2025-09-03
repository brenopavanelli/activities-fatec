// Métodos Get e Set -> são usados para acessar atributos privados de uma classe
// Get -> retorna o valor do atributo
// Set -> atribui um valor ao atributo
class Aluno
{
    // Maneira 1
    private string? _nome; // atributo privado -> seguindo boas práticas, atributos privados devem começar com _
    public string Nome // propriedade pública
    {
        get { return _nome!; } // retorna o valor do atributo privado
        set { _nome = value; } // atribui um valor ao atributo privado
    }

    // Maneira 2
    public double Media { get; set; } // propriedade automática -> o compilador cria um atributo privado para armazenar o valor 
}