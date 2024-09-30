#include <stdio.h>
#include <stdlib.h>

/** 
 * Hacer un programa que pida el total de kilómetros recorridos, el precio de la gasolina (por
 * litro), el dinero de gasolina gastado en el viaje y el tiempo que se ha tardado (en horas y
 * minutos), y que calcule:
 * • Consumo de gasolina (en litros y euros) por cada cien kilómetros.
 * • Consumo de gasolina (en litros y euros) por cada kilómetro.
 * • Velocidad media (en km/h y m/s).
*/



int main(int argc, char *argv[]) {
    float km, hours, minutes, price, spend;

    printf("Total km.: "); scanf("%f", &km);
    printf("Precio por litro de gasolina: "); scanf("%f", &price);
    printf("Gasto total en gasolina: "); scanf("%f", &spend);
    printf("Tiempo en viaje \n   Horas: "); scanf("%f", &hours);
    printf("   Minutos: "); scanf("%f", &minutes);

    float usage100_l, usage100_eur, usage_l, usage_eur;
    
    usage_eur = spend / km;
    usage_l = usage_eur /price;
    usage100_eur = usage_eur * 100;
    usage100_l = usage_l * 100;

    printf("Consumo de gasolina por cada 100 km: %f l | %f eur\n", usage100_l, usage100_eur);
    printf("Consumo de gasolina por km: %f l | %f eur\n", usage_l, usage_eur);

    float avg_speed_kmh, avg_speed_ms, time_h;
    time_h = hours + minutes / 60;

    avg_speed_kmh = km / time_h;
    avg_speed_ms = avg_speed_kmh * 1000 / 3600;

    printf("Velocidad media: %f km/h | %f m/s\n", avg_speed_kmh, avg_speed_ms);

    return 0;
}