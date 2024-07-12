 #include <iostream>
 using namespace std;
 int main() {
   float velocidadeA, velocidadeB, distancia, tempo;
   cout<<"Informe a Velocidade do primeiro veiculo:";
   cin>>velocidadeA;
   cout<<"Informe a Velocidade do segundo veiculo:";
   cin>>velocidadeB;
   cout<<"Informe a Distancia entre eles:";
   cin>>distancia;
    //SoA + VA * T = SoB + VB * T
   //VA * T - VB * T = SoB - SoA
   //T*(VA - VB) = SoB - SoA
   //T = (SoB-SoA)/(VA-VB)
   tempo = (distancia - 0)/(velocidadeA - velocidadeB);
   //lembrar que a velocidade de B é negativa, já que o veículo está
   //movendo-se em sentido contrário a A, ou seja, SfB < SiB. Isso faz
   //delta(S) que é Sf - Si, ficar negativo, negativando a Velocidade.
   //V = delta(S)/delta(T)
   cout<<"O tempo de encontro eh:"<<tempo;
   return 0;
 }
