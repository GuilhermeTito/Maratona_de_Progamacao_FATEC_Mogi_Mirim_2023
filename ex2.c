int sequencia[100];
sequencia[0] = 1;
sequencia[1] = 1;
sequencia[2] = 1;
sequencia[3] = 2;
sequencia[4] = 2;
sequencia[5] = 2;
int power = 3;

for (int i = 6; i < 100; ++i) {
sequencia[i] = sequencia[i - 6] + sequencia[i - 5] + sequencia[i - 4] + sequencia[i - 3] + sequencia[i - 2] + sequencia[i - 1];
}

int entrada;
scanf("%d",&entrada);
printf("%d ", sequencia[entrada - 1]);
