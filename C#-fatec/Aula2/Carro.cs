namespace Aula2;

public class Carro
{
    //  atributos 
    private string marca; 
    public string modelo;
    public string ano;
    
    // Constructor
    // Obrigatório abrir um constructor quando o objeto precisar receber valores

    public Carro(string marca, string modelo, string ano)
    {
        marca = marca;
        modelo = modelo;
        ano = ano; 
    }

    public void setMarca(string novaMarca)
    {
        this.marca = novaMarca;
    }

    public string getMarca()
    {   
        return marca; 
    }
}