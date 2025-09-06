public class PagamentoPix : Pagamento, IPagamento
{
    public string? chavePix;

    public PagamentoPix(string? _chavePix, string? _nomeDoPagador, int _valorDoPagamento) // Constructor para passar a chave ao instanciar a classe
    {
        chavePix = _chavePix;
        nomeDoPagador = _nomeDoPagador;
        valorDoPagamento = _valorDoPagamento;
    }

    public void processarPagamento()
    {
        Console.WriteLine($"Pagamento com Pix realizado pelo {nomeDoPagador} no valor de {valorDoPagamento} com sucesso na chave: {chavePix} "); // Cada classe usa o método da interface de uma forma diferente
    }
}