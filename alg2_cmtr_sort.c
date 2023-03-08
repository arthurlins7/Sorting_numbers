#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void escolha(){
    printf("\n1.Arquivo com MIL números desordenados \n2.Arquivo com CINCO MIL números desordenados \n3.Arquivo com DEZ MIL números desordenados \n4.Arquivo com VINTE MIL números desordenados \n5.Arquivo com CINQUENTA MIL números desordenados \n6.Arquivo com SETENTA E CINCO MIL números desordenados \n7.Arquivo com CEM MIL números desordenados\n\nOpção: ");
}

//FUNÇÃO INSERTION SORT
void insertionSort(opcaoTXT){
   clock_t starttime, endtime; 
    double totaltime; 
    int k = 0, n = 0;
    int arr[100000];

    FILE* fptr; 
    FILE* fptw;

switch(opcaoTXT){
      case 1:
      fptr = fopen("1000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 2:
      fptr = fopen("5000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 3:
      fptr = fopen("10000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 4:
      fptr = fopen("20000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 5:
      fptr = fopen("50000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 6:
      fptr = fopen("75000.txt", "r");
      fptw = fopen("output.txt", "w"); 
      break;
      case 7:
      fptr = fopen("100000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
    }  

    while (fscanf(fptr, "%d", &arr[k]) == 1) 
    {
        n++; 
        k++; 
    }
    starttime = clock();
    for (int l = 1; l < k; l++){
    int key = arr[l];
    int j = l - 1;

    while (key < arr[j] && j >= 0) {
      arr[j + 1] = arr[j];
      --j;
    }
    arr[j + 1] = key;
  }

  endtime = clock();

  totaltime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC;

  fprintf(fptw,"---------------------------ORDENADO POR INSERTION SORT:----------------------------\n");
  for (k = 0; k < n; k++)
        fprintf(fptw,"%d ", arr[k]);

  printf("\nTempo total de execução = %f\n", totaltime);
fclose(fptr);
fclose(fptw);
}

//FUNÇÃO DO SELECTION SORT
void selectionsort(int opcaoTXT)
{
    clock_t starttime, endtime; 
    double totaltime; 
    int i = 0, j, n = 0, min, index;
    int arr[100000];

    FILE* fptr; 
    FILE* fptw;

    switch(opcaoTXT){
      case 1:
      fptr = fopen("1000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 2:
      fptr = fopen("5000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 3:
      fptr = fopen("10000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 4:
      fptr = fopen("20000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 5:
      fptr = fopen("50000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 6:
      fptr = fopen("75000.txt", "r");
      fptw = fopen("output.txt", "w"); 
      break;
      case 7:
      fptr = fopen("100000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
    }  

    while (fscanf(fptr, "%d", &arr[i]) == 1) 
    {
        n++; 
        i++; 
    }

    starttime = clock();
    for (i = 0; i < n - 1; i++) {
        min = arr[i];
        for (j = i + 1; j < n; j++) {
            if (arr[j] < min) {
                min = arr[j];
                index = j;
            }
        }

        int temp = arr[i];
        arr[i] = min;
        arr[index] = temp;
    }

    endtime = clock(); 
  
    totaltime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC;
  
    fprintf(fptw,"---------------------------ORDENADO POR SELECTION SORT:----------------------------\n");
    for (i = 0; i < n; i++)
        fprintf(fptw,"%d ", arr[i]);

    printf("\nTempo total de execução = %f\n", totaltime);
    fclose(fptr);
    fclose(fptw);
}

//FUNÇÃO BUBBLE SORT
void bubbleSort(opcaoTXT) {
  clock_t starttime, endtime; 
    double totaltime; 
    int k = 0,n = 0;
    int arr[100000];

    FILE* fptr; 
    FILE* fptw;

    switch(opcaoTXT){ 
      case 1:
      fptr = fopen("1000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 2:
      fptr = fopen("5000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 3:
      fptr = fopen("10000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 4:
      fptr = fopen("20000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 5:
      fptr = fopen("50000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 6:
      fptr = fopen("75000.txt", "r");
      fptw = fopen("output.txt", "w"); 
      break;
      case 7:
      fptr = fopen("100000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
    }  

    while (fscanf(fptr, "%d", &arr[k]) == 1) 
    {
        n++; 
        k++; 
    }

  starttime = clock(); 

  for (int l = 0; l < k - 1; ++l) {

    for (int i = 0; i < k - l - 1; ++i) {

      if (arr[i] > arr[i + 1]) {

        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
  }

  endtime = clock();

  totaltime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC;

  fprintf(fptw,"---------------------------ORDENADO POR BUBBLE SORT:----------------------------\n");
  for (k = 0; k < n; k++)
        fprintf(fptw,"%d ", arr[k]);
    printf("\nTempo total de execução = %f\n", totaltime);
fclose(fptr);
fclose(fptw);
}

//FUNÇÃO HEAPSORT
  void heapfy(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if (left < n && arr[left] > arr[largest])
      largest = left;
    if (right < n && arr[right] > arr[largest])
      largest = right;
    if (largest != i) {
      swap(&arr[i], &arr[largest]);
      heapfy(arr, n, largest);
    }
  }
  
  void heapSort(opcaoTXT) {
    
    clock_t starttime, endtime; 
    double totaltime; 
    int i = 0, j, n = 0, min, index;
    int arr[100000];

    FILE* fptr; 
    FILE* fptw;

    switch(opcaoTXT){
      case 1:
      fptr = fopen("1000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 2:
      fptr = fopen("5000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 3:
      fptr = fopen("10000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 4:
      fptr = fopen("20000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 5:
      fptr = fopen("50000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 6:
      fptr = fopen("75000.txt", "r");
      fptw = fopen("output.txt", "w"); 
      break;
      case 7:
      fptr = fopen("100000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
    }  

    while (fscanf(fptr, "%d", &arr[i]) == 1) 
    {
        n++; 
        i++; 
    }
    starttime = clock();
    for (int i = n / 2 - 1; i >= 0; i--)
      heapfy(arr, n, i);
    for (int i = n - 1; i >= 0; i--) {
      swap(&arr[0], &arr[i]);
      heapfy(arr, i, 0);
    }

      endtime = clock(); 
  
    totaltime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC;
  
    fprintf(fptw,"---------------------------ORDENADO POR HEAPSORT:----------------------------\n");
    for (i = 0; i < n; i++)
        fprintf(fptw,"%d ", arr[i]);
    printf("\nTempo total de execução = %f\n", totaltime);
fclose(fptr);
fclose(fptw);
}

//FUNÇÃO DO MERGESORT
void merge(int arr[], int p, int q, int r) {
  int n1 = q - p + 1;
  int n2 = r - q;
  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  int i, j, s;
  i = 0;
  j = 0;
  s = p;

  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[s] = L[i];
      i++;
    } else {
      arr[s] = M[j];
      j++;
    }
    s++;
  }

  while (i < n1) {
    arr[s] = L[i];
    i++;
    s++;
  }

  while (j < n2) {
    arr[s] = M[j];
    j++;
    s++;
  }
}

void msort(int arr[], int l, int r) {
  if (l < r) {

    int m = l + (r - l) / 2;

    msort(arr, l, m);
    msort(arr, m + 1, r);

    merge(arr, l, m, r);
  }
}

void mergeSort(opcaoTXT) {
  int k = 0,n = 0;
  clock_t starttime, endtime; 
  double totaltime;
  int arr[100000]; 
  
  FILE* fptr; 
  FILE* fptw;
  
  switch(opcaoTXT){
      case 1:
      fptr = fopen("1000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 2:
      fptr = fopen("5000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 3:
      fptr = fopen("10000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 4:
      fptr = fopen("20000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 5:
      fptr = fopen("50000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 6:
      fptr = fopen("75000.txt", "r");
      fptw = fopen("output.txt", "w"); 
      break;
      case 7:
      fptr = fopen("100000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
    }  

    while (fscanf(fptr, "%d", &arr[k]) == 1) 
  {
      n++; 
      k++; 
  }

  starttime = clock();
  msort(arr, 0, n - 1);
  endtime = clock();

 totaltime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC;
  
  fprintf(fptw,"---------------------------ORDENADO POR MERGESORT:----------------------------\n");

  for (k = 0; k < n; k++)
        fprintf(fptw,"%d ", arr[k]);
        
  printf("\nTempo total de execução = %f\n", totaltime);
  fclose(fptr);
  fclose(fptw);
}

//FUNÇÃO DO QUICKSORT
int partir(int array[], int baixo, int alto) {
  int pivo = array[alto];
  int i = (baixo - 1);

  for (int j = baixo; j < alto; j++) {
    if (array[j] <= pivo) {       
      i++;      
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[alto]);  
  return (i + 1);
}

void quick(int array[], int baixo, int alto) {
  
  if (baixo < alto) {
    int p = partir(array, baixo, alto);    
    quick(array, baixo, p - 1);    
    quick(array, p + 1, alto);
  }
}

void quickSort(opcaoTXT) {
  int k = 0,n = 0;
  clock_t starttime, endtime; 
  double totaltime; 
  int arr[100000];
  
  FILE* fptr; 
  FILE* fptw;

  switch(opcaoTXT){
      case 1:
      fptr = fopen("1000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 2:
      fptr = fopen("5000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 3:
      fptr = fopen("10000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 4:
      fptr = fopen("20000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 5:
      fptr = fopen("50000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
      case 6:
      fptr = fopen("75000.txt", "r");
      fptw = fopen("output.txt", "w"); 
      break;
      case 7:
      fptr = fopen("100000.txt", "r"); 
      fptw = fopen("output.txt", "w");
      break;
    }  

    while (fscanf(fptr, "%d", &arr[k]) == 1) 
    {
        n++; 
        k++; 
    }
  
  starttime = clock();
  quick(arr, 0, n - 1);
  endtime = clock();

  totaltime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC;

  fprintf(fptw,"---------------------------ORDENADO POR QUICKSORT:----------------------------\n");

  for (k = 0; k < n; k++)
        fprintf(fptw,"%d ", arr[k]);
        
    printf("\nTempo total de execução = %f\n", totaltime);
  fclose(fptr);
  fclose(fptw);
}

//FUNÇÃO PRINCIPAL
int main(){
int opcaoAlg, opcaoTXT;
opcaoAlg = 0;

while(opcaoAlg != 7){
printf("\nSeja bem vindo! Escolha uma opção dentre os algoritmos a seguir:\n");
printf("1.Insertion Sort \n2.Selection Sort \n3.Bubble Sort \n4.HeapSort\n5.MergeSort\n6.QuickSort\n7.Sair Do Programa\nOpção: ");

scanf("%d", &opcaoAlg);

switch(opcaoAlg){
  case 1: //InsertionSort
    printf("\nVocê escolheu a opção Insertion Sort!");
    printf("\n\nQual arquivo a seguir você deseja ordenar:");
    escolha();
    scanf("%d",&opcaoTXT);
    if(1 > opcaoTXT || opcaoTXT > 7){
      printf("OPÇÃO INVÁLIDA");
    }else{
    insertionSort(opcaoTXT);
    }
    break;

  case 2: //SelectionSort
    printf("\nVocê escolheu a opção Selection Sort!");
    printf("\n\nQual arquivo a seguir você deseja ordenar:");
    escolha();
    scanf("%d",&opcaoTXT);
    if(1 > opcaoTXT || opcaoTXT > 7){
      printf("OPÇÃO INVÁLIDA");
    }else{
    selectionsort(opcaoTXT);
    }
    break;

  case 3: //BubbleSort
    printf("\nVocê escolheu a opção Bubble Sort!");
    printf("\n\nQual arquivo a seguir você deseja ordenar:");
    escolha();
    scanf("%d",&opcaoTXT);
    if(1 > opcaoTXT || opcaoTXT > 7){
      printf("OPÇÃO INVÁLIDA");
    }else{
    bubbleSort(opcaoTXT);
    }
    break;

  case 4: //HeapSort
    printf("\nVocê escolheu a opção HeapSort!");
    printf("\n\nQual arquivo a seguir você deseja ordenar:");
    escolha();
    scanf("%d",&opcaoTXT);
    if(1 > opcaoTXT || opcaoTXT > 7){
      printf("OPÇÃO INVÁLIDA");
    }else{
    heapSort(opcaoTXT);
    }
    break;

  case 5: //MergeSort
    printf("\nVocê escolheu a opção MergeSort!");
    printf("\n\nQual arquivo a seguir você deseja ordenar:");
    escolha();
    scanf("%d",&opcaoTXT);
    if(1 > opcaoTXT || opcaoTXT > 7){
      printf("OPÇÃO INVÁLIDA");
    }else{
    mergeSort(opcaoTXT);
    }
    break;

   case 6: //QuickSort
    printf("\nVocê escolheu a opção QuickSort!");
    printf("\n\nQual arquivo a seguir você deseja ordenar:");
    escolha();
    scanf("%d",&opcaoTXT);
    if(1 > opcaoTXT || opcaoTXT > 7){
      printf("OPÇÃO INVÁLIDA");
    }else{
    quickSort(opcaoTXT);
    }
    break;
}
}
printf("PROGRAMA INTERROMPIDO!");
return 0;
}