/*
    Pedro -> 80 reais Cartão -> Visa
    Lucas -> 160 PIX -> lucascomprador@gmail.com
    Mateus -> 400 reais Boleto -> 152656.4894.45
*/

IPagamento pagamento1 = new PagamentoCartaoCredito("Visa", "Pedro", 80);
pagamento1.processarPagamento();

IPagamento pagamento2 = new PagamentoPix("lucascomprador@gmail.com", "Lucas", 160);
pagamento2.processarPagamento();

IPagamento pagamento3 = new PagamentoBoleto("152656.4894.45", "Mateus", 400);
pagamento3.processarPagamento();

IPagamento pagamento4 = new PagamentoDinheiro("Mateus", 400);
pagamento4.processarPagamento();




