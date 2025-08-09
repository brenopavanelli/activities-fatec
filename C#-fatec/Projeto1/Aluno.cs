namespace Projeto1;

// niveis de acesso
// publico (qualquer lugar do código), privado, protected e frieendly (mais níveis de permissão) 

public class Aluno
{
    // definir as propriedades do aluno
    public long ra;
    public string nome;
    public string curso;
    
    
    // definir os métodos
    public void estagiar()
    {
        Console.WriteLine("Estagiar");
    }
}