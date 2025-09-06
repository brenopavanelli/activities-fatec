public class PagamentoCartaoCredito : Pagamento, IPagamento
{
    public string? bandeiraDoCartao;

    public PagamentoCartaoCredito(string? _bandeiraDoCartao, string? _nomeDoPagador, int _valorDoPagamento) // Construtor para passar o valor para propriedade sempre que a classe for iniciada
    {
        bandeiraDoCartao = _bandeiraDoCartao;
        nomeDoPagador = _nomeDoPagador;
        valorDoPagamento = _valorDoPagamento;
    }

    public void processarPagamento()
    {
        Console.WriteLine($"Pagamento com cartão de crédito realizado por {nomeDoPagador} no valor de {valorDoPagamento} com sucesso: {bandeiraDoCartao}");
    }

    
}