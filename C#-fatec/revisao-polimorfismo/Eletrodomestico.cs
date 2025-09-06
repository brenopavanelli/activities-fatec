using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace revisao_polimorfismo
{
    public abstract class Eletrodomestico
    {
        private string _nome;


        public Eletrodomestico(string nome) // Construtor
        {
            this._nome = nome;

        }

        public abstract void Ligar(); // Método abstrato -> C# não obriga ter uma implementação logo de cara
        public abstract void Desligar(); // Método abstrato


    }
}
