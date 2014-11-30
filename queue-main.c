

#include "queue.h"

int Max;
int turn;
int varone;
int vartwo;
Queue Q;
char choice[100];
boolean YT;
infotype Info;

int main ()
{
	Max = 0;
	printf("** Ganesa Let's Get Rich ** \n");

	while ((Max < 2) || (Max > 4))
	{
		printf("Masukkan jumlah Pemain : ");
		scanf("%d", &Max);
		if ((Max < 2) || (Max > 4))
		{
			printf("Input tidak valid. Coba lagi! \n");
		}
	}
	CreateQueuePemain (&Q, Max);

	printf("\n");
	printf("** Permainan Dimulai ** \n");
	turn = 1;

	while (!IsGame(Q))
	{
		printf("--- Turn %d --- \n", turn);
		printf("Giliran : %s \n", InfoHeadNama(Q));

		YT = true;
		while (YT)
		{
			printf("Kocok dadu : ");
			scanf("%s", &choice);
			if (strcmp(choice, "Ya") == 0)
			{
				YT = false;
				printf("--- Hasil --- \n");

				srand(time(NULL));
				varone = rand() % 6 + 1;
				printf("Dadu 1 : %d \n", varone);

				vartwo = rand() % 6 + 1;
				printf("Dadu 2 : %d \n", vartwo);

			}
			else
			{
				if(strcmp(choice, "Tidak") == 0)
				{
					YT = false;
					Del(&Q, &Info);
					printf("NOTE : %s keluar dari permainan \n", Info.Nama);
					printf("\n");
				}
				else
				{
					YT = true;
					printf("Input tidak valid \n");
				}
			}
		}

		turn = turn + 1;
	}

	PrintPemenang(Q);
	return 0;
}

