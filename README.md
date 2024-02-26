# Projeto Arduino de Sensor Ultrassônico para Medição de Distância

![Descrição da imagem](https://github.com/EduardoDosSantosFerreira/insonic-cpp/blob/main/insonic.png)

O código implementa um projeto que utiliza um sensor ultrassônico para medir a distância de um objeto em centímetros. Com base na leitura da distância, o código aciona LEDs de acordo com faixas pré-definidas de distância.

## Componentes Utilizados

- 1 Sensor ultrassônico
- 3 LEDs (Vermelho, Verde, Azul)

## Funcionamento do Código

1. **Configuração Inicial**

   - O código define os pinos para os LEDs e inicia a comunicação serial.
   - O sensor ultrassônico é inicializado para leitura da distância.

2. **Leitura da Distância**

   - O sensor ultrassônico realiza a leitura da distância do objeto em centímetros.
   - A distância lida é impressa no monitor serial.

3. **Controle dos LEDs**

   - Com base na leitura da distância, o código aciona os LEDs de acordo com as seguintes condições:
     - Se a distância for menor ou igual a 5 cm, acende o LED Verde.
     - Se a distância for maior que 5 cm e menor ou igual a 65 cm, acende o LED Azul.
     - Se a distância for maior que 65 cm, acende o LED Vermelho.

## Considerações Finais

Esse projeto demonstra como utilizar um sensor ultrassônico para medir distâncias e como reagir com base nas leituras obtidas. A aplicação prática pode incluir sistemas de detecção de obstáculos em veículos, controle de acesso em ambientes controlados, entre outras aplicações relacionadas à medição de distâncias.
