#include <stdio.h>

 int main ()
  /*  Danna Solano
    12 MAY 21 
    programa*/
{
    float Fresa, CincoKilos, $13, precio;
    printf ( "\n\n comprando fruta");
    printf ( "\n\n precio de cualquier fruta $13");
    printf ( "\n\n ingrese la fruta que selecciono");
    scanf ( "%f", &Fresa);
    printf ( "\n\n ingrese el peso de la futa seleccionada");
    scanf ( "%f", &CincoKilos);
    precio= CincoKilos * $13;
    printf ( "\n\n el presio total es %f", precio);
    return 0;

}