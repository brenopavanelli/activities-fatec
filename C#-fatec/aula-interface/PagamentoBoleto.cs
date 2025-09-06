public class PagamentoBoleto : Pagamento, IPagamento
{
    public string? codigoBoleto;

    public PagamentoBoleto(string? _codigoBoleto, string? _nomeDoPagador, int _valorDoPagamento)
    {
        codigoBoleto = _codigoBoleto;
        nomeDoPagador = _nomeDoPagador;
        valorDoPagamento = _valorDoPagamento;
    }

    public void processarPagamento()
    {
        Console.WriteLine($"Pagamento realizado por {nomeDoPagador} do boleto {codigoBoleto} no valor {valorDoPagamento},realizado com sucesso");
    }
}