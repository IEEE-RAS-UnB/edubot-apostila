#include <Sparki.h>;

int botao, numero, primeiro, operacao, segundo, falha = 0, passo = 1;

void setup()
{
    sparki.clearLCD();
    sparki.updateLCD();
}

void loop()
{
    botao = sparki.readIR();
    if(botao != -1)
    {
        if(passo == 1 || passo == 3)
        {
            if(botao == 25)
            {
                numero = 0;
            } else if(botao == 12)
            {
                numero = 1;
            } else if(botao == 24)
            {
                numero = 2;
            } else if(botao == 94)
            {
                numero = 3;
            } else
            {
                falha = 1;
            }
            if(falha != 1)
            {
                if(passo == 1)
                {
                    sparki.clearLCD();
                    primeiro = numero;
                    sparki.print(primeiro);
                } else if(passo == 3)
                {
                    segundo = numero;
                    sparki.print(segundo);
                }
                sparki.updateLCD();
                delay(2000);
            }
            passo = passo + 1;
        } else if(passo == 2)
        {
            if(botao == 22)
            {
                operacao = -1;
            } else if(botao == 13)
            {
                operacao = 1;
            } else
            {
                falha = 1;
            }
            if(falha != 1)
            {
                sparki.clearLCD();
                if(operacao == -1)
                {
                    sparki.print(" - ");
                } else
                {
                    sparki.print(" + ");
                }
                sparki.updateLCD();
                delay(2000);
            }
            passo = passo + 1;
        }
        if(passo == 4 && falha != 1)
        {
            if(operacao == -1)
            {
                resultado = primeiro - segundo;
            } else if(operacao == 1)
            {
                resultado = primeiro + segundo;
            }
            sparki.print(" = ");
            sparki.print(resultado);
            sparki.updateLCD();
            delay(2000);
            passo = 1;
        }
    }
    if(falha == 1)
    {
        passo = passo - 1;
    }
}