using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace revisao_polimorfismo
{
    public class Cafeteira : Eletrodomestico
    { 
        public Cafeteira(string nome) : base(nome) // Construtor que ja passa o nome para o construtor da classe base
        {
        }
        public override void Ligar() // overrride -> sobrescreve o método abstrato da classe base (princípio do polimorfismo)
        {
            Console.WriteLine("Cafeteira ligada. Preparando café...");
        }
        public override void Desligar()
        {
            Console.WriteLine("Cafeteira desligada.");

        }
        public void FazerCafe()
        {
            Console.WriteLine("Café pronto! Aproveite.");
        }
    }
}
