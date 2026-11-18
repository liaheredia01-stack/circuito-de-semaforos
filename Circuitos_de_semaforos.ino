
// SEMAFORO DE DOS VIAS Y SEMAFORO PEATONAL
// Arduino UNO - Proteus 8

// SEMAFORO VIA 1
const int rojo1 = 2;
const int amarillo1 = 3;
const int verde1 = 4;

// SEMAFORO VIA 2
const int rojo2 = 5;
const int amarillo2 = 6;
const int verde2 = 7;

// SEMAFORO PEATONAL
const int rojoPeaton = 8;
const int verdePeaton = 9;

void setup() {
  pinMode(rojo1, OUTPUT);
  pinMode(amarillo1, OUTPUT);
  pinMode(verde1, OUTPUT);

  pinMode(rojo2, OUTPUT);
  pinMode(amarillo2, OUTPUT);
  pinMode(verde2, OUTPUT);

  pinMode(rojoPeaton, OUTPUT);
  pinMode(verdePeaton, OUTPUT);
}

void apagarTodo() {
  digitalWrite(rojo1, LOW);
  digitalWrite(amarillo1, LOW);
  digitalWrite(verde1, LOW);

  digitalWrite(rojo2, LOW);
  digitalWrite(amarillo2, LOW);
  digitalWrite(verde2, LOW);

  digitalWrite(rojoPeaton, LOW);
  digitalWrite(verdePeaton, LOW);
}

void loop() {

  // 1. VIA 1 EN VERDE
  apagarTodo();
  digitalWrite(verde1, HIGH);
  digitalWrite(rojo2, HIGH);
  digitalWrite(rojoPeaton, HIGH);
  delay(5000);

  // 2. VIA 1 EN AMARILLO
  apagarTodo();
  digitalWrite(amarillo1, HIGH);
  digitalWrite(rojo2, HIGH);
  digitalWrite(rojoPeaton, HIGH);
  delay(2000);

  // 3. AMBAS VIAS EN ROJO
  apagarTodo();
  digitalWrite(rojo1, HIGH);
  digitalWrite(rojo2, HIGH);
  digitalWrite(rojoPeaton, HIGH);
  delay(1000);

  // 4. VIA 2 EN VERDE
  apagarTodo();
  digitalWrite(rojo1, HIGH);
  digitalWrite(verde2, HIGH);
  digitalWrite(rojoPeaton, HIGH);
  delay(5000);

  // 5. VIA 2 EN AMARILLO
  apagarTodo();
  digitalWrite(rojo1, HIGH);
  digitalWrite(amarillo2, HIGH);
  digitalWrite(rojoPeaton, HIGH);
  delay(2000);

  // 6. AMBAS VIAS EN ROJO
  apagarTodo();
  digitalWrite(rojo1, HIGH);
  digitalWrite(rojo2, HIGH);
  digitalWrite(rojoPeaton, HIGH);
  delay(1000);

  // 7. PASO PEATONAL
  apagarTodo();
  digitalWrite(rojo1, HIGH);
  digitalWrite(rojo2, HIGH);
  digitalWrite(verdePeaton, HIGH);
  delay(5000);

  // 8. PEATON EN ROJO
  apagarTodo();
  digitalWrite(rojo1, HIGH);
  digitalWrite(rojo2, HIGH);
  digitalWrite(rojoPeaton, HIGH);
  delay(1000);
}
