![icon](/docs/ApolloBlind.png)

# ApolloBlind :eyes:
![LICENSE](https://img.shields.io/github/license/Nicolas-albu/ApolloBlind?style=flat-square)
![VERSION](https://img.shields.io/github/manifest-json/v/Nicolas-albu/ApolloBlind?style=flat-square)

:warning: This project is still in development.

## The Repository

:rocket: ApolloBlind is a repository of a project initialy based on **Arduino Micro** (ATMega32U4), to help the Visually Impaired.

## Table of Contents

- [ApolloBlind :eyes:](#apolloblind-eyes)
  - [The Repository](#the-repository)
  - [Table of Contents](#table-of-contents)
  - [Non-functional Requirements](#non-functional-requirements)
  - [Components](#components)
  - [Scheme](#scheme)
  - [:computer: Coding](#computer-coding)
    - [Configuration of Sensor PIR1](#configuration-of-sensor-pir1)
    - [Configuration of Motor of Vibration M1](#configuration-of-motor-of-vibration-m1)
  - [:handshake: Contributing](#handshake-contributing)
  - [Futures changes](#futures-changes)
  - [:unlock: License](#unlock-license)
<!--- [Configuration of Button S1](#configuration-of-button-s1)--->

## Non-functional Requirements

Price: ?
Size: ?
Weight: ?
Potency: ?

## Components

| Name | Quantity | Component 
| ---- | -------- | --------- 
| U1   | 1        | Arduino Micro
| PIR1 | 1        | Sensor PIR
| M1   | 1        | Motor of Vibration

<!---
| S1   | 1        | Button
| R1   | 1        | 1 kΩ Resistor
| Bat1 | 1        | 3 x AA Battery
---->

## Scheme

![red](https://via.placeholder.com/15/FF0000/000000?text=+) `Positive` 
![black](https://via.placeholder.com/15/000000/000000?text=+) `Negative (GND)`
![green](https://via.placeholder.com/15/008000/000000?text=+) `Signal`

![scheme](/docs/Scheme.PNG)

## :computer: Coding 
### Configuration of Sensor PIR1

we define a global constant for the PIR Sensor pin.
```cpp
#define PIN_PIR A4
```
And we added a conditional in loop(), always checking if the PIR Sensor detected any movement at 3m.
```cpp
int valuePresence = digitalRead(PIN_PIR);
if (valuePresence == HIGH){...} 
else if (valuePresence == LOW){...}
```

### Configuration of Motor of Vibration M1

we define a global constant for the PIR Sensor pin.
```cpp
#define PIN_VIBRATOR A1
```
when the PIR Sensor receives motion information, it outputs to the vibration motor port, otherwise nothing happens.
```cpp
digitalWrite(PIN_VIBRATOR, HIGH);
digitalWrite(PIN_VIBRATOR, LOW);
```

## :handshake: Contributing

There are many ways in which you can participate in this project, for example:

* [Submit bugs and feature requests](https://github.com/Nicolas-albu/ApolloBlind/issues), and help us verify as they are checked in
* Review [source code changes](https://github.com/Nicolas/ApolloBlind/pulls)

If you are interested in fixing issues and contributing directly to the code base or scheme,
please see the document [How to Contribute](https://github.com/Nicolas-albu/ApolloBlind/wiki).

<!---
, which covers the following:
* [Coding guidelines](https://github.com/microsoft/vscode/wiki/Coding-Guidelines)
* [Contributing to translations](https://aka.ms/vscodeloc)
--->

## Futures changes

- [ ] Switch from a prefabricated board (Arduino Micro) to a custom one, to lower energy usage.
- [ ] :battery: Choose a battery for the ApolloBlind, or
- [ ] :electric_plug: Make the device rechargeable.
- [ ] Add an ON/OFF button on the custom board.
- [ ] Build a cover in 3d structure.

## :unlock: License

Copyright (c) 2021 Nícolas Albuquerque Ramos. All rights reserved.

Licensed under the [MIT](https://github.com/Nicolas-albu/ApolloBlind/blob/main/LICENSE) license.

<!--- Compre alguns ATmega328Ps soltos em um pacote DIP. Você pode obtê-los do Sparkfun ou Adafruit com o bootloader Optiboot já programado, ou obtê-los sem programação por alguns dólares a menos e usar uma placa Arduino como um ISP para carregar os esboços. Você pode encontrar tutoriais "Arduino em uma placa de ensaio" em toda a Internet. Depois de se familiarizar com isso, você poderá ter controle total sobre todo o hardware em seu circuito sem desperdício.

https://forum.arduino.cc/t/can-a-single-button-power-an-arduino-on-off-and-serve-as-a-multifunction-button/409755/7
>