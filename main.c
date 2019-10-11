#include <stdio.h>
#include <stdlib.h>

#define N 20
#include <conio.h>

//A partir de un archivo de texto con claves y calificaciones de alumnos, creae 2 archivos binarios, uno con los datos de los archivos reprobadios y otro con los aprobados

typedef struct{
    int napillo;
    }Tcaracter;

int main()
{
    int arr[N][N];
    int tecla, band, x,y,aux, aux2;
    band=0;
    Napo(&arr);
    x=0;
    y=0;
    aux2=8;

    do
    {
        imprimir(arr);
        //if(kbhit())
        //{
            tecla=getch();
        //}
        switch(tecla)
        {
        case 72: //arriba
            if(x!=0)
            {
                aux=arr[x-1][y];
                if(aux!=4&&aux!=5&&aux!=7&&aux!=10)
                {
                    arr[x-1][y]=arr[x][y];
                    arr[x][y]=aux2;
                    aux2=aux;
                    x--;
                    //delayi();
                }
            }
            break;
            case 80: //abajo
                if(x!=N-1)
            {
                aux=arr[x+1][y];
                if(aux!=3&&aux!=6&&aux!=8&&aux!=10)
                {
                    arr[x+1][y]=arr[x][y];
                    arr[x][y]=aux2;
                    aux2=aux;
                    x++;
                    //delayi();
                }
            }
            break;
            case 75: //izquierda
                 if(y!=0)
                {
                    aux=arr[x][y-1];
                    if(aux!=1&&aux!=2&&aux!=3&&aux!=4)
                    {
                        arr[x][y-1]=arr[x][y];
                        arr[x][y]=aux2;
                        aux2=aux;
                        y--;
                        //delayi();
                    }
                }
            break;
            case 77: //derecha
                if(y!=N-1)
                {
                    aux=arr[x][y+1];
                    if(aux!=2&&aux!=5&&aux!=6&&aux!=9)
                    {
                        arr[x][y+1]=arr[x][y];
                        arr[x][y]=aux2;
                        aux2=aux;
                        y++;
                        //delayi();
                    }
                }

            break;

        }
        if(x==17&&y==19)
        {
            band=1;
        }
        system("cls");
    }while(band==0);
    carita();
    printf("\n\n\nHaz logrado salir del laberinto\n\n");
//printf("\n\n\n\n\nFelicidades haz logrado salir de mi laberinto de la tortura\n\n\n\n\n");
}

void Napo(int *arr[N][N])
{
    Tcaracter all;
    FILE *fp;
    int cont, cont2, cont3;
    fp=fopen("labprueba.txt","r");
    fscanf(fp,"%d",&all.napillo);
    //while(!feof(fp))//Verifica si ya llego el ind pos al fin de archivo
    //{
        for(cont2=0;cont2<N&&!feof(fp);cont2++)
        {
            for(cont3=0;cont3<N;cont3++)
            {
                arr[cont2][cont3]=all.napillo;
                fscanf(fp,"%d",&all.napillo);
            }

        }
    //}

    fclose(fp);

}

void imprimir(int arr[N][N])
{
    int cont2, cont3, donita;
   for(cont2=0;cont2<N;cont2++)
        {
            printf("\n");
            for(cont3=0;cont3<N;cont3++)
            {
                donita=arr[cont2][cont3];
                switch(donita)
                {
                case 1:
                    printf("%c",185);
                    break;
                case 2:
                    printf("%c", 186);
                    break;
                case 3:
                    printf("%c", 187);
                    break;
                case 4:
                    printf("%c", 188);
                    break;
                case 5:
                    printf("%c", 200);
                    break;
                case 6:
                    printf("%c", 201);
                    break;
                case 7:
                    printf("%c", 202);
                    break;
                case 8:
                    printf("%c", 203);
                    break;
                case 9:
                    printf("%c", 204);
                    break;
                case 10:
                    printf("%c", 205);
                    break;
                case 11:
                    printf("%c", 206);
                    break;
                case 12:
                    printf("%c", 254 );
                    break;

        }
            }
            }
}


void carita()
{
    Tcaracter c;
    FILE *fp;
    int cont;
    fp=fopen("carita.txt","r");
    fscanf(fp,"%d",&c.napillo);
    while(!feof(fp))//Verifica si ya llego el ind pos al fin de archivo
    {
        for(cont=1;cont<=40;cont++)
        {
        switch(c.napillo)
        {
        case 1:
            printf(" ");
            break;
        case 2:
            printf("%c", 219);
            break;
        }
        fscanf(fp,"%d",&c.napillo);
        }
        printf("\n");
    }

    fclose(fp);

}

