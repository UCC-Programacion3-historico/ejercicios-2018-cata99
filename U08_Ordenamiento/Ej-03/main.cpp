#include <iostream>
/**funcion para hacer intercambios y ver el pibote
 */
int dividir(int *array, int inicio, int fin)
{
    int i;
    int j;
    int pibote;
    int temp;

    pibote = array[inicio];
    i = inicio;
    j = fin;

    //Mientras no se cruzen los índices
    while (i < j){
        while (array[j] > pibote){
            j--;
        }

        while ((i < j ) && (array[i] <= pibote)){
            i++;
        }

        // Si todavia no se cruzan los indices seguimos intercambiando
        if(i < j){
            temp= array[i];
            array[j] = array[j];
            array[j] = temp;
        }
    }

    //cruzaron los indices
    temp = array[j];
    array[j] = array[inicio];
    array[inicio] = temp;

    return j;
}

/**funcion del quicksort
 *
 * */

void quicksort(int *array, int inicio, int fin)
{
    int pivote;
    if(inicio < fin)
    {
        pivote = dividir(array, inicio, fin );
        quicksort( array, inicio, pivote - 1 );//ordeno la lista de los menores
        quicksort( array, pivote + 1, fin );//ordeno la lista de los mayores
    }
}
int main() {
    std::cout << "Ejercicio 05/03\n" << std::endl;
    return 0;
}