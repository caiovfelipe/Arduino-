// Constants
const int button1pin = 2;
const int button2pin = 3;
const int ledpin = 13;

// Variables
int button1state;
int button2state;

void setup(){
    pinMode(button1pin, INPUT);   // Corrigido: pinMode com "p" minúsculo
    pinMode(button2pin, INPUT);   // Corrigido: nome correto da variável (button2pin)
    pinMode(ledpin, OUTPUT);      // Definir LED como saída
}

void loop(){
    // Leitura do estado dos botões
    button1state = digitalRead(button1pin);
    button2state = digitalRead(button2pin);

    // Lógica: acende o LED se apenas um botão estiver pressionado
    if ((button1state == LOW || button2state == LOW) && !(button1state == LOW && button2state == LOW)) {
        digitalWrite(ledpin, HIGH);  // Acende o LED
    } else {
        digitalWrite(ledpin, LOW);   // Apaga o LED
    }
}
