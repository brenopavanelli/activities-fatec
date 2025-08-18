namespace Aula2;

public class Carro
{
    //  atributos 
    public string marca; 
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

    public void setMarca(string novaMarca) // inserir dados em propriedades privadas usa o setter
    {
        this.marca = novaMarca;
    }

    public string getMarca() // buscaar dados de uma propriedade privada usa o getter
    {   
        return marca; 
    }
}