#include <stdio.h>
#include <stdlib.h>

// Função para mesclar dois subvetores ordenados
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Cria arrays temporários
    int L[n1], R[n2];

    // Copia dados para os arrays temporários
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Mescla os arrays temporários de volta em arr[l..r]
    i = 0; // Índice inicial do primeiro subvetor
    j = 0; // Índice inicial do segundo subvetor
    k = l; // Índice inicial do subvetor mesclado
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copia quaisquer elementos restantes de L[]
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copia quaisquer elementos restantes de R[]
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Função principal do Merge Sort
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        // Encontra o ponto médio do array
        int m = l + (r - l) / 2;

        // Ordena a primeira e a segunda metade
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Mescla as duas metades
        merge(arr, l, m, r);
    }
}

// Função para imprimir um array
void printArray(int A[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

// Função principal para teste
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Array original: \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nArray ordenado: \n");
    printArray(arr, arr_size);
    return 0;
}