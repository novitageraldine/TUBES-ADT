
#include "queue.h"

boolean IsEmpty (Queue Q)
{
	return ((Head(Q) == Nil) && (Tail(Q) == Nil));
}

boolean IsFull (Queue Q)
{
	return (Tail(Q) == MaxEl(Q));
}

int NBElmt (Queue Q)
{
	int Count;

	if (IsEmpty(Q))
	{
		Count = 0;
	}
	else
	{
		Count = (Tail(Q) - Head(Q) + 1);
	}
	return Count;
}

void CreateEmpty (Queue *Q, int Max)
{
	(*Q).T = (infotype *) malloc ((Max + 1) * sizeof(infotype));
	if ((*Q).T != NULL)
	{
		Head((*Q)) = Nil;
		Tail((*Q)) = Nil;
		MaxEl((*Q)) = Max;
	}
	else
	{
		MaxEl((*Q)) = Nil;
	}
}

void DeAlokasi (Queue *Q)
{
	MaxEl((*Q)) = Nil;
	free((*Q).T);
}

void Add (Queue *Q, infotype X)
{
	if(!IsFull((*Q)))
	{
		if(IsEmpty((*Q)))
		{
			Head((*Q)) = 1;
		}
		Tail((*Q)) = Tail((*Q)) + 1;
		InfoTail((*Q)) = X;
	}
}

void Del (Queue *Q, infotype *X)
{
	int i; /* pencacah */

	if(!IsEmpty((*Q)))
	{
		(*X) = InfoHead((*Q));
		if(NBElmt((*Q)) == 1)
		{
			Head((*Q)) = Nil;
			Tail((*Q)) = Nil;
		}
		else
		{
			i = Head((*Q));
			while(i <= Tail((*Q)))
			{
				(*Q).T[i] = (*Q).T[i+1];
				i = i + 1;
			}
			Tail((*Q)) = Tail((*Q)) - 1;
		}
	}
}

void CetakQueue(Queue Q)
{
	infotype Info;
	Queue QT;

	if (!IsEmpty(Q))
	{
		CreateEmpty(&QT, MaxEl(Q));
		while (!IsEmpty(Q))
		{
			Del(&Q, &Info);
			if (!IsEmpty(Q))
			{
				printf("%d ", Info);
			}
			else
			{
				printf("%d", Info);
			}
			Add(&QT, Info);
		}
		while (!IsEmpty(QT))
		{
			Del(&QT, &Info);
			Add(&Q, Info);
		}
	}
}

int IdxEff (Queue Q)
{
	return NBElmt(Q);
}

void CreateQueuePemain (Queue *Q, int Max)
{
	address i;
	infotype Pemain;
	char Nama[100];

	CreateEmpty (&(*Q), Max);

	for (i = 1; i <= Max; i = i + 1)
	{
		printf("Nama Pemain %d : ",i);
		scanf("%s", &Nama);
		strcpy(Pemain.Nama, Nama);
		Pemain.Skor = 0;
		Add(&(*Q),Pemain);
	}
}

boolean IsGame (Queue Q)
/* mengembalikan true apabila kondisi permainan berakhir terpenuhi, yaitu */
/* salah satu pemain mendapatkan skor sebesar 3 atau */
/* hanya tinggal satu pemain yang bermain */

{
	boolean found;
	infotype Info;
	Queue QT;

	found = false;

	if (!IsEmpty(Q))
	{
		CreateEmpty(&QT, MaxEl(Q));
		while (!IsEmpty(Q))
		{
			Del(&Q, &Info);
			if (Info.Skor == 3)
			{
				found = true;
			}
			Add(&QT, Info);
		}
		while (!IsEmpty(QT))
		{
			Del(&QT, &Info);
			Add(&Q, Info);
		}
	}

	return ((found) || (IdxEff(Q) == 1));
}

void ChangeTurn (Queue *Q)
{
	infotype Info;

	if (NBElmt((*Q)) >= 2)
	{
		Del(&(*Q), &Info);
		Add(&(*Q), Info);
	}
}

void PrintSkor (Queue Q)
{
	infotype Info;
	Queue QT;

	printf("--- Hasil --- \n");

	if (!IsEmpty(Q))
	{
		CreateEmpty(&QT, MaxEl(Q));
		while (!IsEmpty(Q))
		{
			Del(&Q, &Info);
			printf("%s : ", Info.Nama);
			printf("%d ", Info.Skor);
			Add(&QT, Info);
		}
		while (!IsEmpty(QT))
		{
			Del(&QT, &Info);
			Add(&Q, Info);
		}
	}
	printf("\n");
}

void PrintPemenang (Queue Q)
{
	printf("*** Permainan Berakhir *** \n");
	if (IdxEff(Q) == 1)
	{
		printf("Pemenang : %s \n", InfoHeadNama(Q));
	}
	else
	{
		infotype Info;
		Queue QT;

		if (!IsEmpty(Q))
		{
			CreateEmpty(&QT, MaxEl(Q));
			while (!IsEmpty(Q))
			{
				Del(&Q, &Info);
				if (Info.Skor == 3)
				{
					printf("Pemenang : %s \n", Info.Nama);
				}
				Add(&QT, Info);
			}
			while (!IsEmpty(QT))
			{
				Del(&QT, &Info);
				Add(&Q, Info);
			}
		}
	}
}

