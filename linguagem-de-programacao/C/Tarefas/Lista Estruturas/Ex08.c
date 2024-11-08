#include <stdio.h>
#include <string.h>

#define NUM_RESERVAS 3
#define MAX_NOME 100

struct Reserva {
    char nome[MAX_NOME];
    int numeroQuarto;
    int checkinDia, checkinMes, checkinAno;
    int checkoutDia, checkoutMes, checkoutAno;
};

void lerReserva(struct Reserva *reserva) {
    
    fgets(reserva->nome, MAX_NOME, stdin);
    reserva->nome[strcspn(reserva->nome, "\n")] = '\0';

    scanf("%d", &reserva->numeroQuarto);

    scanf("%d/%d/%d", &reserva->checkinDia, &reserva->checkinMes, &reserva->checkinAno);

    scanf("%d/%d/%d", &reserva->checkoutDia, &reserva->checkoutMes, &reserva->checkoutAno);
    getchar();  
}

int calcularDuracaoEstadia(struct Reserva *reserva) {
    int diasCheckin = reserva->checkinAno * 365 + reserva->checkinMes * 31 + reserva->checkinDia;
    int diasCheckout = reserva->checkoutAno * 365 + reserva->checkoutMes * 31 + reserva->checkoutDia;
    return diasCheckout - diasCheckin;
}

void imprimirReserva(struct Reserva reserva, int duracao, int contador) {
    printf("Reserva %d: Nome: %s, Quarto: %d, Check-in: %02d/%02d/%d, Check-out: %02d/%02d/%d, DuraÃ§Ã£o: %d dias\n",
           contador, reserva.nome, reserva.numeroQuarto,
           reserva.checkinDia, reserva.checkinMes, reserva.checkinAno,
           reserva.checkoutDia, reserva.checkoutMes, reserva.checkoutAno, duracao);
}

void lerReservas(struct Reserva reservas[], int numReservas) {
    for (int i = 0; i < numReservas; i++) {
        lerReserva(&reservas[i]);
    }
}

void calcularEImprimirReservas(struct Reserva reservas[], int numReservas) {
    for (int i = 0; i < numReservas; i++) {
        int duracao = calcularDuracaoEstadia(&reservas[i]);
        imprimirReserva(reservas[i], duracao, i+1);
    }
}

int main() {
    struct Reserva reservas[NUM_RESERVAS];

    lerReservas(reservas, NUM_RESERVAS);

    calcularEImprimirReservas(reservas, NUM_RESERVAS);

    return 0;
}