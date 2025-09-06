public class PagamentoDinheiro : Pagamento, IPagamento
{

    public PagamentoDinheiro(string? _nomeDoPagador, int _valorDoPagamento)
    {
        nomeDoPagador = _nomeDoPagador;
        valorDoPagamento = _valorDoPagamento;
    }

    public void processarPagamento()
    {
            Console.WriteLine($"Pagamento com Dinheiro realizado pelo {nomeDoPagador} no valor de {valorDoPagamento} com sucesso");
    }
}